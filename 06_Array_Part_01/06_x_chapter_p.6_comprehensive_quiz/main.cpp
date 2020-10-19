//
//  main.cpp
//  06_x_chapter_p.6_comprehensive_quiz
//
//  Created by txc-ios on 2020/10/19.
//

#include <iostream>
#include <array>
#include <ctime>
#include <iostream>
#include <numeric>
#include <random>

int main(int argc, const char * argv[]) {
    
    std::array arr{ 1, 2, 3, 4 };
    
    std::cout << std::reduce(arr.begin(), arr.end()) << '\n';
    
    std::cout << std::accumulate(arr.begin(), arr.end(), 0) << '\n';
    
    std::mt19937 mt{ static_cast<std::mt19937::result_type>(std::time(nullptr)) };
    std::shuffle(arr.begin(), arr.end(), mt);
    
    for (int i : arr) {
        std::cout << i << ' ';
    }
    std::cout << '\n';
    
    return 0;
}
