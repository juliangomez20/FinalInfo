#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    scene= new QGraphicsScene();
    ui->graphicsView->setScene(scene);
    ui->graphicsView->setBackgroundBrush(QImage(":/Espacio.jpg").scaled(750,500)); //Intoducir fondo
    scene->setSceneRect(0,0,750,500);
    ball= new bolita(100,100,100);//Posición ball
    paredes.push_back( new pared(0,0,750,20));
    scene->addItem(paredes.back());
    paredes.push_back( new pared(0,0,20,500));
    scene->addItem(paredes.back());
    paredes.push_back( new pared(369,0,20,750));
    scene->addItem(paredes.back());
    paredes.push_back( new pared(10,240,750,20));
    scene->addItem(paredes.back());


    scene->addItem(ball);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::keyPressEvent(QKeyEvent *evento)
{
    if(evento->key()==Qt::Key_W)
    {
      if(!EvaluarColision())
            ball->MoveUp();
      else
          ball->MoveDown();
    }


   else if(evento->key()==Qt::Key_S)
    {
      if(!EvaluarColision())
            ball->MoveDown();
      else
          ball->MoveUp();
    }

   else if(evento->key()==Qt::Key_D)
        ball->MoveRight();
    else if(evento->key()==Qt::Key_A)
        ball->MoveLeft();

}

bool MainWindow::EvaluarColision()
{
    QList<pared*>::Iterator it;
    for(it=paredes.begin();it!=paredes.end();it++)
    {
        if((*it)->collidesWithItem(ball))
            return true;
    }
   return false;
}



