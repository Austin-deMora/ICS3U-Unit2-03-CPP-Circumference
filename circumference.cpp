// This program calculates the circumference of a cicle


// Copyright (c) 2021 Austin de Mora All rights reserved
//
// Created by: Austin de Mora
// Created on: April 2021

#include <iostream>

int main() {
    // This function calculates circumference of a circle
    constexpr double TAU = 6.28;
    int radius;
    double circumference;

    // Input
    std::cout << "Enter radius of the circle (mm): ";
    std::cin >> radius;

    // process
    circumference = TAU*radius;

    // Output
    std::cout << "" << std::endl;
    std::cout << "Circumference is " << circumference << "mm" << std::endl;
}