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
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_Cancel_clicked()
{

}


void Widget::on_Submit_clicked()
{

}


void Widget::on_GenerateTicket_clicked()
{

}


void Widget::on_Time_clicked()
{

}

void Widget::on_CallNext_clicked()
{

}


void Widget::on_Exit_clicked()
{

}


void Widget::on_Terminate_clicked()
{

}

void Widget::on_firstName_ContagionTest_cursorPositionChanged(const QString &text)
{
    QLabel * first_name_label = new QLabel("First Name",this);
    first_name_label->setMinimumSize(70,50);
    first_name_label->move(10,10);

    QLineEdit * first_name_line_edit = new QLineEdit(this);
    first_name_line_edit->setMinimumSize(200,50);
    first_name_line_edit->move(100,10);
    // Connect the textChanged signal instead
    connect(ui->firstName_ContagionTest, &QLineEdit::textChanged, this, &Widget::on_firstName_ContagionTest_textChanged);
}


void Widget::on_LastName_ContagionTest_cursorPositionChanged(const QString &text)
{
    QLabel * last_name_label = new QLabel("Last Name",this);
    last_name_label->setMinimumSize(70,50);
    last_name_label->move(10,70);

    QLineEdit * last_name_line_edit = new QLineEdit(this);
    last_name_line_edit->setMinimumSize(200,50);
    last_name_line_edit->move(100,70);
    // Connect the textChanged signal instead
    connect(ui->lastName_ContagionTest, &QLineEdit::textChanged, this, &Widget::on_LastName_ContagionTest_textChanged);
}


void Widget::on_FirstName_Triage_cursorPositionChanged(const QString &text)
{
    QLabel * first_name_label1 = new QLabel("First Name",this);
    first_name_label1->setMinimumSize(70,50);
    first_name_label1->move(10,10);

    QLineEdit * first_name_line_edit1 = new QLineEdit(this);
    first_name_line_edit1->setMinimumSize(200,50);
    first_name_line_edit1->move(100,10);
    // Connect the textChanged signal instead
    connect(ui->FirstName_Triage, &QLineEdit::textChanged, this, &Widget::on_FirstName_Triage_textChanged);
}


void Widget::on_lastName_Triage_cursorPositionChanged(const QString &text)
{
    QLabel * last_name_label1 = new QLabel("Last Name",this);
    last_name_label1->setMinimumSize(70,50);
    last_name_label1->move(10,70);

    QLineEdit * last_name_line_edit1 = new QLineEdit(this);
    last_name_line_edit1->setMinimumSize(200,50);
    last_name_line_edit1->move(100,70);
    // Connect the textChanged signal instead
    connect(ui->lastName_Triage, &QLineEdit::textChanged, this, &Widget::on_lastName_Triage_textChanged);
}


void Widget::on_Symptoms_Triage_cursorPositionChanged(const QString &text)
{
    QLabel * symptoms_label = new QLabel("Symptoms",this);
    symptoms_label->setMinimumSize(70,50);
    symptoms_label->move(10,130);

    QLineEdit * symptoms_edit = new QLineEdit(this);
    symptoms_edit->setMinimumSize(200,50);
    symptoms_edit->move(100,130);
    // Connect the textChanged signal instead
    connect(ui->Symptoms_Triage, &QLineEdit::textChanged, this, &Widget::on_Symptoms_Triage_textChanged);
}

