/*
* @file AnalogSensor.cpp
* @author Vasista Ayyagari
* @copyright Vasista Ayyagari, 2020
* @brief gives the function definitions of the class AnalogSensor
*/
#include <AnalogSensor.hpp>
#include <numeric>
#include <vector>

/*
* @brief class constructor for Analog Sensor
* @param samples: sets the mSamples to sample
* @return None
*/
AnalogSensor::AnalogSensor(unsigned int samples)
    : mSamples(samples) {
}


/*
* @brief class destructor for Analog Sensor
* @param None
* @return None
*/
AnalogSensor::~AnalogSensor() {
}

/*
* @brief funtion to read from the sensor values
* @param None
* @return the average of the accumulated readings
*/
int AnalogSensor::Read() {
    std::vector<int> *readings = new std::vector<int>(mSamples, 10);

    double result = std::accumulate(readings->begin(), readings->end(), 0.0 )
    /readings->size();

    delete readings;
    return result;
}


