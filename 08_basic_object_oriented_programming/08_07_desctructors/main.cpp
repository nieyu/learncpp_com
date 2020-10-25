//
//  main.cpp
//  08_07_desctructors
//
//  Created by txc-ios on 2020/10/23.
//

#include <iostream>
#include <cassert>
#include <cstddef>

class IntArray {
private:
    int *m_array{};
    int m_length{};
public:
    IntArray(int length) {
        assert(length > 0);
        m_array = new int[static_cast<std::size_t>(length)];
        m_length = length;
        std::cout << "IntArray is created!\n";
    }
    ~IntArray() {
        std::cout << "IntArray is destroyed!\n";
        delete[] m_array;
    }
    void setValue(int index, int value) { m_array[index] = value; }
    int getValue(int index) { return m_array[index]; }
    int getLength() { return m_length; }
};

int main(int argc, const char * argv[]) {
    
    IntArray arr(3);
    for (int index{ 0 }; index < arr.getLength(); ++index) {
        arr.setValue(index, index);
    }
    
    std::cout << "arr index 5 value is " << arr.getValue(5) << '\n';
    
    
    return 0;
}
