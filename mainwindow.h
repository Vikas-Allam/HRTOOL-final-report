#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();


    void on_pushButton_2_clicked();

   // void on_comboBox_activated(int index);

    void on_dateEdit_2_userDateChanged(const QDate &date);

    void on_checkBox_2_clicked();

    void on_comboBox_currentIndexChanged(int index);

    void on_comboBox_editTextChanged(const QString &arg1);

    void on_dateEdit_userDateChanged(const QDate &date);

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
