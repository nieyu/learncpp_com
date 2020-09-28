//
//  main.cpp
//  07_04_passing_arguments_by_address_01
//
//  Created by txc-ios on 2020/9/28.
//

#include <iostream>


/// 无法修改原始值
/// @param x 临时变量
int foo1(int x) {
    x = 1;
    return x;
}


/// 可以修改原始值
/// @param x 引用
int foo2(int &x) {
    x = 2;
    return x;
}


/// 可以修改原始值
/// @param x 指针
int foo3(int *x) {
    *x = 3;
    return *x;
}

int main(int argc, const char * argv[]) {
    
    int i = 3;
    int *ptr = &i;
    *ptr = 5;
    std::cout << "i = " << i << '\n';
    
    foo1(i);
    std::cout << "i = " << i << '\n';
    foo2(i);
    std::cout << "i = " << i << '\n';
    foo3(&i);
    std::cout << "i = " << i << '\n';
    

    
    
    return 0;
}

/**
 Pros and cons of pass by address
 
 Advantages of passing by address:
 
 Pass by address allows a function to change the value of the argument, which is sometimes useful. Otherwise, const can be used to guarantee the function won’t change the argument. (However, if you want to do this with a non-pointer, you should use pass by reference instead).
 Because a copy of the argument is not made, it is fast, even when used with large structs or classes.
 We can return multiple values from a function via out parameters.
 Disadvantages of passing by address:
 
 Because literals (excepting C-style string literals) and expressions do not have addresses, pointer arguments must be normal variables.
 All values must be checked to see whether they are null. Trying to dereference a null value will result in a crash. It is easy to forget to do this.
 Because dereferencing a pointer is slower than accessing a value directly, accessing arguments passed by address is slower than accessing arguments passed by value.
 
 When to use pass by address:
 
 When passing built-in arrays (if you’re okay with the fact that they’ll decay into a pointer).
 When passing a pointer and nullptr is a valid argument logically.
 
 
 When not to use pass by address:
 
 When passing a pointer and nullptr is not a valid argument logically (use pass by reference).
 When passing structs or classes (use pass by reference).
 When passing fundamental types (use pass by value).
 As you can see, pass by address and pass by reference have almost identical advantages and disadvantages. Because pass by reference is generally safer than pass by address, pass by reference should be preferred in most cases.
 */
