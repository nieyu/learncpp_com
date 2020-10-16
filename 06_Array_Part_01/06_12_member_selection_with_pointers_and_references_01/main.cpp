//
//  main.cpp
//  06_12_member_selection_with_pointers_and_references_01
//
//  Created by txc-ios on 2020/10/16.
//

#include <iostream>

struct Paw {
    int claws{};
};

struct Animal {
    std::string name{};
    Paw paw{};
};

int main(int argc, const char * argv[]) {
    
    Animal puma{ "Puma", { 5 } };
    Animal *ptr{ &puma };
    
    std::cout << ptr->paw.claws << '\n';
    
    return 0;
}
