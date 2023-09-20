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
