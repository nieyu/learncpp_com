//
//  main.cpp
//  06_04_sorting_an_array_using_selection_sort
//
//  Created by txc-ios on 2020/10/13.
//

#include <iostream>

void printArray(const int arr[], const int len) {
    for (int i{ 0 }; i < len; ++i) {
        std::cout << arr[i] << ' ';
    }
    std::cout << '\n';
}

int main(int argc, const char * argv[]) {
    
//    int array[]{ 30, 50, 20, 10, 40 };
    int array[]{ 6, 3, 2, 9, 7, 1, 5, 4, 8};
    constexpr int length{ static_cast<int>(sizeof(array)/sizeof(array[0])) };
    printArray(array, length);
    
    
    for (int startIndex{ 0 }; startIndex < length - 1; ++startIndex) {
        int smallestIndex{ startIndex };

        for (int currentIndex{ startIndex + 1 }; currentIndex < length; ++currentIndex) {
            if (array[startIndex] > array[currentIndex]) {
                smallestIndex = currentIndex;
            }
        }
        std::swap(array[startIndex], array[smallestIndex]);
        printArray(array, length);
    }
    
//    std::sort(std::begin(array), std::end(array));
//    printArray(array, 5);
    
    return 0;
}
