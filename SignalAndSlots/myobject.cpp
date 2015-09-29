#include "myobject.h"
#include <stdio.h>
#include <QDebug>

MyObject::MyObject(QObject *parent) : QObject(parent)
{
    connect(this, SIGNAL(LP0_on_fire()), this, SLOT(Use_Fire_Extinguisher()));
}

MyObject::~MyObject()
{

}

void MyObject::Use_Fire_Extinguisher()
{
    qDebug() << "Extinguishing the fire on LP0!";
}
