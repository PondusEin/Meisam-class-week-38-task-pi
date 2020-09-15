// Meisam class week 38 task pi.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>


const double pi = 3.14;
double radius = 0;
double height = 0;

double area(double radius);

double volume(double radius, double height);

int main()
{
    std::cout << "Enter Radius" << std::endl;
    double rad = 0;
    std::cin >> rad;

    std::cout << "Enter Height" << std::endl;
    double height = 0;
    std::cin >> height;

    std::cout << "Area is: " << area(rad) << std::endl;

    std::cout << "Volume is: " << volume(rad, height) << std::endl;
}

double area(double rad) {
    return pi * rad * rad;
}

double volume(double rad, double height) {
    return pi * rad * rad * height;
}
