#include <iostream>
#include <cmath>

unsigned int CalculateCircleAreaInSquare(float squareSideLength) {

    const float PI = 3.14;
    return ceil( PI * pow(squareSideLength / 2, 2) );
}

int main()
{
    float squareSideLength;
    std::cout << "Please Enter Square Side Length to calculate Circle Area: "; std::cin >> squareSideLength;
    std::cout << "Circle Area = " << CalculateCircleAreaInSquare(squareSideLength) << std::endl;
}