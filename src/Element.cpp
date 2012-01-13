#include "../include/Element.h"
#include <iostream>

Element::Element() {}

Element::Element(int id,Status status) : IElement(id, status) {}

Element::~Element() {}

void Element::identify() {}
