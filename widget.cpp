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

void Widget::on_firstName_ContagionTest_cursorPositionChanged(const QString &text)
{
    QLabel * first_name_label = new QLabel("First Name",this);

    QLineEdit * first_name_line_edit = new QLineEdit(this);
    // Connect the textChanged signal instead
     connect(ui->firstName_ContagionTest, &QLineEdit::textChanged, this, &Widget::on_firstName_ContagionTest_textChanged);
}


void Widget::on_LastName_ContagionTest_cursorPositionChanged(const QString &text)
{
    QLabel * last_name_label = new QLabel("Last Name",this);


    QLineEdit * last_name_line_edit = new QLineEdit(this);

    // Connect the textChanged signal instead
    connect(ui->lastName_ContagionTest, &QLineEdit::textChanged, this, &Widget::on_LastName_ContagionTest_textChanged);
}


void Widget::on_FirstName_Triage_cursorPositionChanged(const QString &text)
{
    QLabel * first_name_label1 = new QLabel("First Name",this);


    QLineEdit * first_name_line_edit1 = new QLineEdit(this);

    // Connect the textChanged signal instead
    connect(ui->FirstName_Triage, &QLineEdit::textChanged, this, &Widget::on_FirstName_Triage_textChanged);
}


void Widget::on_lastName_Triage_cursorPositionChanged(const QString &text)
{
    QLabel * last_name_label1 = new QLabel("Last Name",this);


    QLineEdit * last_name_line_edit1 = new QLineEdit(this);

    // Connect the textChanged signal instead
    connect(ui->lastName_Triage, &QLineEdit::textChanged, this, &Widget::on_lastName_Triage_textChanged);
}


void Widget::on_Symptoms_Triage_cursorPositionChanged(const QString &text)
{
    QLabel * symptoms_label = new QLabel("Symptoms",this);

    QLineEdit * symptoms_edit = new QLineEdit(this);

    // Connect the textChanged signal instead
    connect(ui->Symptoms_Triage, &QLineEdit::textChanged, this, &Widget::on_Symptoms_Triage_textChanged);
}


void Widget::on_FirstName_Triage_cursorPositionChanged(int arg1, int arg2)
{

}

