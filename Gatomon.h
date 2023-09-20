/****************************************************************************
 * 	Braden Harris
 * 	CS-355
 * 	Assinment #7
 * 	9/20/23
 * 	Create a virtual pet class with attributes and methods
 * 	  then create child classes that inherit and extend the
 * 	  virtual pet class.
*/

#ifndef GATOMON_H
#define GATOMON_H
#include "Digimon.h"

using namespace std;

class Gatomon : public Digimon {
	private:
		int catClawSharpness;

	public:
		Gatomon(const string&, const string&, int);
		void useCatClawAttack(Digimon&);
		int getSharpness()const;

};

#endif
