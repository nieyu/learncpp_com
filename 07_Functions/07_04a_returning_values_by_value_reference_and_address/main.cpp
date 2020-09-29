//
//  main.cpp
//  07_04a_returning_values_by_value_reference_and_address
//
//  Created by txc-ios on 2020/9/28.
//

#include <iostream>
#include <array>


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

//int& doubleValueRef(int x) {
//    int value{ x * 2};
//    return value;
//}

int& getElement(std::array<int, 25> &array, int index) {
    return array[index];
}

int* allocateArray(int size) {
    return new int[size];
}

//int& doubleValueByReference(int x) {
//    int value { x * 2 };
//    return value;
//}

int returnByValue() {
    return 5;
}

int& returnByReference() {
    static int x{ 5 };
    return x;
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
    
    
//    y = doubleValueRef(x);
//    std::cout << "x = " << x << '\n';
//    std::cout << "y = " << y << '\n';
    
//    int *array{ allocateArray(20) };
//    int length{ sizeof(array) / sizeof(int) };
//    std::cout << array << " " << length << '\n';
//    delete [] array;
//    std::cout << array << " " << sizeof(array) << '\n';
    
    std::array<int, 25> array;
    getElement(array, 10) = 5;
    
    std::cout << array[10] << '\n';
    
    int giana{ returnByValue() };
    
    const int& cref{ returnByValue() };
    const int& crr{ returnByReference() };
    
    
    
    return 0;
}

/**
 when to use return by address:
 
 When returning dynamically allocated memory and you can’t use a type that handles allocations for you
 When returning function arguments that were passed by address
 
 When not to use return by address:
 
 When returning variables that were declared inside the function or parameters that were passed by value (use return by value)
 When returning a large struct or class that was passed by reference (use return by reference)
 
 
 
 */
