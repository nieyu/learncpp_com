//
//  main.cpp
//  06_10_pointers_and_const
//
//  Created by txc-ios on 2020/10/15.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    
    const int value = 5;
    const int *ptr = &value;
//    *ptr = 6;
    
    int value01 = 6;
    const int *ptr01 = &value01;
    int *const ptr02 = &value01;
    std::cout << *ptr01 << '\n';
    value01 = 7;
    std::cout << *ptr01 << '\n';
    
    return 0;
}
