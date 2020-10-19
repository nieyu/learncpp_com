//
//  main.cpp
//  07_09_the_stack_and_the_heap
//
//  Created by txc-ios on 2020/10/6.
//

#include <iostream>

void foo() {
    foo();
}

int main(int argc, const char * argv[]) {
    
//    std::cout << "Enter a positive number: ";
//    int num{};
//    std::cin >> num;
//
//    if (num < 0 ) {
//        std::cout << "Negative number enterd. Making positive.\n";
//        num = -num;
//    }
//
//    std::cout << "You entered: " << num << '\n';
    
    
    
//    1000 0000
//    int stack[10000000];
//    std::cout << "hi\n";
//    std::cout << sizeof(int) << '\n';
    
    foo();
    
    
    return 0;
}
