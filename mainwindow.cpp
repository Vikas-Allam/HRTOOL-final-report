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
#include<QPagedPaintDevice>

using namespace std;
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{   ui->setupUi(this);

       ui->dateEdit->setCalendarPopup(true);

       ui->dateEdit_2->setCalendarPopup(true);
      ui->lineEdit_9->setValidator( new QIntValidator(0, 100000000, this) );
      ui->in7->setValidator( new QIntValidator(0, 100000000, this) );
      ui->in8->setValidator( new QIntValidator(0, 100000000, this) );

      ui->in9->setValidator( new QIntValidator(0, 100000000, this) );
      ui->in10->setValidator( new QIntValidator(0, 100000000, this) );



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



 QPixmap pix2(":/files/files/delta3.png");


    QDate dt1=QDate::currentDate();



    QString cd=dt1.toString("MMMM dd, yyyy");
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

          QFont f( "Verdana", 14, QFont::Bold);
     QFont f2( "Verdana", 12);

          QString input1=ui->lineEdit_2->text();

    QString  input2=ui->lineEdit_4->text();

    QString  input4=ui->lineEdit_9->text();

    QString  input5=ui->lineEdit_11->text();
   QString department=ui->comboBox->currentText();

    QString  input7=ui->lineEdit_15->text();
    QString  input10=ui->lineEdit_21->text();

    QString  input11=ui->comboBox_2->currentText();

   QString input12=ui->comboBox_3->currentText();

    if(ui->lineEdit_2->text().isEmpty() || ui->id->text().isEmpty()
            ||ui->lineEdit_4->text().isEmpty() || ui->lineEdit_9->text().isEmpty()
            ||ui->lineEdit_11->text().isEmpty() ||ui->lineEdit_15->text().isEmpty()
            ||ui->lineEdit_21->text().isEmpty()||ui->comboBox->currentText().isEmpty()||ui->comboBox_2->currentText().isEmpty()||ui->comboBox_3->currentText().isEmpty())
    {
        QMessageBox::information(this,"Alert","Please entre all mandatory fields.");
    }

    else
    {
      QString DEL="DEL_";
             QString ref=cd2+DEL+department+"_"+id;

          QString fileName = QFileDialog::getSaveFileName(this, tr("Save File"),
            "D:/"+DEL+department+id+"_"+input1+"_ExperienceLetter_"+formattedTime,
           tr("PDF (*.pdf)"));

   QPdfWriter pdf(fileName);
   QPainter painter(&pdf);
   QDate d1=ui->dateEdit->date();
 QString jd=d1.toString("MMMM dd, yyyy");
QDate d2 = QDate::currentDate();
int a=d2.toJulianDay()-d1.toJulianDay();
qDebug()<<a;
       if((d2.toJulianDay()-d1.toJulianDay())==90)
       {
                      QString rd=d2.toString("MMMM dd, yyyy");
                           painter.setFont(f1);
                        painter.drawText(6100,7800,rd);


                                painter.drawText(6100,8300,ui->lineEdit_19->text());


       }
       else
       {
           QDate d2=ui->dateEdit_2->date();
           QString rd=d2.toString("MMMM dd, yyyy");
             painter.setFont(f1);
            painter.drawText(6100,7800,rd);

           painter.drawText(6100,8300,ui->lineEdit_19->text());
 }


       painter.setFont(f);

       painter.drawText(3200,3500,head);
  painter.setFont(f1);
   painter.drawText(1200,2500,"Ref:");
         painter.drawText(1600,2500,ref);
 painter.drawText(7200,2500,cd);
//  painter.drawText(3300,2400,head);
    painter.drawText(1400,4300,name);
    painter.drawText(4800,4300,":");
    painter.drawText(6100,4300,input1);
    painter.drawText(1400,4800,dj);
    painter.drawText(4800,4800,":");
    painter.drawText(6100,4800,input2);
    painter.drawText(1400,5300,j);
    painter.drawText(4800,5300,":");
   painter.drawText(6100,5300,jd);
    painter.drawText(1400,5800,sa);
    painter.drawText(4800,5800,":");
    painter.drawText(6100,5800,input4);
    painter.drawText(1400,6300,dl);
    painter.drawText(4800,6300,":");
    painter.drawText(6100,6300,input5);
    painter.drawText(1400,6800,de);
    painter.drawText(4800,6800,":");
    painter.drawText(6100,6800,department);
    painter.drawText(1400,7300,r);
    painter.drawText(4800,7300,":");
    painter.drawText(6100,7300,input7);
    painter.drawText(1400,7800,dre);
    painter.drawText(4800,7800,":");

    painter.drawText(1400,8300,e);
    painter.drawText(4800,8300,":");

       painter.drawText(1400,8800,rr);
             painter.drawText(4800,8800,":");
             painter.drawText(6100,8800,input10);
          painter.drawText(1400,9300,c);
             painter.drawText(4800,9300,":");
           painter.drawText(6100,9300,input11);
             painter.drawText(1400,9800,rehire);
             painter.drawText(4800,9800,":");
             painter.drawText(6100,9800,input12);

           //  painter.drawText(600,7100,low);
           painter.drawText(2650,11100,sign);
        painter.drawText(2700,11400,sign2);
     painter.drawPixmap(1000,11100,ui->signature->pixmap());

            painter.drawText(2650,11700,formattedTime);
  painter.drawText(3800,11700,formattedTime2);

           painter.drawPixmap(400,100,pix2);
           painter.setFont(f2);
            painter.drawText(800,10800,low);


painter.end();
}
}
void MainWindow::on_pushButton_2_clicked()
{
QMessageBox::StandardButton reply;
   reply=QMessageBox::question(this,"Title","Do you want to change signature?",
                               QMessageBox::Yes | QMessageBox::No);
   QFile file("file3.txt");
   if(reply==QMessageBox::Yes) {

            //  QFile file("file3");
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

             // file.close();


           }

   else if(reply==QMessageBox::No) {

       QFile file("file3.txt");
               if(!file.open(QIODevice::ReadOnly | QIODevice::Text))
                     return;
               file.seek(0);
                QString temp=file.readAll();
                 qDebug()<<temp;
               QPixmap sign(temp);
               ui->signature->setPixmap(sign.scaled(1300,1000,Qt::KeepAspectRatio));
               file.close();

           }
   file.close();
}

