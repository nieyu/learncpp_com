//
//  main.cpp
//  07_03_passing_arguments_by_reference
//
//  Created by txc-ios on 2020/9/28.
//

#include <iostream>
#include <cmath>

void addOne(int &ref) {
    ref = ref + 1;
}

// Returning multiple values via out parameters
void getSinCos(double degress, double &sinOut, double &cosOut) {
    
    static constexpr double pi { 3.14159265358979323846 };
    double radians = degress * pi / 180.0;
    sinOut = std::sin(radians);
    cosOut = std::cos(radians);
}

void foo(std::string &x) {
    x = "jksmith";
}

void fooptr(int *&ptr) {
    ptr = nullptr;
}

void printElements(int (&arr)[4]) {
    
    // we can now do this since the array won't decay
    int length{ sizeof(arr) / sizeof(arr[0])};
    for (int i{0}; i< length; ++i) {
        std::cout << arr[i] << '\n';
    }
}

int main(int argc, const char * argv[]) {
    
    int value { 5 };
    std::cout << value << "\n";
    addOne(value);
    std::cout << value << "\n";
    
    double sin(0.0);
    double cos(0.0);
    
    getSinCos(30.0, sin, cos);
    
    std::cout << "The sin is : " << sin << '\n';
    std::cout << "The cos is : " << cos << '\n';
    
    std::string str{ "abc" };
    std::cout << "The str is : " << str << '\n';
    foo(str);
    std::cout << "The str is : " << str << '\n';
    
    int x = 5;
    int *ptr = &x;
    std::cout << "ptr is: " << (ptr ? "non-null" : "null") << '\n';
    fooptr(ptr);
    std::cout << "ptr is: " << (ptr ? "non-null" : "null") << '\n';
    
    int arr[]{ 99, 87, 42, 13};
    printElements(arr);
    
    return 0;
}

/**
 Advantages of passing by reference:
 
 References allow a function to change the value of the argument, which is sometimes useful. Otherwise, const references can be used to guarantee the function won’t change the argument.
 Because a copy of the argument is not made, pass by reference is fast, even when used with large structs or classes.
 References can be used to return multiple values from a function (via out parameters).
 References must be initialized, so there’s no worry about null values.
 Disadvantages of passing by reference:
 
 Because a non-const reference cannot be initialized with a const l-value or an r-value (e.g. a literal or an expression), arguments to non-const reference parameters must be normal variables.
 It can be hard to tell whether an argument passed by non-const reference is meant to be input, output, or both. Judicious use of const and a naming suffix for out variables can help.
 It’s impossible to tell from the function call whether the argument may change. An argument passed by value and passed by reference looks the same. We can only tell whether an argument is passed by value or reference by looking at the function declaration. This can lead to situations where the programmer does not realize a function will change the value of the argument.
 
 
 When to use pass by reference:
 
 When passing structs or classes (use const if read-only).
 When you need the function to modify an argument.
 When you need access to the type information of a fixed array.
 When not to use pass by reference:
 
 When passing fundamental types that don’t need to be modified (use pass by value).
 
 Rule
 
 Use pass by (const) reference instead of pass by value for structs and classes and other expensive-to-copy types.
 
 */
