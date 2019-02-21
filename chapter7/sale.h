#include <iostream>
#include <string>
#include <cstddef>

struct Sales_data {
    std::string isbn() const { return bookNo; }
    Sales_data& combine(const Sales_data&);
    double avt_price() const;

    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

Sales_data add(const Sales_data&, const Sales_data&);
std::ostream &print(std::ostream&, const Sales_data&);
std::istream &print(std::istream&, const Sales_data&);