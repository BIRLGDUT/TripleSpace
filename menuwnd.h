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
    ~MenuWnd();

private:
    Ui::MenuWnd *ui;
};

#endif // MENUWND_H
