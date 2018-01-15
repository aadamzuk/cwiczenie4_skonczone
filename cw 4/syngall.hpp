#ifndef SYNGALL_HPP
#define SYNGALL_HPP
#include <vector>
#include "probkaa.hpp"
#include <string>
#include "sygnal.hpp"

class SygnalProbkowany : public Sygnal {
public:
    SygnalProbkowany(){}
    virtual double x(double t) ;
    virtual void wypisz(std::ostream& s);
void dodajProbke ( const Probka& p);
 int iloscProbek() const;
 Probka& operator[](int i);
 const Probka& operator[](int i) const;
 friend std::ostream& operator<<(std::ostream& stream, const SygnalProbkowany& sygnal);
virtual ~SygnalProbkowany(){}

private:
std::vector <Probka> _zmienne;
};

#endif
