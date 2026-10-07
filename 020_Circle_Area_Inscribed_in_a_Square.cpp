#include <iostream>
#include <cmath>

int main()
{
    const float PI = 3.14;
    float squareSideLength;
    std::cout << "Please Enter Square Side Length to calculate Circle Area: "; std::cin >> squareSideLength;
    unsigned int Area = ceil( PI * pow(squareSideLength / 2, 2) );
    std::cout << "Circle Area = " << Area << std::endl;
}