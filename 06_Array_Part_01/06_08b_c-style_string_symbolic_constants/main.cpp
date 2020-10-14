//
//  main.cpp
//  06_08b_c-style_string_symbolic_constants
//
//  Created by txc-ios on 2020/10/14.
//

#include <iostream>

const char* getName() {
    return "Alex";
}

int main(int argc, const char * argv[]) {
    
    const char *name1{ "Alex" };
    const char *name2{ "Alex" };
    
    std::cout << &name1 << '\n';
    std::cout << &name2 << '\n';
    
    const char* cName{ getName() };
    std::cout << cName << '\n';
    
    int nArray[5]{ 9, 7, 5, 3, 1 };
    char cArray[]{ "Hello" };
    const char *name{ "nieyu" };
    std::cout << nArray << '\n';
    std::cout << cArray << '\n';
    std::cout << name << '\n';
    
    char c{ 'Q' };
    std::cout << c << '\n';
    std::cout << &c << '\n';
    
    return 0;
}
