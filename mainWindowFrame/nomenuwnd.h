#ifndef NOMENUWND_H
#define NOMENUWND_H

#include <QMainWindow>

namespace Ui {
class NoMenuWnd;
}

class NoMenuWnd : public QMainWindow
{
    Q_OBJECT

public:
    explicit NoMenuWnd(QWidget *parent = 0);
    ~NoMenuWnd();

private slots:
    void setStackPage(int index);
    void setWndStatus(bool index);

private:
    Ui::NoMenuWnd *ui;
};

#endif // NOMENUWND_H
