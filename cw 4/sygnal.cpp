/**
 * @file syngall.cpp
 * @author Adam Zuk
 * @date 15-01-2018
 *
 * @brief Plik zrodlowy do klasy SygnalProbkowany
 *
 * Funkcje, konstruktory i funkcje do do klasy SygnalProbkowany
 *
 *
 */
#include "syngall.hpp"
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

void SygnalProbkowany::dodajProbke ( const Probka& p)

{
    _zmienne.push_back (p);
}

int SygnalProbkowany::iloscProbek() const
{


    return _zmienne.size();
}

Probka& SygnalProbkowany::operator[](int i) { return _zmienne[i];
}
 const  Probka& SygnalProbkowany::operator[] (int i)  const   {  return _zmienne[i];
}


std::ostream& operator<<(std::ostream& stream, const SygnalProbkowany& sygnal)
{
  for(int i=0;i<sygnal.iloscProbek();i++)
  stream << sygnal[i]<<endl; return stream;
}
virtual double SygnalProbkowany::x(double t){}
virtual void wypisz(std::ostream& s){}
