// Copyright Lauren Wheatley
//
// Created by Lauren Wheatley
// Created on June 2021
// This program finds the smallest number of 10 random numbers

#include <iostream>
#include <random>
#include <array>


template<size_t N>
int smallValue(std::array<int, N> randomNumbers) {
    // This program finds the smallest number

    int smallestNum = randomNumbers[0];

    // process
    for (int loop_counter : randomNumbers) {
        if (smallestNum <= loop_counter) {
            continue;
        } else if (smallestNum > loop_counter) {
            smallestNum = loop_counter;
        }
    }

    return smallestNum;
}


int main() {
    std::array<int, 10> randomNumbers;
    int randomNumbersx;
    int smallestNumx;

    std::cout << "Here are 10 random numbers:" << std::endl;

    for (int loop_counter = 0; loop_counter < 10; loop_counter++) {
        std::random_device rseed;
        std::mt19937 rgen(rseed());
        std::uniform_int_distribution<int> idist(1, 100);
        randomNumbersx = idist(rgen);

        randomNumbers[loop_counter] = randomNumbersx;

        std::cout << randomNumbersx << std::endl;
    }

    smallestNumx = smallValue(randomNumbers);

    std::cout << "The smallest number is: " << smallestNumx << std::endl;
}
