#include "sale.h"

using namespace std;

double Sales_data::avg_price() const 
{
    if (units_sold) {
        return revenue / units_sold;
    } else {
        return 0;
    }
}

Sales_data& Sales_data::combine(const Sales_data &rhs)
{
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    
    return *this;
}

istream &read(istream &is, Sales_data &item)
{
    double price = 0;
    is >> item.bookNo >> item.units_sold >> price;
    item.revenue = item.units_sold * price;

    return is;
}

ostream &print(ostream &os, const Sales_data &item)
{
    os << item.isbn() << " " << item.units_sold << " "
       << item.revenue << " " << item.avg_price();
    
    return os;
}

Sales_data add(const Sales_data &lhs, const Sales_data &rhs)
{
    Sales_data sum = lhs;
    sum.combine(rhs);

    return sum;
}

int main()
{
    Sales_data sd;
    Sales_data rhs;

    rhs.units_sold = 10;
    rhs.revenue = 999;
    read(cin, sd);
    print(cout, sd);
    // sd.combine(rhs);
    // cout << sd.avg_price() << endl;
    
    return 0;
}
