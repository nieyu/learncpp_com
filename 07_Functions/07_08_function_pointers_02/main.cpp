//
//  main.cpp
//  07_08_function_pointers_02
//
//  Created by txc-ios on 2020/10/6.
//

#include <iostream>
#include <functional>

int foo() {
    return 5;
}

int goo() {
    return 6;
}

int main(int argc, const char * argv[]) {
    
    std::function<int()> funcPtr{ &foo };
    std::cout << funcPtr() << '\n';
    funcPtr = &goo;
    std::cout << funcPtr() << '\n';
    
    auto funcPtr02{ & goo };
    std::cout << funcPtr02() << '\n';
    
    return 0;
}
