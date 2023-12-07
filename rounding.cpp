// Copyright (c) 2023 Lily Carroll All rights reserved.
//
// Created by: Lily Carroll
// Created on: Dec/6/2023
// This program gets a decimal from the user
// along with how many decimal places they
// would like to round to and rounds their
// number accordingly.
#include<iostream>
#include<cmath>
#include<string>

// Using roundDecimal function to round decimal.
void RoundDecimal(float &decNum, int &decPlaces) {
    // Calculating rounded number.
    decNum = decNum * (pow(10, decPlaces));
    decNum += 0.5;
    // Casting the number to an integer to remove the decimals.
    decNum = static_cast<int>(decNum);
    decNum = decNum / (pow(10, decPlaces));
    }
int main() {
    // Declaring variables.
    std::string decNumAsString, decPlacesAsString;

    // Explaining my program to the user.
    std::cout << "This program will round your decimal to";
    std::cout << " the number of decimal places of your choice.\n ";

    // Getting user input.
    std::cout
        << "Enter a decimal number: ";
    std::cin >> decNumAsString;
    std::cout << "Enter a number of decimal places: ";
    std::cin >> decPlacesAsString;

    // Using a try catch to catch errors.
    try {
        // Converting the decimal entered from a string to a float.
        // Converting the number of decimal places to round to as an integer.
        float decNumAsFloat = std::stof(decNumAsString);
        int decPlacesAsInt = std::stoi(decPlacesAsString);

        // Using an if statement to check if
        // the number entered for decimal places is negative.
        if (decNumAsFloat < 0 || decPlacesAsInt < 0) {
            std::cout <<
            "This is a negative integer. Please use positive integers only.";

        // Else the integer of decimal places is greater than 0.
        } else {
            // Calling function RoundDecimal().
            RoundDecimal(decNumAsFloat, decPlacesAsInt);

            // Printing the rounded number.
            std::cout << "Your rounded number is " << decNumAsFloat;
        }
    // Catching errors.
    } catch (std::invalid_argument) {
        std::cout << "Invalid input. Please try again.";
        }
    }
