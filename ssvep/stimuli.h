#ifndef STIMULI_H
#define STIMULI_H

#include <QWidget>
extern float fr;
extern QString content;

namespace Ui {
class stimuli;
}

class stimuli : public QWidget
{
    Q_OBJECT

public:
    explicit stimuli(QWidget *parent = 0);
    ~stimuli();
public slots:
    void Blink();
private:
    Ui::stimuli *ui;
};

#endif // STIMULI_H
