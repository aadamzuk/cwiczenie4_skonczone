/**
 * @file analizatorsygnalu.hpp
 * @author Adam Zuk
 * @date 15-01-2018
 *
 * @brief Plik naglowkoey do klasy analizatorsygnalu
 *
 * Funkcje, konstruktory i funkcje do do klasy analizatorsygnalu
 *
 *
 */
#ifndef ANALIZATORSYGNALU_HPP
#define ANALIZATORSYGNALU_HPP
#include "syngall.hpp"
#include <iostream>

/** \brief clasa odpowiedzialna do zwracania wartosci funkcji dlugosc,minimum,maksimum,srednia,calka
 */
class analizatorsygnalu{
AnalizatorSygnalu();
public:
/** \brief funkcja zwracajaca dlugosc
 *
 * \param sygnal const SygnalProbkowany&
 * \return double
 *
 */
double dlugosc( const SygnalProbkowany& sygnal);
/** \brief funkcja zwracajaca minimum
 *
 * \param sygnal const SygnalProbkowany&
 * \return double
 *
 */
double minimum(const SygnalProbkowany& sygnal);
/** \brief funkcja zwracajaca maksimum
 *
 * \param sygnal const SygnalProbkowany&
 * \return double
 *
 */
double maksimum(const SygnalProbkowany& sygnal);
/** \brief dunkcja zwracajaca srednia
 *
 * \param sygnal const SygnalProbkowany&
 * \return double
 *
 */
double srednia(const SygnalProbkowany& sygnal);
/** \brief funkcja zwracajaca calke
 *
 * \param sygnal const SygnalProbkowany&
 * \return double
 *
 */
double calka(const SygnalProbkowany& sygnal);
};


#endif
