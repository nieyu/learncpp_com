//
//  main.cpp
//  07_09_the_stack_and_the_heap
//
//  Created by txc-ios on 2020/10/6.
//

#include <iostream>



int main(int argc, const char * argv[]) {
    
    std::cout << "Enter a positive number: ";
    int num{};
    std::cin >> num;
    
    if (num < 0 ) {
        std::cout << "Negative number enterd. Making positive.\n";
        num = -num;
    }
    
    std::cout << "You entered: " << num << '\n';
    
    return 0;
}
