//
//  main.cpp
//  06_15_an_introduction_to_std__array
//
//  Created by txc-ios on 2020/10/16.
//

#include <iostream>
#include <array>

struct House {
    int number{};
    int stories{};
    int roomsPerStory{};
};

int main(int argc, const char * argv[]) {
    
    std::array<int, 3> myArray;
    
//    myArray.at(4) = 12;
    
    std::cout << myArray.size() << '\n';
    
    std::array arr{ 1, 3, 5 ,7 ,9 };
    for (std::size_t index{ 0 }; index < arr.size(); ++index) {
        std::cout << arr[index] << ' ';
    }
    std::cout << '\n';
    
    std::array<House, 3> house_arr{};
    house_arr[0] = { 13, 4, 30 };
    house_arr[1] = { 14, 5, 30 };
    house_arr[2] = { 15, 6, 30 };
    
    
    return 0;
}
