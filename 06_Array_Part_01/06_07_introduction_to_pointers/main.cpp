//
//  main.cpp
//  06_07_introduction_to_pointers
//
//  Created by txc-ios on 2020/10/13.
//

#include <iostream>
#include <typeinfo>

void foo(int *&p) {
    
}

int main(int argc, const char * argv[]) {
    
    int x{ 5 };
    std::cout << x << '\n';
    std::cout << &x << '\n';
    std::cout << *(&x) << '\n';
    
    int *iPtr{};
    double *dPtr{};
    int* iPtr2{};
    int * iPtr3{};
    
    int *iPtr4{}, *iPtr5{};
    
    int v{ 5 };
    int *ptr{ &v };
    
    std::cout << &v << '\n';
    std::cout << ptr << '\n';
    int v2{ 6 };
    ptr = nullptr;
    ptr = &v2;
    std::cout << &v2 << '\n';
    std::cout << ptr << '\n';
    /**
     ptr 没有的地址没有变
     */
    
    std::cout << typeid(&ptr).name() << '\n';
    
    int *p;
    foo(p);
    
    std::cout << *p << '\n';
    
    return 0;
}
