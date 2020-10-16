//
//  main.cpp
//  06_15_an_introduction_to_std__array
//
//  Created by txc-ios on 2020/10/16.
//

#include <iostream>
#include <array>

int main(int argc, const char * argv[]) {
    
    std::array<int, 3> myArray;
    
//    myArray.at(4) = 12;
    
    std::cout << myArray.size() << '\n';
    
    return 0;
}
