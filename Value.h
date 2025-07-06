#ifndef VALUE_H
#define VALUE_H

#include <iostream>
#include <tuple>
#include <set>


class Value {
public:
    double data;
    std::tuple<int, int> children;
    std::set<std::tuple<int, int>> prev;

    std::string op;
    Value(double d, std::string op = "");  // constructor

    Value operator+(const Value& other) const;

    Value operator*(const Value& other) const;

    friend std::ostream& operator<<(std::ostream& os, const Value& v);
};

#endif
