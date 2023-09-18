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
