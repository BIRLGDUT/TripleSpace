#ifndef SETROBOTWGT_H
#define SETROBOTWGT_H

#include <QWidget>

namespace Ui {
class SetRobotWgt;
}

class SetRobotWgt : public QWidget
{
    Q_OBJECT

public:
    explicit SetRobotWgt(QWidget *parent = 0);
    ~SetRobotWgt();

private slots:
    void on_returnBtn_clicked();

signals:
    void setPageNum(int); //return to the beginning page signal.

private:
    Ui::SetRobotWgt *ui;
    void btnAction(int index);

    //define the push button macros.
#define INITROBOTBTN 1
#define CHANGELANGUAGEBTN 2
#define UPDATEROBOTBTN 3
#define SETPASSWORDBTN 4
#define CORRECTSCREENBTN 5
#define SETWEBBTN 6
#define SETTIMEBTN 7
#define RETURNBTN 8
};

#endif // SETROBOTWGT_H
