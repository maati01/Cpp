//
// Created by mateu on 06.05.2022.
//

#ifndef ZAD4SHAPEDRAWING_RECTANGLE_H
#define ZAD4SHAPEDRAWING_RECTANGLE_H

#include "shape.h"

namespace Shapes {
    class Rectangle : public Shape {
    private:
        int xFrom;
        int yFrom;
        int _xTo;
        int _yTo;
    public:
        Rectangle(int xFrom, int yFrom, int xTo, int yTo);
        [[nodiscard]] int x() const{return xFrom;}
        [[nodiscard]] int y() const{return yFrom;}
        [[nodiscard]] int xTo() const {return _xTo;}
        [[nodiscard]] int yTo() const {return _yTo;}
        [[nodiscard]] bool isIn(int x, int y) const override;
    };

}
#endif //ZAD4SHAPEDRAWING_RECTANGLE_H
