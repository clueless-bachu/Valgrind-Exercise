/*
* @file AnalogSensor.hpp
* @author Vasista Ayyagari
* @copyright Vasista Ayyagari, 2020
* @brief Declares a class AnalogSensor
*/
#pragma once

#include <iostream>

/*
* @class Analog Sensor
* @brief class declaration of Analog Sensor
* @param None
* @return None
*/
class AnalogSensor {
 public:
    explicit AnalogSensor(unsigned int samples);
    ~AnalogSensor();
    int Read();
 private:
    unsigned int mSamples;
};
