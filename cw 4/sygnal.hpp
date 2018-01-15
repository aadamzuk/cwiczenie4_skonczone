/**
 * @file sygnal.hpp
 * @author Adam Zuk
 * @date 15-01-2018
 *
 * @brief Plik naglowkoey do klasy Sygnal
 *
 * Funkcje, konstruktory i funkcje do do klasy Sygnal
 *
 *
 */
#ifndef SYGNAL_HPP
#define SYGNAL_HPP
#include <iostream>
#include "windows.h"
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

/** \brief Klasa abstrakcyjna
 */
class Sygnal {
public:
/** \brief destruktor
 *
 * \return virtual
 *
 */
virtual ~Sygnal(){}
/** \brief visrtualna zmienna rzeczywista
 *
 * \param t double
 * \return virtual double
 *
 */
virtual double x(double t) = 0;
/** \brief wirtualna funkcja wypisz
 *
 * \param s std::ostream&
 * \return virtual void
 *
 */
virtual void wypisz(std::ostream& s) const = 0;
/** \brief operator zaprzyjazniony
 *
 * \param s std::ostream&
 * \param sygnal const Sygnal&
 * \return friend std::ostream&
 *
 */
friend std::ostream& operator<<(std::ostream& s, const Sygnal& sygnal) {
sygnal.wypisz(s);
return s;
}
};



#endif // SYGNAL_HPP
