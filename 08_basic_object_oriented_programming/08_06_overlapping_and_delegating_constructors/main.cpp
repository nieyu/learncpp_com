//
//  main.cpp
//  08_06_overlapping_and_delegating_constructors
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
    
    Rectangle(double width): Rectangle{ 1.0, width } {
        
    }
    
    void print() {
        std::cout << "length: " << m_length << " width: " << m_width << '\n';
    }
    
};

int main(int argc, const char * argv[]) {
    
    
    
    return 0;
}
