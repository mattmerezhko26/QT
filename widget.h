#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
//Labels
    void on_firstName_ContagionTest_cursorPositionChanged(const QString &text);
    void on_LastName_ContagionTest_cursorPositionChanged(const QString &text);
    void on_FirstName_Triage_cursorPositionChanged(const QString &text);
    void on_lastName_Triage_cursorPositionChanged(const QString &text);
    void on_Symptoms_Triage_cursorPositionChanged(const QString &text);
//Buttons
    void on_Submit_clicked();

    void on_Cancel_clicked();

    void on_GenerateTicket_clicked();

    void on_Time_clicked();

    void on_CallNext_clicked();

    void on_Exit_clicked();

    void on_Submit_Triage_test_clicked();





    void on_StartOver_button_clicked();

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
