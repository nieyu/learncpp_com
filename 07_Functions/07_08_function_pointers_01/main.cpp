//
//  main.cpp
//  07_08_function_pointers_01
//
//  Created by txc-ios on 2020/9/30.
//

#include <iostream>
#include <utility>

bool ascending(int x, int y) {
    return x > y;
}

bool descending(int x, int y) {
    return x < y;
}

void SelectorSort(int *array, int size) {
    
    for (int startIndex{ 0 }; startIndex < (size - 1); ++startIndex) {
        int smallestIndex{ startIndex };
        for (int currentIndex{ startIndex + 1 }; currentIndex < size; ++currentIndex) {
//            if () {
//
//            }
        }
    }
    
}

void printArray(int *array, int size) {
    for (int index{ 0 }; index < size; ++index) {
        std::cout << array[index] << ' ';
    }
    std::cout << '\n';
}

int main(int argc, const char * argv[]) {
    
    int array[9]{ 3, 4, 5, 6, 7, 9, 2, 1, 12};
    
//    printArray(array, )
    
    return 0;
}
