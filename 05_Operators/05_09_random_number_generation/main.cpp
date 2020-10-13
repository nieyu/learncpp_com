//
//  main.cpp
//  05_09_random_number_generation
//
//  Created by txc-ios on 2020/10/9.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    
    std::srand(32767);
    
    for (int count{ 1 }; count <= 100; ++count) {
        std::cout << std::rand() << "\t";
        if (count % 5 == 0) {
            std::cout << '\n';
        }
    }
    
    std::cout << std::time(nullptr) << '\n';
    
    return 0;
}
