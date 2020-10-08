//
//  main.cpp
//  05_01_control_flow_introduction
//
//  Created by txc-ios on 2020/10/8.
//

#include <iostream>
#include <cstdlib>

void cleanup() {
    std::cout << "clean up action" << '\n';
}

int main(int argc, const char * argv[]) {
    
    std::cout << 1 << '\n';
    cleanup();
    
    std::exit(0);
    
    std::cout << 2 << '\n';
    
    return 0;
}
