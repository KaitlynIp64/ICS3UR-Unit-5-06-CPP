// Copyright (c) 2023 Kaitlyn Ip
//
// Created by: Kaitlyn Ip
// Created on: Jan 2023
// This program rounds a number

#include <cmath>
#include <iostream>
#include <string>

float roundNumber(float &decimalNum, int decimalPlaces) {
    // This function rounds off numbers
    float roundedOff;
    int tempInt;

    // pow() is a power function
    roundedOff = decimalNum * pow(10, decimalPlaces);
    roundedOff = (roundedOff + 0.5);
    // static_cast converts ints and floats
    roundedOff = static_cast<int>(roundedOff);
    roundedOff = roundedOff / pow(10, decimalPlaces);

    decimalNum = roundedOff;

    return decimalNum;
}

int main() {
    std::string userNumStr;
    std::string decimalPlacesStr;
    int decimalPlaces;
    float userNum;
    float roundedNum;

    std::cout << "Enter a decimal: ";
    std::cin >> userNumStr;
    std::cout << "Enter desired decimal places to round to: ";
    std::cin >> decimalPlacesStr;

    try {
        userNum = std::stof(userNumStr);
        decimalPlaces = std::stoi(decimalPlacesStr);

        // calls function
        roundNumber(userNum, decimalPlaces);

        std::cout << "Rounded number: " << userNum << std::endl;
    } catch (std::invalid_argument) {
        std::cout << "That is not a valid input." << std::endl;
    }

    std::cout << "\nDone." << std::endl;
}
