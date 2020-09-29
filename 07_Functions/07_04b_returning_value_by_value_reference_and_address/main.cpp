//
//  main.cpp
//  07_04b_returning_value_by_value_reference_and_address
//
//  Created by txc-ios on 2020/9/29.
//

#include <iostream>
#include <tuple>

struct SS {
    int m_x;
    double m_y;
};

SS returnStruct() {
    SS s;
    s.m_x = 5;
    s.m_y = 6.7;
    return s;
};

std::tuple<int, double> returnTuple() {
    return { 5, 6.7 };
}

int main(int argc, const char * argv[]) {
    
    SS s{ returnStruct() };
    std::cout << s.m_x << ' ' << s.m_y << '\n';
    
    // c++ 11
    int a;
    double d;
    std::tie(a, d) = returnTuple();
    std::cout << a << ' ' << d << '\n';
    
    // c++ 17
    
    auto [x, y]{ returnTuple() };
    std::cout << x << ' ' << y << '\n';
    
    
    return 0;
}
