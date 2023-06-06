#include "pared.h"

pared::pared()
{

}

pared::pared(int x, int y, int w, int h)
{
    this->posx=x;
    this->posy=y;
    this->w=w;
    this->h=h;
    setPos(posx,posy);
}

QRectF pared::boundingRect() const
{
  return QRectF(posx,posy,w,h);
}

void pared::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
  painter->setBrush(Qt::gray);
  painter->drawRect(boundingRect());
}