//
//  main.cpp
//  08_05a_constructor_member_initializer_lists
//
//  Created by txc-ios on 2020/10/23.
//

#include <iostream>

class Something {
private:
    int m_value1;
    double m_value2;
    char m_value3;
public:
    Something(int value1, double value2, char value3 = 'c')
    : m_value1{ value1 }, m_value2{ value2 }, m_value3{ value3 } {
        
    }
    
    void print() {
        std::cout << "Something(" << m_value1 << ", " << m_value2 << ", " << m_value3 << ")\n";
    }
};

class RGBA {
public:
    using component_type = std::uint_fast8_t;
private:
    component_type m_red;
    component_type m_green;
    component_type m_blue;
    component_type m_alpha;
public:
    RGBA(component_type red     = 0,
         component_type green   = 0,
         component_type blue    = 0,
         component_type alpha   = 255)
    :
    m_red   { red },
    m_green { green },
    m_blue  { blue },
    m_alpha { alpha } {}
    
    void print() {
        std::cout
            << "r="  << static_cast<int>(m_red)
            << " g=" << static_cast<int>(m_green)
            << " b=" << static_cast<int>(m_blue)
            << " a=" << static_cast<int>(m_alpha)
            << '\n';
    }
    
};

int main(int argc, const char * argv[]) {
    
    Something something{ 1, 2.2 };
    something.print();
    
    RGBA teal{ 0, 127, 127, 1 };
    teal.print();
    
    return 0;
}
