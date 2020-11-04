//
//  main.cpp
//  09_02_overloading_the_arithmetic_operators_using_friend_functions
//
//  Created by txc-ios on 2020/11/4.
//

#include <iostream>
#include "Cent.hpp"

int main(int argc, const char * argv[]) {
    
    Cent c1{ 3 };
    Cent c2{ 4 };
    Cent c3{ c1 + c2 };
    std::cout << c3.genCents() << '\n';
    
    Cent c4{ c3 + 4 };
    std::cout << c4.genCents() << '\n';
    
    return 0;
}
