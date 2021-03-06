#ifndef ANALOGREAD_H
#define ANALOGREAD_H

#include <QThread>
#include <stdio.h>
#include <QMutex>
#include <QWaitCondition>

class AnalogRead : public QThread
{
  Q_OBJECT
public:
  explicit AnalogRead(QObject *parent = 0);
  void run(void);
signals:
 void hall_event(int val);
 void batt_event(int val);
public slots:

private:
  QWaitCondition waitq;
  QMutex mutexq;

};

#endif // ANALOGREAD_H
