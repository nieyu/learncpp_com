//
//  main.cpp
//  06_04_sorting_an_array_bubble_01
//
//  Created by txc-ios on 2020/10/13.
//

#include <iostream>

void printArray(const int array[], const int len) {
    for (int i{ 0 }; i < len; ++i) {
        std::cout << array[i] << ' ';
    }
    std::cout << '\n';
}



int main(int argc, const char * argv[]) {
    
    int array[]{ 6, 3, 2, 9, 7, 1, 5, 4, 8};
    constexpr int len{ static_cast<int>(sizeof(array)/sizeof(array[0]))};
    
    for (int startIndex{ 0 }; startIndex < len - 1; ++startIndex) {
        for (int currentIndex{ 0 }; currentIndex < len - startIndex; ++currentIndex) {
            if (array[currentIndex] > array[currentIndex + 1]) {
                std::swap(array[currentIndex], array[currentIndex + 1]);
                printArray(array, len);
            }
        }
        std::cout << "-----------------\n";
    }
    
    return 0;
}
