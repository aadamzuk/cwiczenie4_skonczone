#ifndef ANALIZATORSYGNALU_HPP
#define ANALIZATORSYGNALU_HPP
#include "syngall.hpp"
#include <iostream>

class analizatorsygnalu{
AnalizatorSygnalu();
public:
double dlugosc( const SygnalProbkowany& sygnal);
double minimum(const SygnalProbkowany& sygnal);
double maksimum(const SygnalProbkowany& sygnal);
double srednia(const SygnalProbkowany& sygnal);
double calka(const SygnalProbkowany& sygnal);
};


#endif
