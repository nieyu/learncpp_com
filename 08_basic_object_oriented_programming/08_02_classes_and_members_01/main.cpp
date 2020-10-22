//
//  main.cpp
//  08_02_classes_and_members_01
//
//  Created by txc-ios on 2020/10/22.
//

#include <iostream>

class IntPair {
public:
    int m_x{};
    int m_y{};
    
    void set(int x, int y) {
        m_x = x;
        m_y = x;
    }
    
    void print() {
        std::cout << "Pair(" << m_x << ", " << m_y << ")\n";
    }
};

int main(int argc, const char * argv[]) {
    
    IntPair p1;
    p1.set(1, 1);
    
    IntPair p2;
    p2.set(2, 2);
    
    p1.print();
    p2.print();
    
    return 0;
}
