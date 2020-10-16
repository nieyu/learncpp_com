//
//  main.cpp
//  06_12_member_selection_with_pointers_and_references
//
//  Created by txc-ios on 2020/10/16.
//

#include <iostream>

struct Person {
    int age{};
    double weight{};
};

void printPerson(const Person& p) {
    std::cout << "age: " << p.age << " weight: " << p.weight << '\n';
    std::cout << "--------------\n";
}

int main(int argc, const char * argv[]) {
    
    Person person{};
    
    Person &ref{ person };
    ref.age = 12;
    ref.weight = 15.2;
    
    printPerson(person);
    
    Person *ptr = &ref;
    ptr->age = 13;
    ptr->weight = 16.3;
    printPerson(person);
    
    (*ptr).age = 14;
    (*ptr).weight = 17.4;
    printPerson(person);
    
    printPerson(ref);
    printPerson(*ptr);
    
    return 0;
}
