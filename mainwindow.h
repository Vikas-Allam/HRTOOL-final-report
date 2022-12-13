#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QString>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QString numToWords(int n, QString s);
    QString convertToWords(long n);




private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_dateEdit_2_userDateChanged(const QDate &date);

    void on_checkBox_2_clicked();

    void on_comboBox_currentIndexChanged(int index);

    void on_comboBox_editTextChanged(const QString &arg1);

    void on_dateEdit_userDateChanged(const QDate &date);



    void on_FFtool_clicked();



    void on_RL_generate_clicked();

    void on_RL_signButton_clicked();

    void on_RL_comboBox_editTextChanged(const QString &arg1);

    void on_RL_comboBox_currentIndexChanged(int index);

    void on_comboBox_4_currentIndexChanged(int index);

    void on_in6_userDateChanged(const QDate &date);

    void on_in5_userDateChanged(const QDate &date);

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
