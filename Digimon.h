/***************************************************************
 * 	Braden Harris
 * 	CS-355
 * 	Assignment #7
 * 	9/20/23
 * 	Create a virtual pet class with attributes and methods.
 * 	  Then create children that inherit and extend the 
 * 	  virtual pet class.
*/

#ifndef DIGIMON_H
#define DIGIMON_H
#include "VirtualPet.h"

class Digimon: public VirtualPet {
	private:
		string element;

	public: 
		Digimon(const string&, const string&); 
		void useSpecialAttack();
		string getElement()const;
};

#endif
