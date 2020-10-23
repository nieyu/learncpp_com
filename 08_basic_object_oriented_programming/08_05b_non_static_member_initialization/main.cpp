//
//  main.cpp
//  08_05b_non_static_member_initialization
//
//  Created by txc-ios on 2020/10/23.
//

#include <iostream>

class Rectangle {
private:
    double m_length{ 1.0 };
    double m_width{ 1.0 };
public:
    Rectangle(double length = 1.0, double width = 1.0)
        : m_length{ length },
          m_width{ width } {
        
    }
    
//    Rectangle(double length): m_length{ length } {
//
//    }
    
    void print() {
        std::cout << "length: " << m_length << " width: " << m_width << '\n';
    }
    
};

int main(int argc, const char * argv[]) {
    
    Rectangle x{ 2.0, 3.0 };
    x.print();
    
    Rectangle y{ 4.0 };
    y.print();
    
    Rectangle z;
    z.print();
    
    return 0;
}
