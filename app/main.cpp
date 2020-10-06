/*
* @file main.cpp
* @author Vasista Ayyagari
* @copyright Vasista Ayyagari, 2020
* @brief the main function to execute the Analog Sensor
*/
#include <iostream>
#include <AnalogSensor.hpp>

/*
* @brief main function which reads the light sensor and prints the average reading
* @param None
* @return None
*/
int main() {
    AnalogSensor lightSensor(5);
    std::cout << "Averaged sensor reading: " << lightSensor.Read() << std::endl;
    bool terminator = true;
    if (terminator) {
        std::cout << "DONE" << std::endl;
    }
    return 0;
}
