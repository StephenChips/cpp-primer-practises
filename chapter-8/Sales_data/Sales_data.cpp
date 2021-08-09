#include "./Sales_data.hpp"
#include <iostream>

using namespace std;

Sales_data::Sales_data(std::istream &is)
{
    is >> this->bookNo >> this->revenue >> this->units_sold;
}

Sales_data &Sales_data::combine(const Sales_data &rhs)
{
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
}

inline double Sales_data::avg_price() const
{
    return units_sold ? revenue / units_sold : 0;
};

std::istream &read(std::istream &is, Sales_data &s)
{
    std::string bookNo;
    unsigned units_sold;
    double revenue;

    is >> bookNo >> units_sold >> revenue;

    s.bookNo = bookNo;
    s.units_sold = units_sold;
    s.revenue = revenue;

    return is;
}

std::ostream &print(std::ostream &os, const Sales_data &s)
{
    os << "boolNo: " << s.bookNo << endl;
    os << "units_sold: " << s.units_sold << endl;
    os << "revenue :" << s.revenue << endl;
    return os;
}

Sales_data add(const Sales_data &lhs, const Sales_data &rhs)
{
    Sales_data sum = lhs;
    sum.combine(rhs);
    return sum;
}
