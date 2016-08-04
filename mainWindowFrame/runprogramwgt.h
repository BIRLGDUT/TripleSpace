#ifndef RUNPROGRAMWGT_H
#define RUNPROGRAMWGT_H

#include <QWidget>

namespace Ui {
class RunProgramWgt;
}

class RunProgramWgt : public QWidget
{
    Q_OBJECT

public:
    explicit RunProgramWgt(QWidget *parent = 0);
    ~RunProgramWgt();

private:
    Ui::RunProgramWgt *ui;
};

#endif // RUNPROGRAMWGT_H
