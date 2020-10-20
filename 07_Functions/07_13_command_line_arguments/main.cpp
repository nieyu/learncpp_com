//
//  main.cpp
//  07_13_command_line_arguments
//
//  Created by txc-ios on 2020/10/20.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    
    std::cout << "There ar " << argc << " arguments: \n";
    
    for (int count{ 0 } ; count < argc; ++count) {
        std::cout << count << ' ' << argv[count] << '\n';
    }
    
    return 0;
}
