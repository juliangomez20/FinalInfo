#include "bolita.h"

bolita::bolita()
{

}

bolita::bolita(int x, int y, int r)
{
  this->posx=x;
  this->posy=y;
  this->radio=r;
  this->velocidad=3;

  setPos(posx, posy);
}

QRectF bolita::boundingRect() const
{
    return QRectF(posx,posy,2*radio,2*radio);
}

void bolita::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
   //painter->setBrush(Qt::cyan);
   //painter->drawEllipse(boundingRect());

    //QPixmap pixmap2(":/Imagen/cohete.png");
    //painter->drawPixmap(boundingRect(),pixmap2,pixmap2.rect());

    QPixmap pixmap(":/Sprite Astronauta.jpg");
    painter->drawPixmap(boundingRect(),pixmap,pixmap.rect());
}

void bolita::MoveUp()
{
   posy-=velocidad;
   setPos(posx, posy);
}

void bolita::MoveDown()
{
    posy+=velocidad;
    setPos(posx, posy);
}

void bolita::MoveLeft()
{
    posx-=velocidad;
    setPos(posx, posy);
}

void bolita::MoveRight()
{
    posx+=velocidad;
    setPos(posx, posy);
}


