//
//  main.cpp
//  08_10_const_class_objects_and_member_functions
//
//  Created by nie yu on 2020/10/25.
//

#include <iostream>
#include <string>

class Something {
public:
    int m_value;
    std::string m_str;
    
    Something(): m_value{ 0 } {}
    
    void setValue(int value) {
        m_value = value;
    }
//    int getValue() const { return m_value; }
    const std::string& getValue() const { return m_str; }
    std::string& getValue() { return m_str; }
};

int main(int argc, const char * argv[]) {
    
    Something some;
//    some.m_value = 3;
//    some.setValue(4);
    some.getValue() = "abc";
    std::cout << some.getValue() << '\n';
    
    return 0;
}
