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
    connect(ui->Submit_Triage_test, &QPushButton::clicked, this, &Widget::on_Submit_Triage_test_clicked);
    connect(ui->GenerateTicket, &QPushButton::clicked, this, &Widget::on_GenerateTicket_clicked);
    connect(ui->Time, &QPushButton::clicked, this, &Widget::on_Time_clicked);
    connect(ui->checkBox_Contagion, &QCheckBox::stateChanged, this, &Widget::on_checkBox_Contagion_stateChanged);
    connect(ui->checkBox_Triage, &QCheckBox::stateChanged, this, &Widget::on_checkBox_Triage_stateChanged);
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

    ui->initial_Triage->setText(QString("%1 %2").arg(firstName).arg(lastName));



}
void Widget::on_GenerateTicket_clicked()
{

    int ticketNumber = rand() % 1000 + 1;
    ui->GenerateTicket1->setText(QString("%1").arg(ticketNumber));



}


void Widget::on_Time_clicked()
{
    int waitTime = rand() % 120 + 1;


    ui->waitTime_Triage->setText(QString("%1").arg(waitTime));

}


void Widget::on_CallNext_clicked()
{

    //After pushing this button, we can call another patient from the register tab

}


void Widget::on_Exit_clicked(){

    QApplication::quit();

}



//Working on a checkbox

void Widget::on_checkBox_Contagion_stateChanged(int arg1)
{

    if (arg1 == Qt::Checked) {
        ui->checkBox_Triage->setChecked(false);
    }
}


void Widget::on_checkBox_Triage_stateChanged(int arg1)
{

    if (arg1 == Qt::Checked) {
        ui->checkBox_Contagion->setChecked(false);
    }
}



