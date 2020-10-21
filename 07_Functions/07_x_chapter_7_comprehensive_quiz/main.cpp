//
//  main.cpp
//  07_x_chapter_7_comprehensive_quiz
//
//  Created by txc-ios on 2020/10/21.
//

#include <iostream>
#include <array>
#include <string_view>
#include <functional>

static int count{ 0 };

void normalSort(int *arr, int length) {
    count = 0;
    std::cout << "a\n";
    for (int i{ 0 }; i < length - 1; ++i) {
        for (int j { i }; j < length; j++) {
            ++count;
            if (arr[j] > arr[j + 1]) {
//                ++count;
//                std::cout << "a\n";
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }
    std::cout << "normal sort count : " << count << '\n';
}

void bubbleSort() {
    
}

void fastSort() {
    
}

void printArr(int *arr, int length) {
    for (int index{ 0 }; index < length; ++index) {
        std::cout << arr[index] << ' ';
    }
    std::cout << '\n';
}

int main(int argc, const char * argv[]) {
    
    int arr[9]{ 3, 6, 7, 9, 12, 15, 18, 21, 24 };
    
    normalSort(arr, 9);
    printArr(arr, 9);
    
    return 0;
}
