#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <cmath>
#include <QJSEngine>
#include <QRegularExpression>
#include <QDialog>
#include <QVBoxLayout>
#include <QLabel>
#include <QPushButton>
#include <QFrame>
#include <QFont>

double num_first;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setFixedSize(301, 468);
    start_new = true;

    QIcon appIcon(":/img/img/calculator.jpg");
    setWindowIcon(appIcon);

    connect(ui->pushButton_0, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_1, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_2, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_3, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_4, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_5, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_6, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_7, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_8, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_9, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_9, SIGNAL(clicked()), this, SLOT(on_pushButton_znaki()));
    connect(ui->pushButton_plusminus, SIGNAL(clicked()), this, SLOT(operations()));
    connect(ui->pushButton_percent, SIGNAL(clicked()), this, SLOT(operations()));
    connect(ui->pushButton_mul, SIGNAL(clicked()), this, SLOT(math_operations()));
    connect(ui->pushButton_mul, SIGNAL(clicked()), this, SLOT(on_pushButton_znaki()));
    connect(ui->pushButton_plus, SIGNAL(clicked()), this, SLOT(math_operations()));
    connect(ui->pushButton_plus, SIGNAL(clicked()), this, SLOT(on_pushButton_znaki()));
    connect(ui->pushButton_minus, SIGNAL(clicked()), this, SLOT(math_operations()));
    connect(ui->pushButton_minus, SIGNAL(clicked()), this, SLOT(on_pushButton_znaki()));
    connect(ui->pushButton_divide, SIGNAL(clicked()), this, SLOT(math_operations()));
    connect(ui->pushButton_divide, SIGNAL(clicked()), this, SLOT(on_pushButton_znaki()));
    connect(ui->pushButton_cos, SIGNAL(clicked()), this, SLOT(trigon_operations()));
    connect(ui->pushButton_sin, SIGNAL(clicked()), this, SLOT(trigon_operations()));
    connect(ui->pushButton_tan, SIGNAL(clicked()), this, SLOT(trigon_operations()));
    connect(ui->pushButton_ctg, SIGNAL(clicked()), this, SLOT(trigon_operations()));
    connect(ui->pushButton_arccos, SIGNAL(clicked()), this, SLOT(trigon_operations()));
    connect(ui->pushButton_arcsin, SIGNAL(clicked()), this, SLOT(trigon_operations()));
    connect(ui->pushButton_arctan, SIGNAL(clicked()), this, SLOT(trigon_operations()));
    connect(ui->pushButton_arcctg, SIGNAL(clicked()), this, SLOT(trigon_operations()));
    connect(ui->pushButton_bracket_left, SIGNAL(clicked()), this, SLOT(pushButton_bracket_left_clicked()));
    connect(ui->pushButton_bracket_right, SIGNAL(clicked()), this, SLOT(pushButton_bracket_right_clicked()));
    connect(ui->pushButton_pow, SIGNAL(clicked()), this, SLOT(pushButton_pow_clicked()));
    connect(ui->pushButton_square, SIGNAL(clicked()), this, SLOT(pushButton_square_clicked()));

    ui->pushButton_divide->setCheckable(true);
    ui->pushButton_plus->setCheckable(true);
    ui->pushButton_minus->setCheckable(true);
    ui->pushButton_mul->setCheckable(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::digits_numbers(){
    QPushButton *button = (QPushButton *)sender();
    QString current_text = ui->result_show->text();
    QString ops = current_text.mid(1);

    if(start_new) {
        ui->result_show_result_operation->setText("0");
        start_new = false;
        ui->result_show->setText(button->text());
        return;
    }

    if(current_text == "0") {
        ui->result_show->setText(button->text());
        return;
    }

    if(!ops.contains("+") && !ops.contains("-") &&
        !ops.contains("*") && !ops.contains("/")) {
        ui->result_show->setText(current_text + button->text());
        return;
    }

    ui->result_show->setText(current_text + button->text());
}

void MainWindow::pushButton_bracket_left_clicked() {
    QString current_text = ui->result_show->text();
    QChar lastChar = current_text.right(1).at(0);

    if(start_new || current_text == "0") {
        ui->result_show->setText("(");
        start_new = false;
        return;
    }

    if ((lastChar >= '0' && lastChar <= '9') || lastChar == ')') {
        ui->result_show->setText(current_text + "*(");
    } else {
        ui->result_show->setText(current_text + "(");
    }
}

void MainWindow::pushButton_bracket_right_clicked() {
    QString text = ui->result_show->text();

    int openCount = text.count('(');
    int closeCount = text.count(')');

    if (openCount > closeCount) {
        ui->result_show->setText(text + ")");
        start_new = false;
    }
}

void MainWindow::on_pushButton_dot_clicked()
{
    QString text = ui->result_show->text();
    QStringList parts_numbers =  text.split(QRegularExpression("[+\\-*/]"));
    QString last_number = parts_numbers.last();

    if(!(last_number.contains("."))){
        ui->result_show->setText(ui->result_show->text() + ".");
    }
}


void MainWindow::operations(){

    QPushButton *button = (QPushButton *)sender();

    double all_numbers;
    QString new_label;

    if(button->text() == "+/-") {
        all_numbers = (ui->result_show->text().toDouble());
        all_numbers = all_numbers * -1;
        new_label = QString::number(all_numbers, 'g', 15);
        ui->result_show->setText(new_label);
    } else     if(button->text() == "%") {
        all_numbers = (ui->result_show->text().toDouble());
        all_numbers = all_numbers * 0.01;
        new_label = QString::number(all_numbers, 'g', 15);
        ui->result_show->setText(new_label);
    }
}

void MainWindow::math_operations(){
    QPushButton *button = (QPushButton *)sender();

    num_first = ui->result_show->text().toDouble();
    button->setChecked(true);

}

void MainWindow::pushButton_square_clicked(){
    QString text = ui->result_show->text();

    if(text.isEmpty() || text == "0") {
        ui->result_show->setText("0^2");
        start_new = false;
        return;
    }

    QChar last_element = text.right(1).at(0);

    if((last_element >= '0' && last_element <= '9') || last_element == ')') {
        if(text.endsWith("^2")){return;}
        ui->result_show->setText(text + "^2");
        start_new = false;
    } else if (last_element == '+' || last_element == '-' ||
         last_element == '*' || last_element == '/' ||
         last_element == '^' || last_element == '.' ||
        last_element == '(') {return;}
}

void MainWindow::pushButton_pow_clicked(){
    QString text = ui->result_show->text();

    if (text.isEmpty() || text == "0") {
        ui->result_show->setText("0^(");
        start_new = false;
        return;
    }

    QChar last_element = text.right(1).at(0);

    if ((last_element >= '0' && last_element <= '9') ||
        last_element == ')' ||
        text.endsWith("^2")) {

        ui->result_show->setText(text + "^(");
        start_new = false;

    } else if (last_element == '+' || last_element == '-' ||
               last_element == '*' || last_element == '/' ||
               last_element == '^' || last_element == '.' ||
               last_element == '(') {
        return;
    }
}

void MainWindow::on_pushButton_sqrt_clicked()
{
    QString text = ui->result_show->text();

    if (start_new || text == "0") {
        ui->result_show->setText("√(");
        start_new = false;
        return;
    }

    QChar lastChar = text.right(1).at(0);

    if ((lastChar >= '0' && lastChar <= '9') || lastChar == ')') {
        ui->result_show->setText(text + "*√(");
    } else {
        ui->result_show->setText(text + "√(");
    }

    start_new = false;
}

void MainWindow::on_pushButton_10pow_clicked()
{
    QString text = ui->result_show->text();

    if (start_new || text == "0") {
        ui->result_show->setText("10^(");
        start_new = false;
        return;
    }

    QChar lastChar = text.right(1).at(0);

    if ((lastChar >= '0' && lastChar <= '9') || lastChar == ')') {
        ui->result_show->setText(text + "*10^(");
    } else {
        ui->result_show->setText(text + "10^(");
    }

    start_new = false;
}

void MainWindow::trigon_operations() {
    QPushButton *button = (QPushButton *)sender();
    QString current_text = ui->result_show->text();
    QString func_name;

    if(button->text() == "cos x")
        func_name = "cos(";
    else if(button->text() == "sin x")
        func_name = "sin(";
    else if(button->text() == "tan x")
        func_name = "tan(";
    else if(button->text() == "ctg x")
        func_name = "ctg(";
    else if(button->text() == "arccos x")
        func_name = "acos(";
    else if(button->text() == "arcsin x")
        func_name = "asin(";
    else if(button->text() == "arctan x")
        func_name = "atan(";
    else if(button->text() == "arcctg x")
        func_name = "actg(";

    if(start_new) {
        ui->result_show->setText(func_name);
        start_new = false;
    } else {
        ui->result_show->setText(current_text + func_name);
    }
}

void MainWindow::on_pushButton_ac_clicked()
{
    ui->pushButton_plus->setChecked(false);
    ui->pushButton_minus->setChecked(false);
    ui->pushButton_divide->setChecked(false);
    ui->pushButton_mul->setChecked(false);

    ui->result_show->setText("0");
    ui->result_show_result_operation->setText("");

    start_new = true;
}

void MainWindow::on_pushButton_del_clicked() {
    QString text = ui->result_show->text();
    text = text.chopped(1);
    ui->result_show->setText(text);
}

void MainWindow::on_pushButton_znaki(){
    QPushButton *button = (QPushButton * )sender();
    QString current_text = ui->result_show->text();
    QString new_label;
    if(button->text() == "+"){
        ui->result_show->setText(current_text + "+");
    }
    else if(button->text() == "-"){
        ui->result_show->setText(current_text + "-");
    }
    else if(button->text() == "*"){
        ui->result_show->setText(current_text + "*");
    }
    else if(button->text() == "/"){
        ui->result_show->setText(current_text + "/");
    }
}

void MainWindow::on_pushButton_exp_clicked() {
    QString text = ui->result_show->text();

    if(start_new || text == "0"){
        ui->result_show->setText("exp(");
        start_new = false;
        return;
    }

    QChar last_element = text.right(1).at(0);

    if((last_element >= '0' && last_element <= '9') || last_element == ')')
        ui->result_show->setText(text + "*exp(");
    else
        ui->result_show->setText(text + "exp(");

    start_new = false;
}

void MainWindow::on_pushButton_pi_clicked()
{
    QString text = ui->result_show->text();

    if (start_new || text == "0") {
        ui->result_show->setText("π");
        start_new = false;
        return;
    }

    QChar lastChar = text.right(1).at(0);

    if ((lastChar >= '0' && lastChar <= '9') ||
        lastChar == ')' ||
        lastChar == "π" ||
        lastChar == 'e' ||
        lastChar == "φ") {
        ui->result_show->setText(text + "*π");
    } else {
        ui->result_show->setText(text + "π");
    }

    start_new = false;
}

void MainWindow::on_pushButton_euler_clicked()
{
    QString text = ui->result_show->text();

    if (start_new || text == "0") {
        ui->result_show->setText("e");
        start_new = false;
        return;
    }

    QChar lastChar = text.right(1).at(0);

    if ((lastChar >= '0' && lastChar <= '9') ||
        lastChar == ')' ||
        lastChar == "π" ||
        lastChar == 'e' ||
        lastChar == "φ") {
        ui->result_show->setText(text + "*e");
    } else {
        ui->result_show->setText(text + "e");
    }

    start_new = false;
}

void MainWindow::on_pushButton_phi_clicked()
{
    QString text = ui->result_show->text();

    if (start_new || text == "0") {
        ui->result_show->setText("φ");
        start_new = false;
        return;
    }

    QChar lastChar = text.right(1).at(0);

    if ((lastChar >= '0' && lastChar <= '9') ||
        lastChar == ')' ||
        lastChar == "π" ||
        lastChar == 'e' ||
        lastChar == "φ") {
        ui->result_show->setText(text + "*φ");
    } else {
        ui->result_show->setText(text + "φ");
    }

    start_new = false;
}


void MainWindow::on_pushButton_ln_clicked()
{
    QString text = ui->result_show->text();

    if (start_new || text == "0") {
        ui->result_show->setText("ln(");
        start_new = false;
        return;
    }

    QString lastChar = text.right(1);

    if (lastChar == ")" || lastChar == "π" || lastChar == "e" ||
        lastChar == "φ" || (lastChar >= "0" && lastChar <= "9")) {
        ui->result_show->setText(text + "*ln(");
    } else {
        ui->result_show->setText(text + "ln(");
    }

    start_new = false;
}

void MainWindow::on_pushButton_log_clicked()
{
    QString text = ui->result_show->text();

    if (start_new || text == "0") {
        ui->result_show->setText("lg(");
        start_new = false;
        return;
    }

    QString lastChar = text.right(1);

    if (lastChar == ")" || lastChar == "π" || lastChar == "e" ||
        lastChar == "φ" || (lastChar >= "0" && lastChar <= "9")) {
        ui->result_show->setText(text + "*lg(");
    } else {
        ui->result_show->setText(text + "lg(");
    }

    start_new = false;
}

void MainWindow::on_pushButton_equal_clicked()
{
    QString expression = ui->result_show->text();
    QString original_formula = expression;

    expression.replace("ln(", "Math.log(");
    expression.replace("lg(", "Math.log10(");
    expression.replace("exp(", "Math.exp(");
    expression.replace("√(", "Math.sqrt(");

    expression.replace("^2", "**2");
    expression.replace("^(", "**(");

    QRegularExpression ePattern("\\be\\b");
    expression.replace(ePattern, "Math.E");
    expression.replace("π", "Math.PI");
    expression.replace("φ", "((1 + Math.sqrt(5)) / 2)");

    expression.replace("10^(", "10**(");

    //----------------------------тригонометрия---------------------------------
    QRegularExpression funcPattern("(a?)(cos|sin|tan)\\(");

    expression.replace(funcPattern, "Math.\\1\\2(");
    expression.replace("ctg(", "1/Math.tan(");
    expression.replace("acot(", "Math.atan(1/");  // acot(x) = atan(1/x)

    QRegularExpression cosPattern("Math\\.cos\\(([^)]+)\\)");
    expression.replace(cosPattern, "Math.cos(\\1 * Math.PI / 180)");

    QRegularExpression sinPattern("Math\\.sin\\(([^)]+)\\)");
    expression.replace(sinPattern, "Math.sin(\\1 * Math.PI / 180)");

    QRegularExpression tanPattern("Math\\.tan\\(([^)]+)\\)");
    expression.replace(tanPattern, "Math.tan(\\1 * Math.PI / 180)");

    QRegularExpression ctgPattern("1/Math\\.tan\\(([^)]+)\\)");
    expression.replace(ctgPattern, "1/Math.tan(\\1 * Math.PI / 180)");

    QRegularExpression acosPattern("Math\\.acos\\(([^)]+)\\)");
    expression.replace(acosPattern, "(Math.acos(\\1) * 180 / Math.PI)");

    QRegularExpression asinPattern("Math\\.asin\\(([^)]+)\\)");
    expression.replace(asinPattern, "(Math.asin(\\1) * 180 / Math.PI)");

    QRegularExpression atanPattern("Math\\.atan\\(([^)]+)\\)");
    expression.replace(atanPattern, "(Math.atan(\\1) * 180 / Math.PI)");

    QRegularExpression acotPattern("Math\\.atan\\(1/([^)]+)\\)");
    expression.replace(acotPattern, "(Math.atan(1/\\1) * 180 / Math.PI)");
    //----------------------------------------------------------------------------

    double result = QJSEngine().evaluate(expression).toNumber();
    ui->result_show->setText(QString::number(result, 'f', 3));
    ui->result_show_result_operation->setText(original_formula);

    start_new = true;
}


// -------------- Кнопка "О программе" --------------
void MainWindow::on_pushButton_about_clicked()
{
    showAboutDialog();
}

void MainWindow::showAboutDialog()
{
    QDialog *dialog = new QDialog(this);
    dialog->setWindowTitle("О программе");
    dialog->setFixedSize(400, 300);
    QVBoxLayout *layout = new QVBoxLayout(dialog);
    layout->setSpacing(15);
    layout->setContentsMargins(30, 30, 30, 30);

    QLabel *titleLabel = new QLabel("🧮 Научный Калькулятор", dialog);
    titleLabel->setFont(QFont("Arial", 13, QFont::Bold));
    titleLabel->setAlignment(Qt::AlignCenter);
    titleLabel->setMinimumHeight(40);
    layout->addWidget(titleLabel);

    QLabel *versionLabel = new QLabel("Версия 1.0.5", dialog);
    versionLabel->setFont(QFont("Arial", 10));
    versionLabel->setAlignment(Qt::AlignCenter);
    layout->addWidget(versionLabel);

    QFrame *line = new QFrame(dialog);
    line->setFrameShape(QFrame::HLine);
    line->setFrameShadow(QFrame::Sunken);
    layout->addWidget(line);

    QLabel *devLabel = new QLabel("👨‍💻 <b>Разработчик:</b> Егор @m1k1isback<br>", dialog);
    devLabel->setTextFormat(Qt::RichText);
    devLabel->setAlignment(Qt::AlignCenter);
    layout->addWidget(devLabel);

    QLabel *testerLabel = new QLabel("🧪 <b>Бета-тестировщик:</b> Некит @Anchous090<br>", dialog);
    testerLabel->setTextFormat(Qt::RichText);
    testerLabel->setAlignment(Qt::AlignCenter);
    layout->addWidget(testerLabel);

    QFrame *line2 = new QFrame(dialog);
    line2->setFrameShape(QFrame::HLine);
    line2->setFrameShadow(QFrame::Sunken);
    layout->addWidget(line2);

    QLabel *yearLabel = new QLabel("© 2026 Все права защищены", dialog);
    yearLabel->setFont(QFont("Arial", 8));
    yearLabel->setAlignment(Qt::AlignCenter);
    layout->addWidget(yearLabel);

    QPushButton *okButton = new QPushButton("OK", dialog);
    okButton->setFixedWidth(100);
    layout->addWidget(okButton, 0, Qt::AlignCenter);
    connect(okButton, &QPushButton::clicked, dialog, &QDialog::accept);

    dialog->exec();
    delete dialog;
}