void MainWindow::on_checkBox_2_clicked()
{


    QDate d1=ui->dateEdit->date();

 QDate d2 = QDate::currentDate();
//ui->dateEdit_2->setDate(d2);




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
 ui->lineEdit_19->setText(s+" years "+s1+" months "+" and "+s2+" days");

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

      QDate first(1,1,1);

      int days= d1.daysTo(date);
      first= first.addDays(days);
      int day= first.day()-2;
      int month= first.month()-1;
      int year= first.year()-1;

      if(year==1)
{
QString len= QString::number(year)+" year " + QString::number(month)+" months " + " and " + QString::number(day)+" days";
ui->lineEdit_19->setText(len);
}
 if(month==1)
{
      QString len= QString::number(year)+" years " + QString::number(month)+" month " + " and " + QString::number(day)+" days";
ui->lineEdit_19->setText(len);
      }

       if(day==1)
        {
            QString len= QString::number(year)+" years " + QString::number(month)+" months " + " and " + QString::number(day)+" day";
             ui->lineEdit_19->setText(len);

          }

      if((year==1)&&(month==1))
      {
          QString len= QString::number(year)+" year " + QString::number(month)+" month " + " and " + QString::number(day)+" days";
             ui->lineEdit_19->setText(len);

         }
         if((month==1)&&(day==1))
         {
             QString len= QString::number(year)+" years " + QString::number(month)+" month " + " and " + QString::number(day)+" day";
             ui->lineEdit_19->setText(len);
         }
         if((year==1)&&(day==1))
         {
             QString len= QString::number(year)+" year " + QString::number(month)+" months " + " and " + QString::number(day)+" day";
             ui->lineEdit_19->setText(len);

         }
         if((year>1)&&(month>1)&&(day>1))
         {
             QString len= QString::number(year)+" years " + QString::number(month)+" months " + " and " + QString::number(day)+" days";
             ui->lineEdit_19->setText(len);

         }
         else if((year==1)&&(month==1)&&(day==1))
               {
                     QString len= QString::number(year)+" year " + QString::number(month)+" month " + " and " + QString::number(day)+" day";
                               ui->lineEdit_19->setText(len);


         }


}
void MainWindow::on_comboBox_editTextChanged(const QString &arg1)
{


      ui->lineEdit->setText(arg1);

}


