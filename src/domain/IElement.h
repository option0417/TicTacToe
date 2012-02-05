#ifndef IELEMENT_H
#define IELEMENT_H

#include "../common/Common.h"

class IElement {
public:
    IElement();
    IElement(int , Status);
    virtual ~IElement();

    void setID(int );
    void setStatus(Status );
    int getID();
    Status getStatus();
    Status getPreStatus();

    virtual void identify() = 0;

private:
    int id;
    Status status;
    Status preStatus;
};

#endif // IELEMENT_H
