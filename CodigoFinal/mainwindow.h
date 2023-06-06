#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <bolita.h>
#include <QMainWindow>
#include <QGraphicsScene>
#include <QKeyEvent>
#include <pared.h>
#include <QList>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

private:
    Ui::MainWindow *ui;
    bolita *ball;
    QGraphicsScene *scene;
    void keyPressEvent(QKeyEvent *evento);
    QList<pared*>paredes;
  bool EvaluarColision();




};
#endif // MAINWINDOW_H
