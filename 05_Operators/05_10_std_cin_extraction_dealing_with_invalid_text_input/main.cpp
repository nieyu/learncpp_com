//
//  main.cpp
//  05_10_std_cin_extraction_dealing_with_invalid_text_input
//
//  Created by txc-ios on 2020/10/12.
//

#include <iostream>

double getDouble() {
    while (true) {
        
        std::cout << "Enter a double value: ";
        double x{};
        std::cin >> x;
        
        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(32767, '\n');
            std::cout << "Oops, that input is invalid. Please try again.\n";
        } else {
            std::cin.ignore(32767, '\n');
            return x;
        }
        
    }
}

char getOperator() {
    while (true) {
        std::cout << "Enter one of the following: +, -, *, /: ";
        char _operator{};
        std::cin >> _operator;
        
        switch (_operator) {
            case '+':
            case '-':
            case '*':
            case '/':
                return _operator;
            default:
                std::cout << "Oops, that input is invalid. Please try again.\n";
        }
    }
    
}

void printResult(double x, char _operator, double y) {
    std::cout << x << " " << _operator << " " <<  y << " = ";
    switch (_operator) {
        case '+':
            std::cout << x + y;
            break;
        case '-':
            std::cout << x - y;
            break;
        case '*':
            std::cout << x * y;
            break;
        case '/':
            std::cout << x / y;
            break;
        default:
            std::cerr << "Something went wrong: printResult() got an inavlid operator.\n";
            break;
    }
    std::cout << std::endl;
}

int main(int argc, const char * argv[]) {
    
//    std::cout << "Please enter 5a: ";
//    int x{};
//    std::cin >> x;
//
//    char a{};
//    std::cin >> a;
//
//    std::cout << "x = " << x << '\n';
//    std::cout << "a = " << a << '\n';
    
//    int x{};
//    std::cout << "Please enter a char: ";
//    std::cin >> x;
//    std::cout << "x = " << x << '\n';
    
    double x{ getDouble() };
    char _operator{ getOperator() };
    double y{ getDouble() };
    printResult(x, _operator, y);
    
    return 0;
}
