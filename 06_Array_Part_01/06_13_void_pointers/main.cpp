//
//  main.cpp
//  06_13_void_pointers
//
//  Created by txc-ios on 2020/10/16.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    
    int value{ 5 };
    void *voidPtr{ &value };
    std::cout << voidPtr << '\n';
//    std::cout << *voidPtr << '\n'; //error
    
    int *intPtr{ static_cast<int*>(voidPtr) };
    std::cout << *intPtr << '\n';
    
    
    
    return 0;
}
