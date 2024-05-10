#include "widget.h"
#include "./ui_widget.h"
#include <QLabel>
#include <QLineEdit>
#include <QDebug>
#include <QPushButton>
#include <QRandomGenerator>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    connect(ui->Submit, &QPushButton::clicked, this, &Widget::on_Submit_clicked);
    connect(ui->Cancel, &QPushButton::clicked, this, &Widget::on_Cancel_clicked);
    connect(ui->Submit_Triage_test, &QPushButton::clicked, this, &Widget::on_Submit_Triage_test_clicked);
    connect(ui->GenerateTicket, &QPushButton::clicked, this, &Widget::on_GenerateTicket_clicked);
    connect(ui->Time, &QPushButton::clicked, this, &Widget::on_Time_clicked);

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
    ui->initial_Triage->setText(QString("%1 %2").arg(firstName).arg(lastName));
    int ticketNumber = rand() % 1000 + 1;
    ui->GenerateTicket1->setText(QString("%1").arg(ticketNumber));
    int waitTime = rand() % 120 + 1;
    ui->waitTime_Triage->setText(QString("%1").arg(waitTime));


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
    ui->initial_Triage1->setText(QString("%1 %2").arg(firstName).arg(lastName));



}
void Widget::on_GenerateTicket_clicked()
{

    int ticketNumber = rand() % 1000 + 1;
    ui->GenerateTicket2->setText(QString("%1").arg(ticketNumber));

}


void Widget::on_Time_clicked()
{
    int waitTime = rand() % 120 + 1;

    ui->waitTime_Triage1->setText(QString("%1").arg(waitTime));

}


void Widget::on_CallNext_clicked() //Fix issues here
{

    QString firstNameTriage = ui->FirstName_Triage->text();
    QString lastNameTriage = ui->lastName_Triage->text();
    ui->initial_Triage3->setText(QString("%1 %2").arg(firstNameTriage).arg(lastNameTriage));
    ui->GenerateTicket4->setText(QString::number(QRandomGenerator::global()->bounded(1, 1001))); // Unique ticket number between 1 and 1000
    ui->waitTime_Triage3->setText(QString::number(QRandomGenerator::global()->bounded(1, 121))); // Random wait time between 1 and 120

    QString firstNameContagion = ui->firstName_ContagionTest->text();
    QString lastNameContagion = ui->LastName_ContagionTest->text();
    ui->initial_Triage2->setText(QString("%1 %2").arg(firstNameContagion).arg(lastNameContagion));
    ui->GenerateTicket3->setText(QString::number(QRandomGenerator::global()->bounded(1, 1001))); // Unique ticket number between 1 and 1000
    ui->waitTime_Triage2->setText(QString::number(QRandomGenerator::global()->bounded(1, 121))); // Random wait time between 1 and 120

}


void Widget::on_Exit_clicked(){

    QApplication::quit();

}


void Widget::on_StartOver_button_clicked()
{
    ui->FirstName_Triage->clear();
    ui->lastName_Triage->clear();
    ui->Symptoms_Triage->clear();
}

