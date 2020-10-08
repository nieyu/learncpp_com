//
//  main.cpp
//  s_04_07_structs
//
//  Created by txc-ios on 2020/10/8.
//

#include <iostream>

struct Employee {
    short id;
    int age;
    double wage;
    
//    void print() {
//        std::cout << "id: " << id << " age: " << age << " wage: " << wage << '\n';
//    }
};



struct Rectangle {
    double width{ 1.0 };
    double height{ 1.0 };
};

struct X {
    char a;         //1
    float f;        //4
    double d;       //8
    bool b;         //1
};

int main(int argc, const char * argv[]) {
    
    Employee joe{ 1, 18, 60000.0 };
//    std::cout << "id: " << joe.id << " age: " << joe.age << " wage: " << joe.wage << '\n';
//    joe.print();
    
    Rectangle x{ 2.0, 2.0 };
    std::cout << "Rectangle height: " << x.height << " width: " << x.width << '\n';
    
    std::cout << "joe " << sizeof(joe) << '\n';
    std::cout << "double " << sizeof(double) << '\n';
    std::cout << "short " << sizeof(short) << '\n';
    std::cout << "int " << sizeof(int) << '\n';
    std::cout << "char " << sizeof(char) << '\n';
    std::cout << "float " << sizeof(float) << '\n';
    std::cout << "bool " << sizeof(bool) << '\n';
    
    X ss{ 'a', 0.2f, 0.3, false };
    std::cout << "x size " << sizeof(ss) << '\n';
    return 0;
}
