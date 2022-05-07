//
// Created by mateu on 07.05.2022.
//

#include "circle.h"
#include "cmath"

Shapes::Circle::Circle(int x, int y, int radius_) {
    xCenter = x;
    yCenter = y;
    radius = radius_;
}

bool Shapes::Circle::isIn(int x, int y) const {
    return pow(x-xCenter,2) + pow(y-yCenter,2) <= pow(radius,2);
}