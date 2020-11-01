//
//  main.cpp
//  08_16_timing_your_code
//
//  Created by nie yu on 2020/11/1.
//

#include <iostream>
#include <array>
#include <cstddef>
#include <numeric>
#include <algorithm>

#include "Timer.hpp"


const int g_arrayElements = 10000;

void sortArray(std::array<int, g_arrayElements>& array) {
    
    for (std::size_t startIndex{ 0 }; startIndex < (g_arrayElements - 1); ++startIndex) {
        
        std::size_t smallestIndex{ startIndex };
        for (std::size_t currentIndex{ startIndex + 1}; currentIndex < g_arrayElements; ++currentIndex) {
            if (array[currentIndex] < array[smallestIndex]) {
                smallestIndex = currentIndex;
            }
        }
        std::swap(array[startIndex], array[smallestIndex]);
    }
}

int main(int argc, const char * argv[]) {
    
    Timer t;
    
    long sum{ 0 };
    for (int i{ 0 }; i < 1000000000; ++i) {
        sum += i;
    }
    std::cout << "1 + 2 + 3 + ... + 10000 = " << sum << '\n';
    
    std::cout << t.elapsed() << '\n';
    
    std::array<int, g_arrayElements> array;
    std::iota(array.rbegin(), array.rend(), 1);
    t.reset();
//    sortArray(array);
    std::sort(array.begin(), array.end());
    std::cout << t.elapsed() << '\n';
    
    
    return 0;
}

//4999999950000000
//499999999500000000
