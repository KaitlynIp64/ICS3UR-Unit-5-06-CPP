// Copyright (c) 2023 Kaitlyn Ip
//
// Created by: Kaitlyn Ip
// Created on: Jan 2023
// This program rounds a number

#include <cmath>
#include <iostream>
#include <string>

float decimalConverter(float &decimal, int &decimalPlaces) {
    // Converts a string to hex values
    decimal = decimal * pow(10.0, decimalPlaces) + 0.5;
    decimal = trunc(decimal);
    decimal = decimal / pow(10.0, decimalPlaces);
}

int main() {
    // Gets the string and prints the full hex value

    std::string strDecimal;
    std::string strDecimalPlaces;
    float decimal;
    int decimalPlaces;

    std::cout << "Enter a decimal: ";
    std::cin >> strDecimal;
    std::cout << "Enter desired decimal places you want to round to: ";
    std::cin >> strDecimalPlaces;

    try {
        decimal = std::stof(strDecimal);
        decimalPlaces = std::stoi(strDecimalPlaces);

        // call functions
        decimalConverter(decimal, decimalPlaces);

        std::cout << "Rounded number: " << decimal << "." << std::endl;
    } catch (std::invalid_argument) {
        std::cout << "That is not a valid input.";
    }

    std::cout << std::endl;
    std::cout << "\nDone." << std::endl;
}
