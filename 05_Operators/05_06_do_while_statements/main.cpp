//
//  main.cpp
//  05_06_do_while_statements
//
//  Created by txc-ios on 2020/10/9.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    
    int section;
    
    do {
        std::cout << "Please make a selection: \n";
        std::cout << "1. Addtion\n";
        std::cout << "2. Substraction\n";
        std::cout << "3. Multiplication\n";
        std::cout << "4. Division\n";
        std::cin >> section;
    } while (section != 1 && section != 2 && section != 3 && section != 4);
    
    std::cout << "You selected option #" << section << '\n';
    
    return 0;
}
