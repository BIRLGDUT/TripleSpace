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

    //define push button const variable
    const int INITROBOTBTN;
    const int CHANGELANGUAGEBTN;
    const int UPDATEROBOTBTN;
    const int SETPASSWORDBTN;
    const int CORRECTSCREENBTN;
    const int SETWEBBTN;
    const int SETTIMEBTN;
    const int RETURNBTN;
};

#endif // SETROBOTWGT_H
