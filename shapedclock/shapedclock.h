#ifndef SHAPEDCLOCK_H
#define SHAPEDCLOCK_H

#include <QWidget>

class shapedclock : public QWidget
{
    Q_OBJECT

public:
    shapedclock(QWidget *parent = 0);
    ~shapedclock();

public:
    QSize sizeHint() const override;

protected:
    void mousePressEvent(QMouseEvent *event) override;
    void mouseMoveEvent(QMouseEvent *event) override;
    void paintEvent(QPaintEvent *event) override;
    void resizeEvent(QResizeEvent *event) override;

private:
    QPoint dragPosition;
};

#endif // SHAPEDCLOCK_H
