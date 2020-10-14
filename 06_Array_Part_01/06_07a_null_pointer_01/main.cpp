//
//  main.cpp
//  06_07a_null_pointer_01
//
//  Created by txc-ios on 2020/10/14.
//

#include <iostream>
#include <cstddef>

void print(int x) {
    std::cout << "print(int): " << x << '\n';
}

void print(int *x) {
    if (!x) {
        std::cout << "print(int*): null\n";
    } else {
        std::cout << "print(int*): " << *x << '\n';
    }
}

int main(int argc, const char * argv[]) {
    
    int *x { NULL };
    print(x);
    print(0);
    print(nullptr);
//    print(NULL);
    
    return 0;
}
