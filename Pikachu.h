/********************************************************************
 * 	Braden Harris
 * 	CS-355
 * 	Assinment #7
 * 	9/20/23
 * 	Create a virtual pet class with attributes and methods. Then 
 * 	  create child classes that inherit and extend the virtual
 * 	  pet class.
*/

#ifndef PIKACHU_H
#define PIKACHU_H

#include "Pokemon.h"
using namespace std;


class Pikachu: public Pokemon{
	private:
		int electricPower;

	public: 
		Pikachu(const string&, const string&, int);
		void useElectricShock(Pokemon&);

};

#endif
