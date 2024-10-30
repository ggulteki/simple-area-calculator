/*
 * @Author: ggulteki 
 * @Date: 2024-10-24 23:56:03 
 * @Last Modified by: ggulteki
 * @Last Modified time: 2024-10-25 00:40:07
 */

// A simple C++14 program for calculating area of square, rectangle, and circle.

#include <iostream>
#include <cstring>
#include <cmath>

/*
* Lambda function for getting more precise calculation
*/
auto squareAreaCalc = [](const auto sideLength) {
    auto result = sideLength * sideLength; // auto type variable for 
    std::cout << "The area of the square is: " << result << std::endl;
};

auto rectangleAreaCalc = [](const auto width, const auto length) {
    auto result = width * length;
    std::cout << "The area of the rectangle is: " << result << std::endl;
};

auto circleAreaCalc = [](const auto r) {
    auto result = r * r * M_PI; // M_PI from cmath library for better precision.
    std::cout << "The area of the circle is: " << result << std::endl;
};

int main(int argc, char *argv[]) {
    bool isTrue = false; 
    auto value1 = 0.0;
    auto value2 = 0.0;
    
    do {
        if (argc != 2) {
            std::cout << "Error: Wrong argument count.." << std::endl;
            std::cout << "Ex-Usage: calculator [shape]" << std::endl;
            return -1;
        } else {
            if (strcmp(argv[1], "square") == 0 || strcmp(argv[1], "rectangle") == 0 || strcmp(argv[1], "circle") == 0) {
                if (strcmp(argv[1], "square") == 0) {
                    std::cout << "Enter the sideLength of the square.." << std::endl;
                    std::cin >> value1;
                    squareAreaCalc(value1);
                }
                
                if (strcmp(argv[1], "rectangle") == 0) {
                    std::cout << "Enter the width value of the rectangle.." << std::endl;
                    std::cin >> value1;
                    std::cout << "Enter the length value of the rectangle.." << std::endl;
                    std::cin >> value2;
                    rectangleAreaCalc(value1, value2);
                }

                if (strcmp(argv[1], "circle") == 0) {
                    std::cout << "Enter the radius of the circle.." << std::endl;
                    std::cin >> value1;
                    circleAreaCalc(value1);
                }
            } else {
                std::cout << "Error: Wrong argument count.." << std::endl;
                std::cout << "Ex-Usage: calculator [shape]" << std::endl;  
            }
        }
        isTrue = true;
    } while (isTrue != true);

    return 0;
}