void MainWindow::on_dateEdit_userDateChanged(const QDate &date)
{

    QDate d2=ui->dateEdit_2->date();
    QDate first(1,1,1);
    int days= date.daysTo(d2);
    first= first.addDays(days);
    int day= first.day()-2;
    int month= first.month()-1;
    int year= first.year()-1;

    if(year==1)
{
QString len= QString::number(year)+" year " + QString::number(month)+" months " + " and " + QString::number(day)+" days";
ui->lineEdit_19->setText(len);
}
if(month==1)
{
    QString len= QString::number(year)+" years " + QString::number(month)+" month " + " and " + QString::number(day)+" days";
ui->lineEdit_19->setText(len);
    }

     if(day==1)
      {
          QString len= QString::number(year)+" years " + QString::number(month)+" months " + " and " + QString::number(day)+" day";
           ui->lineEdit_19->setText(len);

        }

    if((year==1)&&(month==1))
    {
        QString len= QString::number(year)+" year " + QString::number(month)+" month " + " and " + QString::number(day)+" days";
           ui->lineEdit_19->setText(len);

       }
       if((month==1)&&(day==1))
       {
           QString len= QString::number(year)+" years " + QString::number(month)+" month " + " and " + QString::number(day)+" day";
           ui->lineEdit_19->setText(len);
       }
       if((year==1)&&(day==1))
       {
           QString len= QString::number(year)+" year " + QString::number(month)+" months " + " and " + QString::number(day)+" day";
           ui->lineEdit_19->setText(len);

       }
       if((year>1)&&(month>1)&&(day>1))
       {
           QString len= QString::number(year)+" years " + QString::number(month)+" months " + " and " + QString::number(day)+" days";
           ui->lineEdit_19->setText(len);

       }
       else if((year==1)&&(month==1)&&(day==1))
             {
                   QString len= QString::number(year)+" year " + QString::number(month)+" month " + " and " + QString::number(day)+" day";
                             ui->lineEdit_19->setText(len);


       }

}


/*-------------------------------------------------RL tool starts here----------------------------------------------------------------------------------*/


