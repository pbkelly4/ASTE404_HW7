/**
 * @file main.cpp
 * @brief Demonstrates vector operations using the _vec3 class.
 * 
 * This file contains a simple example of 3D vector operations such as
 * subtraction and dot product using the _vec3 class template.
 */

#include <iostream>
#include "vec.h"

/**
 * @brief Main function to demonstrate vector operations.
 * 
 * This function creates two 3D vectors (a and b), performs subtraction and
 * dot product operations, and prints the results.
 * 
 * @param num_args Number of arguments passed to the program.
 * @param args Array of arguments passed to the program.
 * @return int Returns 0 if the program completes successfully.
 */
int main(int num_args, char **args) {
    double3 a{0,1,2};  //!< Vector a with components (0, 1, 2)
    double3 b{0,0,1};  //!< Vector b with components (0, 0, 1)

    std::cout << a - b << std::endl;  //!< Output the result of vector subtraction (a - b)
    std::cout << dot(a, b) << std::endl;  //!< Output the result of the dot product of a and b

    return 0;  //!< Return 0 to indicate success
}
