//
//  main.cpp
//  08_13_friend_functions_and_classes
//
//  Created by nie yu on 2020/10/25.
//

#include <iostream>

class Accumulator {
private:
    int m_value;
public:
    Accumulator() { m_value = 0; }
    void add(int value) { m_value += value; };
    
    friend void reset(Accumulator& accumulator);
};

void reset(Accumulator& accumulator) {
    accumulator.m_value = 0;
}

class Value{
private:
    int m_value;
public:
    Value(int value): m_value{ value } {}
    friend bool isEqual(const Value& value1, const Value& value2);
};

bool isEqual(const Value& value1, const Value& value2) {
    return (value1.m_value == value2.m_value);
}

class Humidity;

class Temperature {
private:
    int m_temp;
public:
    Temperature(int temp): m_temp{ temp } {}
    friend void print(const Temperature& temperature, const Humidity& humidity);
};

class Humidity {
private:
    int m_humidity;
public:
    
    Humidity(int humidity): m_humidity{ humidity } {}
    
    friend void print(const Temperature& temperature,
                      const Humidity& humidity);
};

void print(const Temperature& temperature,
           const Humidity& humidity) {
    std::cout << "Temp: "
            << temperature.m_temp
            << " Humi: "
            << humidity.m_humidity
            << '\n';
}

int main(int argc, const char * argv[]) {
    
    Accumulator acc;
    acc.add(5);
    reset(acc);
    
    Temperature temp{ 20 };
    Humidity humi{ 40 };
    print(temp, humi);
    
    return 0;
}
