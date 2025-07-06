#include <iostream>
#include <cmath>
#include "Value.h"


Value::Value(double d, std::string op)
    : data(d), children(std::make_tuple(0,0)), op(op) {
    // you can initialize children/prev if needed
}

std::ostream& operator<<(std::ostream& os, const Value& v) {  // mimic __repr__
        os << "Value(data=" << v.data << ", op=" << v.op << ")";
        return os;
    }
    
Value Value::operator+(const Value& other) const {  // mimic __add__
    return Value(this->data + other.data, "+");
}

Value Value::operator*(const Value& other) const {  // mimic __mul__
    return Value(this->data * other.data, "*");
}