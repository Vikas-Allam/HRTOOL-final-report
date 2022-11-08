#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QString>
#include<QPdfWriter>
#include<QPainter>
#include<iostream>
#include<ctime>
#include<time.h>
#include<QFileDialog>
#include <QDebug>
#include<QDateEdit>
#include<QFont>
#include<QCalendarWidget>
#include<QWidget>
#include<QMessageBox>
#include<QDate>
#include<Qt>
#include<QFile>
#include <QDirIterator>
#include<fstream>

using namespace std;
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{   ui->setupUi(this);

       ui->dateEdit->setCalendarPopup(true);

       ui->dateEdit_2->setCalendarPopup(true);
      ui->lineEdit_9->setValidator( new QIntValidator(0, 100000000, this) );



}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_pushButton_clicked()
{

   QString low="For Delta IoT Solutions Pvt. LTD.";
    QString sign="Authorized Signatory by";
        QString sign2="by DT";
    QString head="SERVICE CERTIFICATE";

 QPixmap pix2(":/files/delta.png");


    QDate dt1=QDate::currentDate();



    QString cd=dt1.toString("d MMMM yyyy");
     QString cd2=dt1.toString("yy/MM/");

     qDebug() << "Date:"+cd2;

  QString id=ui->id->text();




  QDateTime date = QDateTime::currentDateTime();

QString formattedTime = date.toString("dd.MM.yyyy");
        QString formattedTime2 = date.toString("hh:mm:ss");
      QString name=ui->label_2->text();
   QString dj=ui->label_3->text();
   QString j= ui->label_4->text();
   QString sa=ui->label_5->text();
   QString dl=ui->label_6->text();
   QString de=ui->label_7->text();

   QString r =ui->label_8->text();
   QString dre=ui->label_9->text();
          QString e=ui->label_10->text();
          QString rr=ui->label_11->text();
          QString c=ui->label_12->text();
     QString rehire=ui->label_15->text();
          QFont f1( "Verdana", 10);


    QString input1=ui->lineEdit_2->text();

    QString  input2=ui->lineEdit_4->text();

    QString  input4=ui->lineEdit_9->text();
    QString  input5=ui->lineEdit_11->text();
   QString department=ui->comboBox->currentText();

    QString  input7=ui->lineEdit_15->text();
    QString  input10=ui->lineEdit_21->text();
    QString  input11=ui->lineEdit_23->text();
    QString input12=ui->comboBox_2->currentText();

    if(ui->lineEdit_2->text().isEmpty() || ui->id->text().isEmpty()
            ||ui->lineEdit_4->text().isEmpty() || ui->lineEdit_9->text().isEmpty()
            ||ui->lineEdit_11->text().isEmpty() ||ui->lineEdit_15->text().isEmpty()
            ||ui->lineEdit_21->text().isEmpty()||ui->lineEdit_23->text().isEmpty())
    {
        QMessageBox::information(this,"Alert","Please entre all mandatory fields.");
    }

    else
    {
        QString DEL="DEL_";
               QString ref=cd2+DEL+department+"_"+id;

          QString fileName = QFileDialog::getSaveFileName(this, tr("Save File"),
            "D:/"+DEL+department+id+"_"+input1+"_RelievingLetter_"+formattedTime,
           tr("PDF (*.pdf)"));

   QPdfWriter pdf(fileName);
   QPainter painter(&pdf);
   QDate d1=ui->dateEdit->date();
 QString jd=d1.toString("dd/MM/yyyy");
QDate d2 = QDate::currentDate();
int a=d2.toJulianDay()-d1.toJulianDay();
qDebug()<<a;
       if((d2.toJulianDay()-d1.toJulianDay())==90)
       {
                      QString rd=d2.toString("dd/MM/yyyy");
                           painter.setFont(f1);
                        painter.drawText(5700,5000,rd);


                                painter.drawText(5700,5300,ui->lineEdit_19->text());


       }
       else
       {
           QDate d2=ui->dateEdit_2->date();
            QString rd=d2.toString("dd/MM/yyyy");
             painter.setFont(f1);
            painter.drawText(5700,5000,rd);

           painter.drawText(5700,5300,ui->lineEdit_19->text());
 }
  painter.setFont(f1);
   painter.drawText(800,1900,"Ref:");
            painter.drawText(1200,1900,ref);
 painter.drawText(7000,1900,cd);
    painter.drawText(3300,2400,head);
    painter.drawText(800,2900,name);
    painter.drawText(4200,2900,":");
    painter.drawText(5700,2900,input1);
    painter.drawText(800,3200,dj);
    painter.drawText(4200,3200,":");
    painter.drawText(5700,3200,input2);
    painter.drawText(800,3500,j);
    painter.drawText(4200,3500,":");
   painter.drawText(5700,3500,jd);
    painter.drawText(800,3800,sa);
    painter.drawText(4200,3800,":");
    painter.drawText(5700,3800,input4);
    painter.drawText(800,4100,dl);
    painter.drawText(4200,4100,":");
    painter.drawText(5700,4100,input5);
    painter.drawText(800,4400,de);
    painter.drawText(4200,4400,":");
    painter.drawText(5700,4400,department);
    painter.drawText(800,4700,r);
    painter.drawText(4200,4700,":");
    painter.drawText(5700,4700,input7);
    painter.drawText(800,5000,dre);
    painter.drawText(4200,5000,":");

    painter.drawText(800,5300,e);
    painter.drawText(4200,5300,":");

       painter.drawText(800,5600,rr);
             painter.drawText(4200,5600,":");
             painter.drawText(5700,5600,input10);
          painter.drawText(800,5900,c);
             painter.drawText(4200,5900,":");
           painter.drawText(5700,5900,input11);
             painter.drawText(800,6200,rehire);
             painter.drawText(4200,6200,":");
             painter.drawText(5700,6200,input12);

             painter.drawText(600,7100,low);
           painter.drawText(2050,7500,sign);
        painter.drawText(2100,7800,sign2);
     painter.drawPixmap(600,7300,ui->signature->pixmap());

            painter.drawText(2050,8100,formattedTime);
  painter.drawText(3200,8100,formattedTime2);

           painter.drawPixmap(800,100,pix2);


painter.end();
}
}
void MainWindow::on_pushButton_2_clicked()
{
QMessageBox::StandardButton reply;
   reply=QMessageBox::question(this,"Title","Do you want to change signature?",
                               QMessageBox::Yes | QMessageBox::No);

   if(reply==QMessageBox::Yes) {

              QFile file("file");
                if(!file.open(QIODevice::ReadWrite | QIODevice::Text))
                      return;


               QString temp= QFileDialog::getOpenFileName(this,
                                                        tr("Open Image"), "D:/", tr("Image Files (*.png *.jpg *.bmp)"));
               QTextStream out(&file);
               file.resize(0);
               out<<"";
               out<<temp;

               QPixmap sign(temp);
               ui->signature->setPixmap(sign.scaled(1300,1000,Qt::KeepAspectRatio));

               file.close();


           }

   else if(reply==QMessageBox::No) {

       QFile file("file");
               if(!file.open(QIODevice::ReadOnly | QIODevice::Text))
                     return;
               file.seek(0);
                QString temp=file.readAll();
                 qDebug()<<temp;
               QPixmap sign(temp);
               ui->signature->setPixmap(sign.scaled(1300,1000,Qt::KeepAspectRatio));
               file.close();

           }
}

