//
//  main.cpp
//  07_04_passing_argument_by_address_01
//
//  Created by txc-ios on 2020/10/19.
//

#include <iostream>

void foo(int& ref) {
    ref = 3;
}

void foo(int* ptr) {
    *ptr = 4;
}

void setNull(int* ptr) {
    ptr = nullptr;
}

void setNullRef(int*& refPtr) {
    refPtr = nullptr;
}

int main(int argc, const char * argv[]) {
    
    int i{ 1 };
    std::cout << i << '\n';
    
    foo(i);
    std::cout << i << '\n';
    
    foo(&i);
    std::cout << i << '\n';
    
    int *ptr{ &i };
    setNull(ptr);
    std::cout << i << '\n';
    std::cout << *ptr << '\n';
    
    int *refPtr{ &i };
    setNullRef(refPtr);
    std::cout << i << '\n';
    if (refPtr) {
        std::cout << *refPtr << '\n';
    } else {
        std::cout << "refPtr is null\n";
    }
    
    return 0;
}
