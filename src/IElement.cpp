#include "../include/IElement.h"
#include <iostream>

IElement::IElement() {
    id = 0;
    status = DEFAULT;
    std::cout<<"IElement Constructor"<<std::endl;
}

IElement::IElement(int id, Status status) {
    setID(id);
    setStatus(status);
}

IElement::~IElement()
{
    //dtor
}

void IElement::setID(int id) {
    this->id = id;
}
void IElement::setStatus(Status status) {
    this->status = status;
}
int IElement::getID() {
    return id;
}

Status IElement::getStatus() {
    return status;
}
