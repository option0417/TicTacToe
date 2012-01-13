#include "../include/IElement.h"
#include <iostream>

IElement::IElement() {
    id = 0;
    status = DEFAULT;
    preStatus = DEFAULT;
    std::cout<<"IElement Constructor"<<std::endl;
}

IElement::IElement(int id, Status status) {
    setID(id);
    setStatus(status);
    preStatus = DEFAULT;
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
    preStatus = this->status;
}
int IElement::getID() {
    return id;
}

Status IElement::getStatus() {
    return status;
}

Status IElement::getPreStatus() {
    return preStatus;
}
