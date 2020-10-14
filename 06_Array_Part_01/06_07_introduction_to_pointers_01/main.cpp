//
//  main.cpp
//  06_07_introduction_to_pointers_01
//
//  Created by txc-ios on 2020/10/14.
//

#include <iostream>
#include <typeinfo>

int main(int argc, const char * argv[]) {
    
    short value{ 7 };
    short otherValue{ 3 };
    
    short *ptr{ &value };
    
    std::cout << value << '\n';
    std::cout << &value << '\n';
    std::cout << *ptr << '\n';
    std::cout << ptr << '\n';
    std::cout << "--------------\n";
//    std::cout << typeid(ptr).name() << '\n';
    
    *ptr = 9;
    
    std::cout << value << '\n';
    std::cout << &value << '\n';
    std::cout << *ptr << '\n';
    std::cout << ptr << '\n';
    std::cout << "--------------\n";
    
    ptr = &otherValue;
    
    std::cout << otherValue << '\n';
    std::cout << &otherValue << '\n';
    std::cout << *ptr << '\n';
    std::cout << ptr << '\n';
    std::cout << "--------------\n";
    
    std::cout << sizeof(ptr) << '\n';
    std::cout << sizeof(*ptr) << '\n';
    
    return 0;
}
