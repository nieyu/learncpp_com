//
//  main.cpp
//  05_04_goto_statements
//
//  Created by txc-ios on 2020/10/9.
//

#include <iostream>
#include <cmath>

int main(int argc, const char * argv[]) {
    
    double x;
tryAgain:
    std::cout << "Enter a non-negative number: ";
    std::cin >> x;
    
    if (x < 0.0) {
        goto tryAgain;
    }
    std::cout << "The sqrt of " << x << " is " << std::sqrt(x) << '\n';
    
    return 0;
}
