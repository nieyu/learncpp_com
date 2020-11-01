//
//  Timer.cpp
//  08_16_timing_your_code
//
//  Created by nie yu on 2020/11/1.
//

#include "Timer.hpp"

void Timer::reset() {
    m_beg = clock_t::now();
}

double Timer::elapsed() const {
    return std::chrono::duration_cast<second_t>(clock_t::now() - m_beg).count();
}
