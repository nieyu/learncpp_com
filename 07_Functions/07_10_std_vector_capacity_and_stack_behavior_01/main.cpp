//
//  main.cpp
//  07_10_std_vector_capacity_and_stack_behavior_01
//
//  Created by txc-ios on 2020/10/19.
//

#include <iostream>
#include <vector>

void printStack(const std::vector<int> &stack) {
    for (int i: stack) {
        std::cout << i << ' ';
    }
    std::cout << "(cap " << stack.capacity() << " length: " << stack.size() << ")\n";
}

int main(int argc, const char * argv[]) {
    
    std::vector<int> stack{};
    printStack(stack);
    
    stack.push_back(3);
    printStack(stack);
    
    stack.push_back(4);
    printStack(stack);
    
    stack.push_back(5);
    printStack(stack);
    
    stack.push_back(6);
    printStack(stack);
    
    std::cout << stack.back() << '\n';
    
    stack.pop_back();
    printStack(stack);
    
    stack.pop_back();
    printStack(stack);
    
    return 0;
}