void MainWindow::on_RL_generate_clicked()
{
    QPixmap DELTA_head(":/files/files/delta3.png");
    QString RL_dept=ui->RL_deptLine->text();
    QString name=ui->RL_nameInput->text();
    QString id=ui->RL_comboBox->currentText();
    QString RL_pos=ui->RL_positionInput->text();
    QString RL_Empid=ui->RL_comboBox->currentText()+ui->RL_Id_input->text();

    QFont f( "Verdana", 10, QFont::Bold);
    QFont f1( "Verdana", 10);

    QDateTime date = QDateTime::currentDateTime();
    //QString formattedTime = date.toString("dd.MM.yyyy");
    QString RL_formattedTime = date.toString("dd.MM.yyyy");
    QString RL_formattedTime2 = date.toString("hh:mm:ss");

    QDate dt1=QDate::currentDate();
    QString cd=dt1.toString("MMM d, yyyy");




    QString DEL="DEL_";
    QString t1="To,";
    QString t2=DEL+RL_Empid;
    QString t3=ui->RL_positionInput->text();
    QString RL_head="RELIEVING LETTER";

    QString Dear="Dear "+name;

    QString ref="Ref:";
    QString RL_ref=dt1.toString("yy/MM/")+DEL+RL_Empid;

    QDate d1=ui->RL_ResDate->date();
    QString DoRes=d1.toString("MMM d, yyyy");
    QDate d2=ui->RL_RelDate->date();
    QString DoRel=d2.toString("MMM d, yyyy");


    QString Para1="This is in furtherance to your resignation letter dated "+DoRes+" wherein you had requested"
                  " to be relieved from your services on "+DoRel+". We wish to inform you that your resignation "
            "has been accepted and you are being relieved from your position as "+RL_pos+" in "+RL_dept+" Department"
            " with Delta IoT Solutions Pvt. Ltd. with effect from "+DoRel;


    QString Para2="You may collect your Service/Experience letter post full and final settlement. Please note that, the"
            " full and final settlement will be done after 45 days. And any shortfall of Notice period will be deducted "
            "from your full & final settlement amount.";

    QString Para3="We appreciate your contributions to Delta IoT Solutions Pvt. Ltd. Wish you all the best for your future "
           "endeavors.";

    QString low1="For Delta IoT Solutions Pvt. Ltd.";
    QString sign_line="Digitally Signed";
    QString sign_line2="by DT";

   // QDateTime date = QDateTime::currentDateTime();





    QString RL_fileName = QFileDialog::getSaveFileName(this, tr("Save File"),
      "D:/"+DEL+id+"_"+name+"_RelievingLetter_"+RL_formattedTime,
     tr("PDF (*.pdf)"));

//      pdf.newPage();
//      pdf.setPageSize(QPageSize::A4);
//      pdf.setPageMargins(QMargins(2,2,2,2));
      //**************************************************
     // pdf.setPageMargins(QPagedPaintDevice::QMarginsF &margins);
     // QMargins

//      const qreal horizontalMarginMM = 2.0;     // 2mm margin on each side
//      const qreal verticalMarginMM = 2.0;
//      QMargins margins;
//      margins.left = margins.right = horizontalMarginMM;
//      margins.top = margins.bottom = verticalMarginMM;
//      pdf.setPageMargins(QMargins::);

//     pdf.setContentsMargins(int left, int right, int top, int bottom);




//*****************************************************************

   QPdfWriter pdf(RL_fileName);
   QPainter painter(&pdf);

   pdf.setPageSize(QPageSize::A4);
   pdf.setPageMargins(QMargins(800,1800,100,100));
   //painter.translate()

   //QRect r = painter.viewport();
   //Qt::AlignLeft;
    painter.setFont(f1);
    painter.drawPixmap(800,0,DELTA_head);
    painter.drawText(7000,1900,cd);
    painter.drawText(800,2400,t1);
    painter.drawText(800,2700,name);
    painter.drawText(800,3000,t2);
    painter.drawText(800,3300,t3);

    painter.setFont(f);
    painter.drawText(3700,3700,RL_head);
    painter.setFont(f1);
   // painter.drawText(800,6000,Para1);//set page margin
    painter.drawText(800,4400,Dear);

    QRect rec1(800,5100,8000,900);
    painter.drawText(rec1,Para1);

    QRect rec2(800,6300,8000,600);
    painter.drawText(rec2,Para2);

    QRect rec3(800,7200,8000,400);
    painter.drawText(rec3,Para3);

    painter.setFont(f);
    painter.drawText(800,8100,low1);

    painter.setFont(f1);

    painter.drawText(2200,8500,sign_line);
    painter.drawText(2200,8800,sign_line2);
    painter.drawPixmap(800,8500,ui->RL_signLabel->pixmap());

   painter.drawText(2200,9100,RL_formattedTime);
   painter.drawText(2200,9400,RL_formattedTime2);

   painter.drawText(800,12000,ref);
   painter.drawText(1150,12000,RL_ref);


    painter.end();





//    QTextDocument doc;
//    QRect rec(800,6000,7200,1200);
//    painter.translate(20,20);
//    doc.setTextWidth(rec.width());
//    doc.setHtml("<p>My first paragraphkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkk</p>"
//                "<font 'Vardana'"
//                " color='black'"
//                " size='10'>Qt5 C++ </font>");
//    doc.drawContents(&painter,rec);

    //painter.end();

    //**********************************************************************

// QString RL_filename=QFileDialog::getSaveFileName((QWidget* )0, "Export PDF", QString(), "*.pdf");
// if (QFileInfo(RL_filename).suffix().isEmpty()) { RL_filename.append(".pdf"); }

//        /*QString RL_fileName = QFileDialog::getSaveFileName(this, tr("Save File"),
//          "D:/"+DEL+id+"_"+name+"_RelievingLetter_"+formattedTime,
//         tr("PDF (*.pdf)"))*/;

//  QPrinter printer (QPrinter::PrinterResolution);
//  printer.setOutputFormat(QPrinter::PdfFormat);
//  printer.setOutputFileName(RL_filename);
//  QTextDocument doc;
//      doc.setHtml("<p>My first paragraphkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkk</p>"
//                  "<font 'Vardana'"
//                  " color='black'"
//                  " size='10'>Qt5 C++ </font>");

//    doc.print(&printer);


}





