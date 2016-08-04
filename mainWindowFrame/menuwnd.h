#ifndef MENUWND_H
#define MENUWND_H

#include <QMainWindow>

namespace Ui {
class MenuWnd;
}

class MenuWnd : public QMainWindow
{
    Q_OBJECT

public:
    explicit MenuWnd(QWidget *parent = 0);
    void changeStack(int index);
    ~MenuWnd();

private slots:
    void on_actionExit_E_triggered();

signals:
    void menuWndStatus(bool);

private:
    Ui::MenuWnd *ui;
};

#endif // MENUWND_H
