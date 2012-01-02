#ifndef IELEMENT_H
#define IELEMENT_H

#include "Common.h"

class IElement {
public:
    IElement();
    IElement(int , Status);
    virtual ~IElement();

    void setID(int );
    void setStatus(Status );
    int getID();
    Status getStatus();

    virtual void identify() = 0;

private:
    int id;
    Status status;
};

#endif // IELEMENT_H
