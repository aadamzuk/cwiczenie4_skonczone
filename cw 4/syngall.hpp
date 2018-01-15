/**
 * @file syngall.hpp
 * @author Adam Zuk
 * @date 15-01-2018
 *
 * @brief Plik naglowkoey do klasy SygnalProbkowany
 *
 * Plik naglowkowy zawierajacy funcje: x , wypisz , dodajProbke, iloscProbek
 *                             wektor: vector <Probka> _zmienne
 *
 */
#ifndef SYNGALL_HPP
#define SYNGALL_HPP
#include <vector>
#include "probkaa.hpp"
#include <string>
#include "sygnal.hpp"

/** \brief klasa sygnalorbkowany
 */
class SygnalProbkowany : public Sygnal {
public:
    /** \brief konstruktor do klasy sygnal probkowany
     *
     *
     */
    SygnalProbkowany(){}
    /** \brief wirtualna funkcja zwracajaca liczbe rzeczywista x
     *
     * \param t double
     * \return virtual double
     *
     */
    virtual double x(double t) ;
    /** \brief wirtualna funkcja wypisz
     *
     * \param s std::ostream&
     * \return virtual void
     *
     */
    virtual void wypisz(std::ostream& s);
/** \brief funkcja dodawania probek
 *
 * \param
 * \param
 * \return
 *
 */
void dodajProbke ( const Probka& p);
 /** \brief funkcja zwracajaca ilosc probek w pliku
  *
  * \return int
  *
  */
 int iloscProbek() const;
 /** \brief operator zaprzyjazniony
  *
  * \param i int
  * \return Probka&
  *
  */
 Probka& operator[](int i);
 /** \brief operator zwracajacy probke
  *
  * \param i int
  * \return const Probka&
  *
  */
 const Probka& operator[](int i) const;
 /** \brief operator zaprzyjazniony
  *
  * \param stream std::ostream&
  * \param sygnal const SygnalProbkowany&
  * \return friend std::ostream&
  *
  */
 friend std::ostream& operator<<(std::ostream& stream, const SygnalProbkowany& sygnal);
/** \brief destruktor sygnalprobkowany
 *
 * \return virtual
 *
 */
virtual ~SygnalProbkowany(){}

private:
/** \brief prywatny wektor od klasy Probka
 *
 * \param
 * \param
 * \return
 *
 */
std::vector <Probka> _zmienne;
};

#endif
