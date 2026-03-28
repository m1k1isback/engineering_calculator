#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QList>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QString current_expression;
    bool start_new;
private slots:
    void digits_numbers();
    void on_pushButton_exp_clicked();
    void on_pushButton_dot_clicked();
    void operations();
    void on_pushButton_ac_clicked();
    void on_pushButton_equal_clicked();
    void math_operations();
    void trigon_operations();
    void on_pushButton_znaki();
    void pushButton_bracket_left_clicked();
    void pushButton_bracket_right_clicked();
    void on_pushButton_del_clicked();
    void pushButton_square_clicked();
    void pushButton_pow_clicked();
    void on_pushButton_sqrt_clicked();
    void on_pushButton_10pow_clicked();
    void on_pushButton_pi_clicked();
    void on_pushButton_euler_clicked();
    void on_pushButton_phi_clicked();
    void on_pushButton_ln_clicked();
    void on_pushButton_log_clicked();
    void on_pushButton_about_clicked();
    void showAboutDialog();
};
#endif // MAINWINDOW_H
