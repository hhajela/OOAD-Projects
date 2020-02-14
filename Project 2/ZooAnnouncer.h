#ifndef _ZOOANNOUNCER_H_
#define _ZOOANNOUNCER_H_

#include "Zookeeper.h"

class Observer
{
  public:

  virtual void Update() = 0;
};

class ZooAnnouncer : public Observer
{
  public:

  ZooAnnouncer(Zookeeper * s);

  virtual void Update() override;

  private:

  Zookeeper * keeper_;
};

#endif