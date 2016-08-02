#ifndef BEGINWGT_H
#define BEGINWGT_H

#include <QWidget>


class MenuWnd;

namespace Ui {
class BeginWgt;
}

class BeginWgt : public QWidget
{
    Q_OBJECT

public:
    explicit BeginWgt(QWidget *parent = 0);
    ~BeginWgt();

private slots:
    void on_runProgramBtn_clicked();

    void on_editCodeBtn_clicked();

    void on_setRobotBtn_clicked();

    void on_shutDownBtn_clicked();

signals:
    void setPageNum(int);//设置无菜单窗口的stack页码信号

private:
    Ui::BeginWgt *ui;
    MenuWnd *menuwnd;
    void windowShow(int index);

    //define the push button macros.
#define RUNPROGRAMBTN  1
#define EDITCODEBTN  2
#define SETROBOTBTN  3
#define SHUTDOWNBTN  4
};

#endif // BEGINWGT_H