void MainWindow::on_RL_comboBox_currentIndexChanged(int index)
{
    if(index==0){
      ui->RL_deptLine->setText("");
      ui->RL_comboBox->setEditable(false);
    }
    if(index==1){
        ui->RL_deptLine->setText("Embeded systems");
        ui->RL_comboBox->setEditable(false);

    }
    else if(index==2) {
        ui->RL_deptLine->setText("IT");
        ui->RL_comboBox->setEditable(false);

    }
    else if(index==3) {
        ui->RL_deptLine->setText("HR");
        ui->RL_comboBox->setEditable(false);

    }
    else if(index==4){
        ui->RL_comboBox->setEditable(true);
        ui->RL_deptLine->setText(ui->comboBox->currentText());
       // ui->comboBox->setEditable(true);

    }



}


void MainWindow::on_RL_comboBox_editTextChanged(const QString &arg1)
{
    ui->RL_deptLine->setText(arg1);
}





void MainWindow::on_RL_signButton_clicked()
{

    QMessageBox::StandardButton reply;
    reply=QMessageBox::question(this,"Title","Do you want to change signature?",
                                QMessageBox::Yes | QMessageBox::No);
   // QFile file("./images/sign_text.txt");
    QFile file("sign_text.txt");

    if(reply==QMessageBox::Yes) {

               //QFile file("D:/swapnil/pdfassig-main/pdfassig-main/sign_text.txt");  //
                //QFile file("./sign_text.txt");
                 if(!file.open(QIODevice::ReadWrite | QIODevice::Text))
                       return;


                QString temp= QFileDialog::getOpenFileName(this,
                                                         tr("Open Image"), "D:/", tr("Image Files (*.png *.jpg *.bmp)"));
                QTextStream out(&file);
                file.resize(0);
                out<<"";
                out<<temp;
               // qDebug()<<"IF TEMP"<<temp;
                QPixmap sign(temp);
                ui->RL_signLabel->setPixmap(sign.scaled(1300,1000,Qt::KeepAspectRatio));

              //  file.close();


            }

    else if(reply==QMessageBox::No) {

               //QFile file("./images/sign_text.txt");
              QFile file("sign_text.txt");
                if(!file.open(QIODevice::ReadOnly | QIODevice::Text))
                      return;
                file.seek(0);
                QString temp=file.readAll();
               // qDebug() << "ELSE TEMP"<<temp;
                QPixmap sign(temp);
                ui->RL_signLabel->setPixmap(sign.scaled(1300,1000,Qt::KeepAspectRatio));
                file.close();
               // ui->signature->setPixmap(temp);

            }
    file.close();


}




/*-------------------------------------------------------------------FFTOOL starts from here____________________________________________________________________*/








