//
//  main.cpp
//  05_05_while_statements
//
//  Created by txc-ios on 2020/10/9.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    
    int count{ 0 };
    while (count < 10) {
        std::cout << count << ' ';
        ++count;
    }
    std::cout << "Done!\n";
    
    int letter{ 'a' };
    
    while (letter <= 'z') {
        std::cout << static_cast<char>(letter) << " ";
        ++letter;
    }
    std::cout << '\n';
    
    return 0;
}
