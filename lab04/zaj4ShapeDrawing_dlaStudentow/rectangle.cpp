//
// Created by mateu on 06.05.2022.
//

#include "rectangle.h"

Shapes::Rectangle::Rectangle(int xFrom, int yFrom, int xTo, int yTo) {
    this->xFrom = xFrom;
    this->yFrom = yFrom;
    this->_xTo = xTo;
    this->_yTo = yTo;
}

bool Shapes::Rectangle::isIn(int x, int y) const {
    return x <= _xTo && x >= xFrom && y <= _yTo && y >= yFrom;
}
