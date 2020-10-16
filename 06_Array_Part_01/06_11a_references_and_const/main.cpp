//
//  main.cpp
//  06_11a_references_and_const
//
//  Created by txc-ios on 2020/10/16.
//

#include <iostream>

void printIt(const int& x) {
    std::cout << x;
}

int main(int argc, const char * argv[]) {
    
    
    int a{ 1 };
    printIt(a);
    
    const int b { 2 };
    printIt(b);
    
    printIt(3);
    
    printIt(b + 2);
    
    return 0;
}
