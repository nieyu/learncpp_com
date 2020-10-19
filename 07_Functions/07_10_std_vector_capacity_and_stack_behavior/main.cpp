//
//  main.cpp
//  07_10_std_vector_capacity_and_stack_behavior
//
//  Created by txc-ios on 2020/10/19.
//

#include <iostream>
#include <vector>

int main(int argc, const char * argv[]) {
    
    std::vector<int> arr{ 0, 1, 2 };
    
    for (int i : arr) {
        std::cout << i << ' ';
    }
    std::cout << '\n';
    
    arr.resize(5);
    
    for (int i : arr) {
        std::cout << i << ' ';
    }
    std::cout << '\n';
    arr = { 0, 1, 2 };
    std::cout << arr[4] << '\n';
    
    
    return 0;
}
