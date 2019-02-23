#include "sale.h"

using namespace std;

double Sales_data::avg_price() const {
    if (units_sold) {
        return revenue / units_sold;
    } else {
        return 0;
    }
}



int main()
{
    Sales_data sd;
    cout << sd.avg_price() << endl;
    return 0;
}
