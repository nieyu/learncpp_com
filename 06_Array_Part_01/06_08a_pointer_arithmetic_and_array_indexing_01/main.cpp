//
//  main.cpp
//  06_08a_pointer_arithmetic_and_array_indexing_01
//
//  Created by txc-ios on 2020/10/14.
//

#include <iostream>
#include <iterator>

int* find(int* startIndex, int* endIndex, int target) {
    for (; startIndex < endIndex; ++startIndex) {
        if (*startIndex == target) {
            return startIndex;
        }
    }
    return nullptr;
}

int main(int argc, const char * argv[]) {
    
    int arr[] { 2, 5, 4, 10, 8, 20, 16, 40 };
    int *found{ find(std::begin(arr), std::end(arr), 20) };
    
    if (found != std::end(arr)) {
        std::cout << *found << '\n';
        std::cout << arr << '\n';
        std::cout << found << '\n';
        std::cout << found - arr << '\n';
    } else {
        std::cout << "没有制定数字呀";
    }
    
    return 0;
}
