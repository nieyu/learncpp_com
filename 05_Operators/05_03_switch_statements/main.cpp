//
//  main.cpp
//  05_03_switch_statements
//
//  Created by txc-ios on 2020/10/9.
//

#include <iostream>

enum class Color {
    black,
    white,
    red,
    green,
    blue,
};

void printColor(const Color color) {
    switch (color) {
        case Color::black:
            std::cout << "black";
            break;
        case Color::white:
            std::cout << "white";
            break;
        case Color::red:
            std::cout << "red";
            break;
        case Color::green:
            std::cout << "green";
            break;
        case Color::blue:
            std::cout << "blue";
            break;
        default:
            std::cout << "Unknow";
            break;
    }
}

int getInteger() {
    std::cout << "Please enter an integer: ";
    int x{};
    std::cin >> x;
    return x;
}

char getChar() {
    std::cout << "Please enter an operator: ";
    char c{};
    std::cin >> c;
    return c;
}

int calculate(int x, int y, char _operator) {
    switch (_operator) {
        case '+':   return x + y;
        case '-':   return x - y;
        case '*':   return x * y;
        case '/':   return x / y;
        default:
            std::cout << "operator is not satify\n";
            return -1;
    }
}

int main(int argc, const char * argv[]) {
    
    Color color{ Color::green };
    printColor(color);
    std::cout << '\n';
    
    int x{ getInteger() };
    int y{ getInteger() };
    char _operator{ getChar() };
    std::cout << "x " << _operator << " y = " << calculate(x, y, _operator) << '\n';
    
    
    return 0;
}