void MainWindow::on_FFtool_clicked()
{


    QString input2=ui->in2->text();

    QDateTime date = QDateTime::currentDateTime();

   QString formattedTime = date.toString("dd.MM.yyyy");


    QString fileName = QFileDialog::getSaveFileName(this, tr("Save File"),
      "D:/"+input2+"_full&final settle Letter_"+formattedTime,
     tr("PDF (*.pdf)"));
QPdfWriter pdf(fileName);
pdf.setPageSize(QPageSize::A4);

QPainter painter(&pdf);
QFont f1( "Verdana", 10);

QPixmap pix2(":/files/files/delta2 (1).png");

QFont f( "Verdana", 12, QFont::Bold);



    QString ec=ui->code->text();
    QString na=ui->name->text();
    QString d=ui->desig->text();
    QString p=ui->pan->text();
    QString dr=ui->res->text();
    QString lw=ui->lwd->text();
    QString sd=ui->sd->text();
    QString lop=ui->lop->text();
    QString bs=ui->BS->text();
    QString input9=ui->in9->text();
    QString sf= ui->in7->text();
    QString lo=ui->in8->text();
    QString input1=ui->in1->text();

     QString input3=ui->in3->text();

    QString input4=ui->in4->text();

    QDate d1=ui->in5->date();
QString input5=d1.toString("dd-MMMM-yy");
    QDate d2=ui->in6->date();
    QString input6=d2.toString("dd-MMMM-yy");

QString input7=ui->in7->text();

    QString input8=ui->in8->text();

        QString deduct=ui->deducted->text();


    int HRA=13020;
    int CA=3000;
   int SA=7665;
   int MI=915;
     int TR=3000;
   int LTA=3255;
   int PF=1800;
   int bsa=input9.toInt();
   qDebug()<<bsa;
            float GE=bsa+HRA+CA+SA+MI+TR+LTA+PF;
                   QString GER=QString::number(GE);
            float  perd=GE/30;
            qDebug()<<perd;

           int lop1=lo.toInt();

           int sfd=sf.toInt();

            int ded=deduct.toInt();

            sfd=-(sfd);
       int snd=sfd*perd;
       QString snde=QString::number(snd);
       int ampa=30*perd-(sfd+lop1)*perd-ded;

       QString amopa=QString::number(ampa);

       QString out=convertToWords(ampa);

       if(sfd>=30)
       {
           sfd=-(sfd);
           qDebug()<<sfd;
           int snd=sfd*perd;
           QString snde=QString::number(snd);
          int ampa=-(sfd+lop1)*perd;
           QString amopa=QString::number(ampa);

            painter.drawText(3000,11800,amopa);
            ampa=-(ampa);
                   QString out=convertToWords(ampa);
            painter.drawText(2500,12400,out);
       painter.drawText(8700,8200,snde);
     }



painter.setFont(f);

   painter.drawText(300,2400,"Full & Final Settlement");

   painter.drawText(300,6000,"Earnings");
   painter.drawText(3000,6000,"Amount");
   painter.drawText(5200,6000,"Deductions");
   painter.drawText(8300,6000,"Amount");

   painter.drawText(300,11100,"Gross Earnings");
   painter.drawText(3000,11100,GER);
   painter.drawText(5200,11100,"Gross Deduction");
   painter.drawText(8300,11100,deduct);
   painter.drawText(300,11800,"Amount Payable :");


   painter.drawText(300,12400,"Net Pay in words :");


 painter.setFont(f1);


painter.drawPixmap(-100,100,pix2);

  painter.drawText(300,3300,ec);
   painter.drawText(1700,3300,":");
   painter.drawText(2200,3300,input1);
   painter.drawText(5200,3300,dr);
  painter.drawText(7300,3300,":");
   painter.drawText(7800,3300,input5);

   painter.drawText(300,3900,na);
    painter.drawText(1700,3900,":");
    painter.drawText(2200,3900,input2);
    painter.drawText(5200,3900,lw);
    painter.drawText(7300,3900,":");
     painter.drawText(7800,3900,input6);

     painter.drawText(300,4500,d);
      painter.drawText(1700,4500,":");
      painter.drawText(2200,4500,input3);
      painter.drawText(5200,4500,sd);
      painter.drawText(7300,4500,":");
      painter.drawText(7800,4500,input7);

       painter.drawText(300,5100,p);
        painter.drawText(1700,5100,":");
        painter.drawText(2200,5100,input4);
        painter.drawText(5200,5100,lop);
        painter.drawText(7300,5100,":");
         painter.drawText(7800,5100,input8);

         painter.drawText(300,6700,"Basic Salary");
          //painter.drawText(1700,6700,":");
          painter.drawText(3200,6700,ui->in9->text());
          painter.drawText(5200,6700,"Employer PF");
       //   painter.drawText(7300,6700,":");
         painter.drawText(8700,6700,"1800");

         painter.drawText(300,7200,"House Rent Allowance");
        //  painter.drawText(1700,7200,":");
          painter.drawText(3200,7200,"13020");
          painter.drawText(5200,7200,"Professional Tax Deduction");
       //   painter.drawText(7300,7200,":");
         painter.drawText(8700,7200,"200");

         painter.drawText(300,7700,"Conveyance Allowance");
        //  painter.drawText(1700,7700,":");
          painter.drawText(3200,7700,"3000");
          painter.drawText(5200,7700,"Medical Insurance Deduction");
         // painter.drawText(7300,7700,":");
         painter.drawText(8700,7700,"915");

         painter.drawText(300,8200,"Special Allowance");
          painter.drawText(1700,8200,":");
          painter.drawText(3200,8200,"7665");
          painter.drawText(5200,8200,"Short Notice Deduction");
         // painter.drawText(7300,8200,":");


         painter.drawText(300,8700,"Medical Insurance");
        //  painter.drawText(1700,8700,":");
          painter.drawText(3200,8700,"915");
          painter.drawText(5200,8700,"Provident Fund");
         // painter.drawText(7300,8700,":");
         painter.drawText(8700,8700,"1800");

         painter.drawText(300,9200,"Telephone Reimbursement");
        //  painter.drawText(1700,9200,":");
          painter.drawText(3200,9200,"3000");
          painter.drawText(5200,9200,"ESIC");
         // painter.drawText(7300,9200,":");
         painter.drawText(8700,9200,"0");


         painter.drawText(300,9700,"LTA");
        //  painter.drawText(1700,9700,":");
          painter.drawText(3200,9700,"3255");
          painter.drawText(5200,9700,"TDS");
       //   painter.drawText(7300,9700,":");
         painter.drawText(8700,9700,"0");

         painter.drawText(300,10200,"PF-Company Contribution");
         // painter.drawText(1700,10200,":");
          painter.drawText(3200,10200,"1800");
          painter.drawText(5200,10200,"Other Deduction");
         // painter.drawText(7300,10200,":");
         painter.drawText(8700,10200,ui->in10->text());


      painter.drawText(3000,11800,amopa);
      painter.drawText(2500,12400,out);
              painter.drawText(8700,8200,snde);





QPen linepen(Qt::black);

        linepen.setWidth(10);
         painter.setPen(linepen);
         painter.drawLine(200,2700,9200,2700);
         painter.drawLine(200,5700,9200,5700);
         painter.drawLine(200,6100,9200,6100);
         painter.drawLine(200,10800,9200,10800);
         painter.drawLine(200,11300,9200,11300);
         painter.drawLine(200,12900,9200,12900);


painter.end();

}



