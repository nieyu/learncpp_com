//
//  main.cpp
//  08_03_public_vs_private_access_specifiers_02
//
//  Created by txc-ios on 2020/10/23.
//

#include <iostream>
#include <array>

class Stack {
private:
    using container_type = std::array<int, 10>;
    using size_type = container_type::size_type;
    
    container_type m_array;
    size_type m_next{ 0 };
    
public:
    void reset() {
        m_array.empty();
        m_next = 0;
    }
    
    void print() {
        
    }
    
    bool push(int value) {
        if (m_next == m_array.size()) {
            return false;
        }
        m_array[m_next++] = value;
        return true;
    }
    
    int pop() {
        assert(m_next > 0 && "Can not pop empty stack");
        return m_array[--m_next];
    }
};

int main(int argc, const char * argv[]) {
    
    
    
    return 0;
}
