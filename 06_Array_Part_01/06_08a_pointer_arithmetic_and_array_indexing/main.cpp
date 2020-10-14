//
//  main.cpp
//  06_08a_pointer_arithmetic_and_array_indexing
//
//  Created by txc-ios on 2020/10/14.
//

#include <iostream>
#include <algorithm>
#include <iterator>

bool isVowel(char ch) {
    switch (ch) {
        case 'A':
        case 'a':
        case 'E':
        case 'e':
        case 'I':
        case 'i':
        case 'O':
        case 'o':
        case 'U':
        case 'u':
            return true;
            break;
            
        default:
            return false;
    }
}

int main(int argc, const char * argv[]) {
    
    char name[]{ "Nieyu Chen ruoyan" };
    int length{ sizeof(name) / sizeof(char) };
    int numOfVowel{ 0 };
    
//    for (int index{ 0 }; index < length; ++index) {
//        if (isVowel(name[index])) {
//            numOfVowel++;
//        }
//    }
    
//    for (char *ptr{ name }; ptr < (name + length); ptr++) {
//        if (isVowel(*ptr)) {
//            numOfVowel++;
//        }
//    }
    
    auto numVomels { std::count_if(std::begin(name), std::end(name), isVowel) };
    
    std::cout << "There are " << numOfVowel << " vowels in name\n";
    std::cout << "There are " << numVomels << " vowels in name\n";
    
    int arr[]{ 1, 2, 3 };
    std::cout << 2[arr] << '\n';
    
    return 0;
}
