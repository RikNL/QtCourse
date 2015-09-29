#include <QCoreApplication>
#include "myobject.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    MyObject *pObj = new MyObject();

    emit pObj->LP0_on_fire();

    return a.exec();
}
