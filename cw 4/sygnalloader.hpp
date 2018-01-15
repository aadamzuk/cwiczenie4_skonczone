/**
 * @file sygnalloader.hpp
 * @author Adam Zuk
 * @date 15-01-2018
 *
 * @brief Plik naglowkoey do klasy sygnalloader
 *
 * Funkcje, konstruktory i funkcje do do klasy sygnalloader
 *
 *
 */
#ifndef SYGNALLOADER_HPP
#define SYGNALLOADER_HPP
#include "syngall.hpp"
#include <string>


/** \brief klasa sygnalloader
 */
class sygnalloader {

public:
/** \brief konstruktor sygnalloader
 *
 * \param
 * \param
 * \return
 *
 */
sygnalloader(){}
/** \brief funkcja wypisujaca sygnal probkowany
 *
 * \param
 * \param
 * \return
 *
 */
SygnalProbkowany wypisz (std::string s);
/** \brief funkcja zapisajaca sygnal probkowany
 *
 * \param
 * \param
 * \return
 *
 */
void zapiszSygnal (SygnalProbkowany& sygnal, std::string nazwaPliku);



};

#endif
