// Copyright (c) 2021 Caylee Annett All rights reserved
//
// Created by Caylee Annett
// Created on May 2021
// This program squares integers from 0 to the user's input and use a for loop

#include <iostream>
#include <string>
#include <cmath>

int main() {
    // This function multiplies the numbers
    std::string numberAsString;
    int numberAsInteger;
    int loopCounter = 0;
    int answer;

    // Input
    std::cout << "This program calculates the squares from 0 to the "
        "integer you enter." << std::endl;
    std::cout << "Enter a positive integer: ";
    std::cin >> numberAsString;
    std::cout << "" << std::endl;

    // Process & Output
    try {
        numberAsInteger = std::stoi(numberAsString);

        if (numberAsInteger >= 0) {
            for (loopCounter = 0; loopCounter <= numberAsInteger;
                loopCounter++) {
                answer = pow(loopCounter, 2);
                std::cout << loopCounter << "² = " << answer << std::endl;
            }
        } else {
            std::cout << numberAsInteger << " is not a positive integer."
                <<std::endl;
        }
    } catch (std::invalid_argument) {
            std::cout << numberAsString << " is not a valid input." <<std::endl;
    }
    std::cout << "" << std::endl;
    std::cout << "Done." << std::endl;
}
