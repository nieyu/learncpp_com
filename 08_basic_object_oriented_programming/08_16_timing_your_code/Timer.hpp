//
//  Timer.hpp
//  08_16_timing_your_code
//
//  Created by nie yu on 2020/11/1.
//

#ifndef Timer_hpp
#define Timer_hpp

#include <stdio.h>
#include <chrono>

class Timer {
private:
    using clock_t = std::chrono::high_resolution_clock;
    using second_t = std::chrono::duration<double, std::ratio<1>>;
    
    std::chrono::time_point<clock_t> m_beg;
    
public:
    Timer(): m_beg{ clock_t::now() } {}
    void reset();
    double elapsed() const;
};

#endif /* Timer_hpp */
