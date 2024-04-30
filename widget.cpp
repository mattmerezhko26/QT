#include "widget.h"
#include "./ui_widget.h"
#include <QLabel>
#include <QLineEdit>
#include <QDebug>
#include <QPushButton>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    connect(ui->Submit, &QPushButton::clicked, this, &Widget::on_Submit_clicked);
    connect(ui->Cancel, &QPushButton::clicked, this, &Widget::on_Cancel_clicked);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_firstName_ContagionTest_cursorPositionChanged(const QString &text)
{
    QLabel *first_name_label = new QLabel("First Name", this);
    QLineEdit *first_name_line_edit = new QLineEdit(this);
}

void Widget::on_LastName_ContagionTest_cursorPositionChanged(const QString &text)
{
    QLabel *last_name_label = new QLabel("Last Name", this);
    QLineEdit *last_name_line_edit = new QLineEdit(this);
}

void Widget::on_FirstName_Triage_cursorPositionChanged(const QString &text)
{
    QLabel *first_name_label1 = new QLabel("First Name", this);
    QLineEdit *first_name_line_edit1 = new QLineEdit(this);
}

void Widget::on_lastName_Triage_cursorPositionChanged(const QString &text)
{
    QLabel *last_name_label1 = new QLabel("Last Name", this);
    QLineEdit *last_name_line_edit1 = new QLineEdit(this);
}

void Widget::on_Symptoms_Triage_cursorPositionChanged(const QString &text)
{
    QLabel *symptoms_label = new QLabel("Symptoms", this);
    QLineEdit *symptoms_edit = new QLineEdit(this);
}
//Buttons
void Widget::on_Submit_clicked()
{
    QString firstName = ui->firstName_ContagionTest->text();
    QString lastName = ui->LastName_ContagionTest->text();

    qDebug() << "First Name:" << firstName;
    qDebug() << "Last Name:" << lastName;
}


void Widget::on_Cancel_clicked()
{
    ui->firstName_ContagionTest->clear();
    ui->LastName_ContagionTest->clear();
}

void Widget::on_Submit_Triage_test_clicked()
{
    QString firstName = ui->FirstName_Triage->text();
    QString lastName = ui->lastName_Triage->text();
    QString symptoms = ui->Symptoms_Triage->text();

    qDebug() << "First Name:" << firstName;
    qDebug() << "Last Name:" << lastName;
    qDebug() << "Symptoms: " << symptoms;

}
void Widget::on_GenerateTicket_clicked()
{

    int ticketNumber = rand() % 1000 + 1;

    qDebug() << "Ticket Generated:" << ticketNumber;


    ui->GenerateTicket->setText(QString("Generate Ticket").arg(ticketNumber));
}


void Widget::on_Time_clicked()
{
    int waitTime = rand() % 120 + 1;

    qDebug() << "Estimated Wait Time:" << waitTime << "minutes";

    ui->Time->setText(QString("Time").arg(waitTime));

}


void Widget::on_CallNext_clicked()
{

}


void Widget::on_Exit_clicked()
{

}