void MainWindow::on_checkBox_2_clicked()
{


    QDate d1=ui->dateEdit->date();
   QDate d2 = QDate::currentDate();
ui->dateEdit_2->setDate(d2);



if((d2.toJulianDay()-d1.toJulianDay())==90)
{
     ui->dateEdit_2->setDate(d2);
     int diff=d2.toJulianDay()-d1.toJulianDay();
     int month=(diff%365)/30;
     QString s1=QString::number(month);
     int day=((diff%365)%30)%7;
     QString s2=QString::number(day);
     int year=diff/365;
     QString s=QString::number(year);
ui->lineEdit_19->setText(s+" years "+s1+" months "+s2+" days");

}
}

void MainWindow::on_comboBox_currentIndexChanged(int index)
{

    if(index==1){
        ui->lineEdit->setText("Embeded systems");
        ui->comboBox->setEditable(false);
       ui->lineEdit->setReadOnly(true);
    }
    else if(index==2) {
        ui->lineEdit->setText("IT");
        ui->comboBox->setEditable(false);
        ui->lineEdit->setReadOnly(true);
    }
    else if(index==3) {
        ui->lineEdit->setText("HR");
        ui->comboBox->setEditable(false);
        ui->lineEdit->setReadOnly(true);
    }
    else if(index==4)
    {
        ui->comboBox->setEditable(true);
        ui->lineEdit->setReadOnly(true);
    }


}


void MainWindow::on_dateEdit_2_userDateChanged(const QDate &date)
{
      QDate d1=ui->dateEdit->date();
            int diff=date.toJulianDay()-d1.toJulianDay();
            int month=(diff%365)/30;
            QString s1=QString::number(month);
            int day=((diff%365)%30)%7;
            QString s2=QString::number(day);
            int year=diff/365;
            if(year%4==0)
            {
                int year=diff/366;
                   QString s=QString::number(year);
                   ui->lineEdit_19->setText(s+" years "+s1+" months "+" and "+s2+" days");
            }
            QString s=QString::number(year);
ui->lineEdit_19->setText(s+" years "+s1+" months "+" and "+s2+" days");
if(year==1)
{
    QString s2=QString::number(day);
    ui->lineEdit_19->setText(s+" year "+s1+" months "+" and "+s2+" days");
}
if(month==1)
{
    ui->lineEdit_19->setText(s+" years "+s1+" month "+" and "+s2+" days");

}
if(day==1)
{
    ui->lineEdit_19->setText(s+" year "+s1+" months "+" and "+s2+" days");
}
if(year==1&&month==1&&day==1)
{
    ui->lineEdit_19->setText(s+" year "+s1+" month "+s2+" day");

}

}
void MainWindow::on_comboBox_editTextChanged(const QString &arg1)
{


        ui->lineEdit->setText(arg1);

}


void MainWindow::on_dateEdit_userDateChanged(const QDate &date)
{

    QDate d2=ui->dateEdit_2->date();
    int diff=d2.toJulianDay()-date.toJulianDay();
    int month=(diff%365)/30;
    QString s1=QString::number(month);
    int day=((diff%365)%30)%7;
    QString s2=QString::number(day);
    int year=diff/365;
    QString s=QString::number(year);
ui->lineEdit_19->setText(s+" years "+s1+" months "+s2+" days");

}
