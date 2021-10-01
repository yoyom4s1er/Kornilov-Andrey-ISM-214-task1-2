#pragma once

/**
 * \brief метод сложения двух чисел
 * \param a первое число
 * \param b второе число
 * \return ответ
 */

double sum_helper(const double a, const double b);

/**
 * \brief метод вычитания двух чисел
 * \param a первое число
 * \param b второе число
 * \return ответ
 */

double sub_helper(const double a, const double b);

/**
 * \brief метод умножения двух чисел
 * \param a первое число
 * \param b второе число
 * \return ответ
 */

double multiply_helper(const double a, const double b);

/**
 * \brief метод деления двух чисел
 * \param a первое число
 * \param b второе число
 * \return ответ
 */

double div_helper(const double a, const double b);

/**
 * \brief Метод сравнения двух чисел
 * \param a первое число
 * \param b второе число
 * \return true, если равны, false, иначе
 */
bool are_equal(const double a, const double b);
