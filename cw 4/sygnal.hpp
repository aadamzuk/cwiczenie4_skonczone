#ifndef SYGNAL_HPP
#define SYGNAL_HPP
#include <iostream>
#include "windows.h"
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

class Sygnal {
public:
virtual ~Sygnal(){}
virtual double x(double t) = 0;
virtual void wypisz(std::ostream& s) const = 0;
friend std::ostream& operator<<(std::ostream& s, const Sygnal& sygnal) {
sygnal.wypisz(s);
return s;
}
};



#endif // SYGNAL_HPP
