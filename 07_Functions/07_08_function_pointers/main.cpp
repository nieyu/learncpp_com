//
//  main.cpp
//  07_08_function_pointers
//
//  Created by txc-ios on 2020/9/30.
//

#include <iostream>

int foo() {
    return  5;
}

int goo() {
    return 6;
}

int fcc(int i) {
    return i + 2;
}



int main(int argc, const char * argv[]) {
    
    std::cout << foo << '\n';
    std::cout << reinterpret_cast<void*>(foo) << '\n';
    
    int (*fcnPtr)(){ &foo };
    std::cout << (*fcnPtr)() << '\n';
    int (*fccPtr)(int){ &fcc };
    std::cout << fccPtr(2) << '\n';
    
    // Passing functions as arguments to other functions
    
    
    return 0;
}
