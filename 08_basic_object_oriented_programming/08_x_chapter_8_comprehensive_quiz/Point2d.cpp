//
//  Point2d.cpp
//  08_x_chapter_8_comprehensive_quiz
//
//  Created by nie yu on 2020/11/1.
//

#include "Point2d.hpp"
#include <iostream>
#include <cmath>

void Point2d::print() const {
    std::cout << "Poind2d(" << m_x << ", " << m_y << ")\n";
}

double Point2d::distanceTo(const Point2d& point) const {
    return std::sqrt((m_x - point.m_x) * (m_x - point.m_x) + (m_y - point.m_y) * (m_y - point.m_y));
}

double distanceFrom(const Point2d& point1, const Point2d point2) {
    return std::sqrt((point1.m_x - point2.m_x) * (point1.m_x - point2.m_x) + (point1.m_y - point2.m_y) * (point1.m_y - point2.m_y));
}
