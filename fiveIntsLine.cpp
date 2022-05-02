// Copyright (c) 2021 Ferdous Sediqi All rights reserved.
// Created by: Ferdous Sediqi
// Created on: May, 2, 2022
// In this program we display 5 numbers per line from 1000-2000
// using loop and if statemtn inside the loop.


#include <iostream>

main() {
    // variables
    int counter;

    // use nested loops to display the colors code
    for (counter = 1000; counter < 2001; counter++) {
        // using if statment to display 5 numbers per line
        if (counter % 5 == 0 && counter != 1000) {
            std::cout  << std::endl;
        }
        std::cout <<  counter << " ";
    }
}
