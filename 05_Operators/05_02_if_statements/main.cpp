//
//  main.cpp
  05_02_if_statements
//
//  Created by txc-ios on 2020/10/9.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    
    std::cout << "Enter a number: ";
    int x{};
    std::cin >> x;
    
    if (x = 0) {
        std::cout << "The number you entered " << x << '\n';
        std::cout << x << " is greater than 10\n";
    } else {
        std::cout << "The number is not 10\n";
    }
    
    if (x = 2; x > 1) {
        std::cout << "x is " << x << '\n';
    } else {
        std::cout << "x is small than 1\n";
    }
    
    return 0;
}
