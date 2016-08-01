#ifndef IOWGT_H
#define IOWGT_H

#include <QWidget>

namespace Ui {
class IOWgt;
}

class IOWgt : public QWidget
{
    Q_OBJECT

public:
    explicit IOWgt(QWidget *parent = 0);
    ~IOWgt();

private:
    Ui::IOWgt *ui;
};

#endif // IOWGT_H
