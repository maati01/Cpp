//
// Created by mateu on 07.05.2022.
//

#include "shapecomposite.h"

Shapes::ShapeComposite::ShapeComposite(const std::shared_ptr<Shape>& shape1, const std::shared_ptr<Shape>& shape2,
                                       Shapes::ShapeOperation operation) {
    this->shape1 = shape1;
    this->shape2 = shape2;
    this->operation = operation;
}

bool Shapes::ShapeComposite::isIn(int x, int y) const {
    if(operation == ShapeOperation::INTERSECTION){
        return shape1->isIn(x,y) && shape2->isIn(x,y);
    }else if(operation == ShapeOperation::SUM){
        return shape1->isIn(x,y) || shape2->isIn(x,y);
    }else{
        return shape1->isIn(x,y) && !shape2->isIn(x,y);
    }
}
