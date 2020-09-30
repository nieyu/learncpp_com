//
//  main.cpp
//  ===-=
//
//  Created by nie yu on 2020/9/29.
//

#include <iostream>

int add(int x, int y) {
    return x + y;
}

double add(double x, double y) {
    return x + y;
}

int add(int x, int y, int z) {
    return x + y + z;
}

//void print(char *value) {
//    std::cout << *value << '\n';
//}
//
//void print(int value) {
//    std::cout << value << '\n';
//}

void print(float value) {
    std::cout << value << '\n';
}

void print(unsigned int x) {
    std::cout << x << '\n';
}

void fcn(char c, int x) {
    std::cout << 'a';
}

void fcn(char c, double x) {
    std::cout << 'a';
}

void fcn(char c, float x) {
    std::cout << 'a';
}

int main(int argc, const char * argv[]) {
    
    int a{ 2 }, b{ 3 }, c{ 4 };
    double x{ 1.2 }, y { 3.4 }, z{ 5.6 };
    int d { add(a, b, c) };
    double x1{ add(x, y) };
    std::cout << "a + b + c = " << d << '\n';
    std::cout << "x + y = " << x1 << '\n';
    
//    print('a');
    
    int x2 = 0;
    print(static_cast<unsigned int>(x2));
    
    //If your argument is a literal, you can use the literal suffix to ensure your literal is interpreted as the correct type:
    print(-1u);
    
    fcn('x', 4);
    std::cout << '\n';
    
    
    return 0;
}
