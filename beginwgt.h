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

private:
    Ui::BeginWgt *ui;
    MenuWnd *menuwnd;
};

#endif // BEGINWGT_H
