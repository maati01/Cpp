// author: Grzegorz Prowadzacy

#include <algorithm>
#include <stdexcept>
#include <utility> // std::swap()

#include "vector.h"

Vector::Vector(const Vector &v) {
    capacity_ = v.capacity();
    size_ = v.size();
    data_ = new Fraction[capacity_];
    std::copy(v.data(), v.data() + v.capacity(), data_);
}

Vector::Vector(Vector &&v) : Vector(v)
{
    v.size_ = 0;
    v.capacity_ = 0;
    v.data_ = nullptr;
}

Vector::Vector(size_t capacity) {
    capacity_ = capacity;
    size_ = 0;
    data_ = new Fraction[capacity];
}

Vector& Vector::operator=(Vector &&v) {
    delete[] data_;
    capacity_ = v.capacity();
    size_ = v.size();
    data_ = v.data();
    v.data_ = nullptr;
    v.size_ = 0;
    v.capacity_ = 0;

    return *this;
}

Vector &Vector::operator=(const Vector &v) {
    delete[] data_;
    capacity_ = v.capacity();
    size_ = v.size();
    data_ = new Fraction[capacity_];
    std::copy(v.data(), v.data() + v.capacity(), data_);

    return *this;
}

void Vector::extendSize() {
    Fraction* new_data = new Fraction[++capacity_];
    std::copy(data_, data_ + capacity_, new_data);
    delete[] data_;
    data_ = new_data;
}

void Vector::push_back(Fraction fraction) {
    if (size_ == capacity_) {
        extendSize();
    }
    data_[size_++] = fraction;
}

Fraction Vector::operator[](size_t index) const {
    if(index >= size_ or index < 0) throw std::out_of_range("Wrong index!");
    return data_[index];
}

Fraction Vector::operator[](size_t index) {
    if(index >= size_ or index < 0) throw std::out_of_range("Wrong index!");
    return data_[index];
}
