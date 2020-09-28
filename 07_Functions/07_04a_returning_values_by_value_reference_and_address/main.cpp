//
//  main.cpp
//  07_04a_returning_values_by_value_reference_and_address
//
//  Created by txc-ios on 2020/9/28.
//

#include <iostream>


/// return by value
/// @param x
int doubleValue(int x) {
    int value{ x * 2 };
    return value;
}

int* doubleValuePtr(int x) {
    int value{ x * 2 };
    return &value;
}

int& doubleValueRef(int x) {
    int value{ x * 2};
    return value;
}

int* allocateArray(int size) {
    return new int[size];
}

int main(int argc, const char * argv[]) {
    int x{ 3 };
    int y{ 0 };
    y = doubleValue(x);
    std::cout << "x = " << x << '\n';
    std::cout << "y = " << y << '\n';
    
//    y = doubleValuePtr(x);
//    std::cout << "x = " << x << '\n';
//    std::cout << "y = " << y << '\n';
    
    
    y = doubleValueRef(x);
    std::cout << "x = " << x << '\n';
    std::cout << "y = " << y << '\n';
    
    int *array{ allocateArray(20) };
    int length{ sizeof(array) / sizeof(int) };
    std::cout << array << " " << length << '\n';
    delete [] array;
    std::cout << array << " " << sizeof(array) << '\n';
    
    return 0;
}
