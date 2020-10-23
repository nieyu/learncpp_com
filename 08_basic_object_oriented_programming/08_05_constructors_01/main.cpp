//
//  main.cpp
//  08_05_constructors_01
//
//  Created by txc-ios on 2020/10/23.
//

#include <iostream>

class A {
public:
    A() {
        std::cout << "A\n";
    }
};

class B {
private:
    A m_a;
public:
    B() {
        std::cout << "B\n";
    }
};

int main(int argc, const char * argv[]) {
    
    B b;
    
    return 0;
}
