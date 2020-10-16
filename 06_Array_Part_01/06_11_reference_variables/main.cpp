//
//  main.cpp
//  06_11_reference_variables
//
//  Created by txc-ios on 2020/10/16.
//

#include <iostream>

void changeN(int &ref) {
    ref = 8;
}

int main(int argc, const char * argv[]) {
    
    int value{ 5 };
    int &ref{ value };
    std::cout << ref << '\n';
    std::cout << &ref << '\n';
    std::cout << &value << '\n';
    
    int &x { ref };
    std::cout << &x << '\n';
    ref++;
    std::cout << ref << '\n';
    std::cout << &ref << '\n';
    std::cout << &value << '\n';
    std::cout << &x << '\n';
    
    int y{ 7 };
//    int &ref_y{ y }; //error cann't assign a reference from a const
    changeN(y);
    std::cout << y << '\n';
    
    int a{ 7 };
    int b{ 3 };
    a = a ^ b;
    std::cout << "a = " << a << " b = " << b << '\n';
    b = a ^ b;
    std::cout << "a = " << a << " b = " << b << '\n';
    a = a ^ b;
    std::cout << "a = " << a << " b = " << b << '\n';
    
    return 0;
}
