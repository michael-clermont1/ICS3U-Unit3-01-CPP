// Copyright (c) 2022 Michael Clermont All rights reserved
//
// Created by: Michael Clermont
// Created on: Feb 2022
// This program calculates the price of a pizza
//    with diameter inputted by the user and HST

#include <iostream>
#include <iomanip>

int main() {
    // this function calculates the area and perimeter inputted by user
    int first;
    int second;
    int total;

    // input
    std::cout << "Enter first number to add (integer): ";
    std::cin >> first;
    std::cout << "Enter second number to add (integer): ";
    std::cin >> second;

    // process
    total = first + second;

    // output
    std::cout << "" << std:: endl;
    std::cout << first << " + " << second << " = " << total << std:: endl;
    std::cout<< "\nDone." << std::endl;
}