void MainWindow::on_comboBox_4_currentIndexChanged(int index)
{
    if(index==1)
    {
        int EP=1800;
        int PTD=200;
        int MI=915;
        int PF=1800;
        QString input10=ui->in10->text();
        int OD=input10.toInt();
        int deduction=EP+PTD+MI+PF+OD;
        QString deduct=QString::number(deduction);
      ui->deducted->setText(deduct);
    }
    if(index==2)
    {
        int EP=1800;
        int PTD=150;
        int MI=915;
        int PF=1800;

        QString input10=ui->in10->text();
             int OD=input10.toInt();
        int deduction=EP+PTD+MI+PF+OD;
        QString deduct=QString::number(deduction);
      ui->deducted->setText(deduct);
    }
}


void MainWindow::on_in6_userDateChanged(const QDate &date)
{
    QDate d1=ui->in5->date();
          int diff=date.toJulianDay()-d1.toJulianDay();
            int fin=diff-90;
        QString day=QString::number(fin);
        ui->in7->setText(day);



}
QString MainWindow::numToWords(int n, QString s)
{
    QString one[] = { "", "one ", "two ", "three ", "four ",
                    "five ", "six ", "seven ", "eight ",
                    "nine ", "ten ", "eleven ", "twelve ",
                    "thirteen ", "fourteen ", "fifteen ",
                    "sixteen ", "seventeen ", "eighteen ",
                    "nineteen " };

    QString ten[] = { "", "", "twenty ", "thirty ", "forty ",
                    "fifty ", "sixty ", "seventy ", "eighty ",
                    "ninety " };


    QString str = "";
    // if n is more than 19, divide it
    if (n > 19)
        str += ten[n / 10] + one[n % 10];
    else
        str += one[n];

    if (n)
        str += s;

    return str;
}
QString MainWindow::convertToWords(long n)
{
    QString out;


    out += numToWords((n / 10000000), "crore ");
  out += numToWords(((n / 100000) % 100), "lakh ");
    out += numToWords(((n / 1000) % 100), "thousand ");
    out += numToWords(((n / 100) % 10), "hundred ");


    if (n > 100 && n % 100)
        out += "and ";
    out += numToWords((n % 100), "only");

    if(out=="")
    out = "zero";

    return out;
}

void MainWindow::on_in5_userDateChanged(const QDate &date)
{
    QDate d2=ui->in6->date();
          int diff=d2.toJulianDay()-date.toJulianDay();
            int fin=diff-90;
        QString day=QString::number(fin);
        ui->in7->setText(day);
}

