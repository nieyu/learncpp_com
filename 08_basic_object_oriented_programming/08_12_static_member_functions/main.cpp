//
//  main.cpp
//  08_12_static_member_functions
//
//  Created by nie yu on 2020/10/25.
//

#include <iostream>

class Something {
private:
    static int s_value;
public:
    static int getValue() {
        return s_value;
    }
};

int Something::s_value = 1;

int main(int argc, const char * argv[]) {
    
    std::cout << Something::getValue() << '\n';
    
    return 0;
}
