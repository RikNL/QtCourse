#ifndef MYOBJECT_H
#define MYOBJECT_H

#include <QObject>

class MyObject : public QObject
{
    Q_OBJECT
public:
    explicit MyObject(QObject *parent = 0);
    ~MyObject();

signals:
    void LP0_on_fire();                          // https://en.wikipedia.org/wiki/Lp0_on_fire

public slots:
    void Use_Fire_Extinguisher();
};

#endif // MYOBJECT_H
