//
//  main.cpp
//  06_16_introduction_to_std_vector
//
//  Created by nie yu on 2020/10/17.
//

#include <iostream>
#include <vector>

int main(int argc, const char * argv[]) {
    
    std::vector<int> arr{ 1, 3, 5, 7, 9 };
    
//    arr[5] = 6;
//    std::cout << arr[5] << '\n';
    
    
    
    arr.resize(6);
    arr.at(5) = 6;
    std::cout << arr.at(5) << '\n';
    
    arr.resize(3);
    std::cout << arr[4] << '\n';
    
    
    
    return 0;
}
