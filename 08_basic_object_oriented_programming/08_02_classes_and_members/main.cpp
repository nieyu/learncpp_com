//
//  main.cpp
//  08_02_classes_and_members
//
//  Created by txc-ios on 2020/10/22.
//

#include <iostream>
#include <vector>

struct DateStruct {
    int year{};
    int month{};
    int day{};
};

class DateClass {
public:
    int m_year{};
    int m_month{};
    int m_day{};
};

class Employee {
public:
    std::string m_name{};
    int m_id{};
    double m_wage{};
    
    void print() {
        std::cout << "Name: " << m_name <<
            " Id: " << m_id <<
        " Wage: $" << m_wage << '\n';
    }
};


class Calculator {
public:
    using number_t = int;
    std::vector<number_t> m_resultHistory{};
    
    number_t add(number_t a, number_t b) {
        auto result{ a + b };
        m_resultHistory.push_back(result);
        
        return result;
    };
};

int main(int argc, const char * argv[]) {
    
    Employee alex { "Alex", 1, 25.00 };
    Employee joe { "Joe", 2, 22.25 };
    
    alex.print();
    joe.print();
    
    Calculator calculator{};
    
    std::cout << calculator.add(3, 4) << '\n';
    std::cout << calculator.add(99, 33) << '\n';
    
    for (Calculator::number_t result : calculator.m_resultHistory) {
        std::cout << result << '\n';
    }
    
    return 0;
}
