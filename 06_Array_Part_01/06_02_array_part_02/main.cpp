//
//  main.cpp
//  06_02_array_part_02
//
//  Created by txc-ios on 2020/10/13.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    
    int prime[5];
    prime[0] = 1;
    prime[1] = 10;
    prime[2] = 12;
    prime[3] = 21;
    prime[4] = 22;
    
    prime[5] = 15;
    
    std::cout << prime[5] << std::endl;
    
    std::cout << sizeof(prime) / sizeof(int) << '\n';
    std::cout << std::size(prime) << '\n';
    
    return 0;
}
