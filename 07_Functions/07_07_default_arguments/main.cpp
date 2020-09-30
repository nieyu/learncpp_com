//
//  main.cpp
//  07_07_default_arguments
//
//  Created by txc-ios on 2020/9/30.
//

#include <iostream>
#include <string>


void printValues(int x, int y = 10) {
    std::cout << "x: " << x << '\n';
    std::cout << "y: " << y << '\n';
}

void print(std::string str) {
    std::cout << str << '\n';
}

void print(char ch = ' ') {
    std::cout << ch << '\n';
}

int main(int argc, const char * argv[]) {
    
    printValues(1);
    printValues(2, 3);
    
    print("abc");
    print('n');
    
    return 0;
}
