//
//  main.cpp
//  07_04c_returning_value_by_value_reference_and_address
//
//  Created by txc-ios on 2020/9/29.
//

#include <iostream>
#include <string>
#include <tuple>

struct Employee {
    std::string name;
    int age;
};

void printEmployeeName(const Employee &e) {
    
}

std::pair<int, int> minmax(const int x, const int y) {
    return std::pair<int, int> { x, y };
}

int main(int argc, const char * argv[]) {
    
    
    
    return 0;
}
