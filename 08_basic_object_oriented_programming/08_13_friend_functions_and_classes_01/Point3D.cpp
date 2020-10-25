//
//  Point3D.cpp
//  08_13_friend_functions_and_classes_01
//
//  Created by nie yu on 2020/10/26.
//

#include "Point3D.hpp"
#include "Vector3D.hpp"

void Point3D::print() const {
    std::cout << "Point(" << m_x << ", " << m_y << ", " << m_z << ")\n";
}

void Point3D::moveByVector(const Vector3D& vector) {
    m_x += vector.m_x;
    m_y += vector.m_y;
    m_z += vector.m_z;
}
