//
// Created by mateu on 07.05.2022.
//

#ifndef ZAD4SHAPEDRAWING_SHAPECOMPOSITE_H
#define ZAD4SHAPEDRAWING_SHAPECOMPOSITE_H

#include <memory>
#include "shape.h"

namespace Shapes {
    enum class ShapeOperation {INTERSECTION, SUM, DIFFERENCE};

    class ShapeComposite : public Shape {

    private:
        std::shared_ptr<Shape> shape1;
        std::shared_ptr<Shape> shape2;
        ShapeOperation operation;

    public:
        ShapeComposite(const std::shared_ptr<Shape>& shape1, const std::shared_ptr<Shape>& shape2, ShapeOperation operation);
        [[nodiscard]] bool isIn(int x, int y) const override;
    };
}

#endif //ZAD4SHAPEDRAWING_SHAPECOMPOSITE_H
