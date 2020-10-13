//
//  main.cpp
//  05_09_random_number_generation_01
//
//  Created by txc-ios on 2020/10/9.
//

#include <iostream>
#include <random>
#include <ctime>

int main(int argc, const char * argv[]) {
    
    std::mt19937 mersenne { static_cast<std::mt19937::result_type>(std::time(nullptr)) };
    
    std::uniform_int_distribution die{ 1, 6 };
    
    for (int count{ 1 }; count <= 100; count++) {
        std::cout << die(mersenne) << '\t';
        if (count % 5 == 0)
            std::cout << '\n';
    }
    
    return 0;
}
