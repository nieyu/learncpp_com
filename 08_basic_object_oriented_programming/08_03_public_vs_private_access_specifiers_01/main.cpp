//
//  main.cpp
//  08_03_public_vs_private_access_specifiers_01
//
//  Created by txc-ios on 2020/10/23.
//

#include <iostream>

class Point3d {
private:
    int m_x;
    int m_y;
    int m_z;
public:
    void setValues(int x, int y, int z) {
        m_x = x;
        m_y = y;
        m_z = z;
    }
    
    void print() {
        std::cout << "<" << m_x << ", " << m_y << ", " << m_z << ">\n";
    }
    
    bool isEqual(const Point3d& point) {
        if (   point.m_x == m_x
            && point.m_y == m_y
            && point.m_z == m_z) {
            return true;
        }
        return false;
    }
};

int main(int argc, const char * argv[]) {
    
    Point3d point;
    point.setValues(1, 2, 3);
    
    point.print();
    std::cout << '\n';
    
    Point3d point1;
    point1.setValues(1, 2, 4);
    
    if (point.isEqual(point1)) {
        std::cout << "point is equal to point1\n";
    } else {
        std::cout << "point is not equal to point1\n";
    }
    
    return 0;
}
