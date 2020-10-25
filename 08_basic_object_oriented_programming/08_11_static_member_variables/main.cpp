//
//  main.cpp
//  08_11_static_member_variables
//
//  Created by nie yu on 2020/10/25.
//

#include <iostream>

class Something {
private:
    static int s_idGenerator;
    int m_id;
public:
    
    Something() {
        m_id = s_idGenerator++;
    }
    int getId() const {
        return m_id;
    }
};
 
int Something::s_idGenerator = 1;

int main(int argc, const char * argv[]) {
    
    Something first;
    Something second;
    Something third;
    std::cout << first.getId() << '\n';
    std::cout << second.getId() << '\n';
    std::cout << third.getId() << '\n';
    
    
    return 0;
}
