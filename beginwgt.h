#ifndef BEGINWGT_H
#define BEGINWGT_H

#include <QWidget>

class MenuWnd;//pre-declaration

namespace Ui {
class BeginWgt;
}

class BeginWgt : public QWidget
{
    Q_OBJECT

public:
    explicit BeginWgt(QWidget *parent = 0);
    ~BeginWgt();
    MenuWnd *menuwnd;

private slots:
    void on_runProgramBtn_clicked();

    void on_editCodeBtn_clicked();

    void on_setRobotBtn_clicked();

    void on_shutDownBtn_clicked();

signals:
    void setPageNum(int);//设置无菜单窗口的stack页码信号
    void setNoMenuWndStatus(bool);//设置唔菜单窗口显示与否的信号

private:
    Ui::BeginWgt *ui;

    void windowShow(int index);

    //define push button const variable
    const int RUNPROGRAMBTN;
    const int EDITCODEBTN;
    const int SETROBOTBTN;
    const int SHUTDOWNBTN;
};

#endif // BEGINWGT_H
