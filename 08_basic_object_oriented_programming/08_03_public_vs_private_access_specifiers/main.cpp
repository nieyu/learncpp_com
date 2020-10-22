//
//  main.cpp
//  08_03_public_vs_private_access_specifiers
//
//  Created by txc-ios on 2020/10/22.
//

#include <iostream>

/// DateClass
class DateClass {
private:
    /// 月
    int m_month;
    /// 日
    int m_day;
    /// 年
    int m_year;
    
public:
    void setDate(int month, int day, int year) {
        m_month     = month;
        m_day       = day;
        m_year      = year;
    }
    
    void print() {
        std::cout << m_month << '/' << m_day << '/' << m_year << '\n';
    }
    
    void copyFrom(const DateClass &d) {
        m_month = d.m_month;
        m_day   = d.m_day;
        m_year  = d.m_year;
    }
};

int main(int argc, const char * argv[]) {
    
    DateClass date;
    date.setDate(1, 2, 2020);
    date.print();
    
    DateClass copy;
    copy.copyFrom(date);
    copy.print();
    
    date.setDate(2, 3, 2021);
    copy.print();
    
    return 0;
}
