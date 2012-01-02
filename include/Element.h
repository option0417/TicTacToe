#ifndef ELEMENT_H
#define ELEMENT_H

#include "IElement.h"

class Element : public IElement {
public:
    Element();
    Element(int, Status);
    virtual ~Element();
    void identify();
};

#endif // ELEMENTO_H
