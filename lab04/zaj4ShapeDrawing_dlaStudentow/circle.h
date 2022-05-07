//
// Created by mateu on 07.05.2022.
//

#ifndef ZAD4SHAPEDRAWING_CIRCLE_H
#define ZAD4SHAPEDRAWING_CIRCLE_H

#include "shape.h"

namespace Shapes {
    class Circle : public Shape {
    private:
        int xCenter;
        int yCenter;
        int radius;
    public:
        Circle(int x, int y, int radius);

        [[nodiscard]] int x() const { return xCenter; }

        [[nodiscard]] int y() const { return yCenter; }

        [[nodiscard]] int getRadius() const { return radius; }

        [[nodiscard]] bool isIn(int x, int y) const override;
    };

}


#endif //ZAD4SHAPEDRAWING_CIRCLE_H
