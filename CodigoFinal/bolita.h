#ifndef BOLITA_H
#define BOLITA_H

#include <QGraphicsItem>
#include <QPainter>
#include <QPixmap>

class bolita: public QGraphicsItem
{
    int posx, posy,radio,velocidad;

public:
    bolita();
    bolita(int x, int y, int r);
    QRectF boundingRect() const ;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option,
               QWidget *widget = nullptr);
    void MoveUp();
    void MoveDown();
    void MoveLeft();
    void MoveRight();


};

#endif // BOLITA_H
