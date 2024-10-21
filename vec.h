/**
 * @file vec.h
 * @brief Header file containing the _vec3 class template for 3D vector operations.
 *
 * This file defines a template class for 3D vectors of type T, supporting
 * operations such as addition, subtraction, dot product, and magnitude calculation.
 */

#ifndef _VEC_H
#define _VEC_H

#include <ostream>
#include <cmath>

/**
 * @brief A template class for 3D vector operations.
 *
 * This class represents a 3D vector with components of type T and supports basic
 * vector operations such as addition, subtraction, dot product, and magnitude.
 *
 * @tparam T The type of the vector components (e.g., double).
 */
template<typename T>
class _vec3 {
public:
    /**
     * @brief Default constructor.
     *
     * Initializes the vector with all components set to 0.
     */
    _vec3<T>() : d{0, 0, 0} {}

    /**
     * @brief Parameterized constructor.
     *
     * Initializes the vector with the given values.
     *
     * @param a The x-component of the vector.
     * @param b The y-component of the vector.
     * @param c The z-component of the vector.
     */
    _vec3<T>(T a, T b, T c) : d{a, b, c} {}

    /**
     * @brief Accesses a vector component by index.
     *
     * Returns a reference to the vector component at the specified index.
     *
     * @param i The index of the component (0 for x, 1 for y, 2 for z).
     * @return T& Reference to the vector component.
     */
    T& operator[] (int i) { return d[i]; }

    /**
     * @brief Accesses a vector component by index (const version).
     *
     * Returns the value of the vector component at the specified index.
     *
     * @param i The index of the component (0 for x, 1 for y, 2 for z).
     * @return T The value of the vector component.
     */
    T operator[] (int i) const { return d[i]; }

    /**
     * @brief Adds two vectors.
     *
     * Adds the corresponding components of vectors a and b.
     *
     * @param a The first vector.
     * @param b The second vector.
     * @return _vec3<T> The result of adding vectors a and b.
     */
    friend _vec3<T> operator+(const _vec3<T>& a, const _vec3<T>& b) {
        return _vec3<T>(a[0] + b[0], a[1] + b[1], a[2] + b[2]);
    }

    /**
     * @brief Subtracts two vectors.
     *
     * Subtracts the corresponding components of vector b from vector a.
     *
     * @param a The first vector.
     * @param b The second vector.
     * @return _vec3<T> The result of subtracting b from a.
     */
    friend _vec3<T> operator-(const _vec3<T>& a, const _vec3<T>& b) {
        return _vec3<T>(a[0] - b[0], a[1] - b[1], a[2] - b[2]);
    }

    /**
     * @brief Computes the dot product of two vectors.
     *
     * Returns the scalar dot product of vectors a and b.
     *
     * @param a The first vector.
     * @param b The second vector.
     * @return T The dot product of vectors a and b.
     */
    friend T dot(const _vec3<T>& a, const _vec3<T>& b) {
        return a[0] * b[0] + a[1] * b[1] + a[2] * b[2];
    }

    /**
     * @brief Computes the magnitude of a vector.
     *
     * Returns the Euclidean magnitude (length) of vector a.
     *
     * @param a The vector whose magnitude is to be calculated.
     * @return double The magnitude of the vector.
     */
    friend double mag(const _vec3<T>& a) {
        return sqrt(dot(a, a));
    }

    /**
     * @brief Outputs a vector to an output stream.
     *
     * Prints the components of the vector a to the given output stream.
     *
     * @param out The output stream.
     * @param a The vector to print.
     * @return std::ostream& The output stream.
     */
    friend std::ostream& operator<<(std::ostream &out, const _vec3<T>& a) {
        out << a[0] << " " << a[1] << " " << a[2];
        return out;
    }

protected:
    T d[3];  //!< Array holding the vector components (x, y, z).
};

using double3 = _vec3<double>;  //!< Alias for a 3D vector of type double.

#endif