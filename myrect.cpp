#include "myrect.h"
#include <QtDebug>
#include <QKeyEvent>

void MyRect::keyPressEvent(QKeyEvent *event)
{
    if (event->key() == Qt::Key_Left) {
        setPos(x()-10, y());
    }
    else if (event->key() == Qt::Key_Right) {
        setPos(x()+10, y());
    }
    else if (event->key() == Qt::Key_Up) {
        setPos(x(), y()-10);
    }
    else if (event->key() == Qt::Key_Down) {
        setPos(x(), y()+10);
    }
    else
        qDebug() << "MyRect knows that you pressed a key";
}
