//
//  main.cpp
//  07_08_function_pointers_03
//
//  Created by txc-ios on 2020/10/6.
//

#include <iostream>
#include <functional>

int add(int x, int y) {
    return x + y;
}

int reduce(int x, int y) {
    return x - y;
}

int multiply(int x, int y) {
    return x * y;
}

int division(int x, int y) {
    return x / y;
}

using FFF = int(*)(int, int);

int mathAction(int x, int y, FFF action) {
    
    return action(x, y);
    
}

int getIntNumber() {
    std::cout << "Please enter a integer: ";
    int i;
    std::cin >> i;
    return i;
}

char getCharOperator() {
    std::cout << "Please enter the math operator: ";
    char c;
    std::cin >> c;
    return c;
}

FFF getMathActionWith(const char c) {
    switch (c) {
        case '+':   return add;
            
        case '-':   return reduce;
            
        case '*':   return multiply;
            
        case '/':   return division;
            
        default: break;
    }
    return nullptr;
}


int main(int argc, const char * argv[]) {
    
    int x{ getIntNumber() };
    char c{ getCharOperator() };
    int y{ getIntNumber() };
    
    FFF f = getMathActionWith(c);
    
    std::cout << x << " " << c << " " << y << " = " << mathAction(x, y, f) << '\n';
    
    return 0;
}
