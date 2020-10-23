//
//  main.cpp
//  08_05_constructors
//
//  Created by txc-ios on 2020/10/23.
//

#include <iostream>

class Fraction {
private:
    int m_numerator;
    int m_denominator;
public:
    Fraction() {
        m_numerator = 0;
        m_denominator = 1;
    }
    
    Fraction(int numerator, int denominator = 1) {
        assert(denominator != 0);
        m_numerator = numerator;
        m_denominator = denominator;
    }
    
    int getNumerator() { return m_numerator; }
    int getDenominator() { return m_denominator; }
    double getValue() { return static_cast<double>(m_numerator) / m_denominator;}
};

class Date {
private:
    int m_year;
    int m_month;
    int m_day;
public:
    /// 含蓄的给予默认初始化值
    Date() = default;
};

int main(int argc, const char * argv[]) {
    
    Fraction fraction;
    std::cout << fraction.getNumerator() << "/" << fraction.getDenominator() << '\n';
    
    Fraction fraction1{ 2, 3 };
    std::cout << fraction1.getNumerator() << "/" << fraction1.getDenominator() << '\n';
    
    Fraction fraction2( 2, 4 );
    std::cout << fraction2.getNumerator() << "/" << fraction2.getDenominator() << '\n';
    
    return 0;
}
