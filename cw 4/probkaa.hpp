/**
 * @file probkaa.hpp
 * @author Adam Zuk
 * @date 15-01-2018
 *
 * @brief Plik naglowkoey do klasy Probka
 *
 * Funkcje, konstruktory i funkcje do do klasy Probka
 *
 *
 */
#ifndef PROBKA_HPP
#define PROBKA_HPP // PEOBKA_HPP
#include <iostream>

/** \brief Klasa odpowiedzialna za probke
 */
class Probka {
    public:
 /** \brief zmienna rzeczywysta t
  */
 double t;
 /** \brief zmienna rzeczywista x
  */
 double x;
 /** \brief konstruktor
  *
  * \param
  * \param
  * \return
  *
  */
 Probka();
 /** \brief opeator zaprzjazniony
  *
  * \param stream std::ostream&
  * \param probka const Probka&
  * \return friend std::ostream&
  *
  */
 friend std::ostream& operator<<(std::ostream& stream,const Probka& probka)
 {
 stream<<probka.t <<" " <<probka.x  <<std::endl;
 return stream;
 }

 /** \brief konstruktor
  *
  * \param
  * \param
  * \return
  *
  */
 Probka(double _t,double _x);
};

#endif

