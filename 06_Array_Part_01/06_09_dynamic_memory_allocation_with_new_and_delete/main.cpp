//
//  main.cpp
//  06_09_dynamic_memory_allocation_with_new_and_delete
//
//  Created by txc-ios on 2020/10/14.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    
    int *ptr{ new int };
    int *otherPtr{ ptr };
    *ptr = 7;
    std::cout << *ptr << '\n';
    std::cout << ptr << '\n';
    std::cout << *otherPtr << '\n';
    std::cout << otherPtr << '\n';
    std::cout << "-------------\n";
    
    delete ptr;
    std::cout << *ptr << '\n';
    std::cout << ptr << '\n';
    std::cout << *otherPtr << '\n';
    std::cout << otherPtr << '\n';
    std::cout << "-------------\n";
    
    ptr = nullptr;
//    std::cout << *ptr << '\n';
    std::cout << ptr << '\n';
    std::cout << *otherPtr << '\n';
    std::cout << otherPtr << '\n';
    std::cout << *otherPtr << '\n';
    std::cout << otherPtr << '\n';
    std::cout << "-------------\n";
    
    
//    int *ptr01{ new int };
//    *ptr01 = 8;
    
    
    return 0;
}
