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

void selectionSort(int *array, int size) {
    
    for (int startIndex{ 0 }; startIndex < (size - 1); ++startIndex) {
        int smallestIndex{ startIndex };
        for (int currentIndex{ startIndex + 1 }; currentIndex < size; ++currentIndex) {
            if (array[smallestIndex] > array[currentIndex]) {
                smallestIndex = currentIndex;
            }
        }
        std::swap(array[startIndex], array[smallestIndex]);
    }
    
}

void selectorSort(int *array, int size, bool(*compareFunc)(int, int) = ascending) {
    
    for (int startIndex{ 0 }; startIndex < (size - 1); ++startIndex) {
        int bestIndex{ startIndex };
        for (int currentIndex{ startIndex }; currentIndex < size; ++currentIndex) {
            if (compareFunc(array[bestIndex], array[currentIndex])) {
                bestIndex = currentIndex;
            }
        }
        std::swap(array[startIndex], array[bestIndex]);
    }
    
}

void printArray(int *array, int size) {
    for (int index{ 0 }; index < size; ++index) {
        std::cout << array[index] << ' ';
    }
    std::cout << '\n';
}

using ValidateFunc = bool(*)(int, int);

void selectorSortNew(int *array, int size, ValidateFunc validateFunc) {
    
    
    
}

int main(int argc, const char * argv[]) {
    
    int array[9]{ 3, 4, 5, 6, 7, 9, 2, 1, 12};
    selectionSort(array, 9);
    printArray(array, 9);
    
    selectorSort(array, 9);
    printArray(array, 9);
    selectorSort(array, 9, descending);
    printArray(array, 9);
    
    return 0;
}
