// Copyright (c) 2022 Immaculata HS All rights reserved.
//
// Created by: Marcus Wehbi
// Created on: Oct 2022
// This program asks the user to enter an integer
// It then displays if the number is positive, negative, or 0

#include <iomanip>
#include <iostream>

int main() {
    // declare variable for the users selected integer
    int userNum;
    // get the users chosen integer
    std::cout << "Choose an integer: ";
    std::cin >> userNum;

    // check if the user selected a positive number, negative number, or 0
    if (userNum > 0) {
        // Display number as positive
        std::cout << "You entered a positive number.";
    } else if (userNum < 0) {
        // Display number as negative
        std::cout << "You entered a negative number.";
    } else {
        std::cout << "You entered 0.";
    }
}
