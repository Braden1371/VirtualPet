#include "VirtualPet.h"
#include "Pokemon.h"
#include "Pikachu.h"
#include "Digimon.h"
#include "Gatomon.h"

int main() {
	//testing the VirtualPet class functions
	cout << "VirtualPet test" << endl;
	VirtualPet myLittleBoringPet("Basic Pet");
	myLittleBoringPet.feed();
	myLittleBoringPet.play();
	myLittleBoringPet.makeSound();

	cout << "Name: " << myLittleBoringPet.getName() << endl;
	cout << "Happiness: " << myLittleBoringPet.getHappiness() << endl;
	cout << "Hunger: " << myLittleBoringPet.getHunger() << endl << endl;

	//testing the Pokemon class functions
	cout << "Pokemon test" << endl;
	Pokemon pokemanz("Pokemanz", "Pokespeez");
	pokemanz.feed();
	pokemanz.play();
	pokemanz.makeSound();

	cout << "Name: " << pokemanz.getName() << endl;
	cout << "Happiness: " << pokemanz.getHappiness() << endl;
	cout << "Hunger: " << pokemanz.getHunger() << endl;
	cout << "Health: " << pokemanz.getHealth() << endl;
	cout << "Species: " << pokemanz.getSpecies() << endl << endl;

	//testing the Pikachu class functions
	cout << "Pikachu test" << endl;
	Pikachu pichu("Ash", "Katchum", 25);
	pichu.feed();
	pichu.play();
	pichu.makeSound();

	cout << "Name: " << pichu.getName() << endl;
	cout << "Happiness: " << pichu.getHappiness() << endl;
	cout << "Hunger: " << pichu.getHunger() << endl;
	cout << "Health: " << pichu.getHealth() << endl;
	cout << "Species: " << pichu.getSpecies() << endl;
	pichu.useElectricShock(pokemanz);
	cout << endl << endl;

	//testing the Digimon class functions
	cout << "Digimon test" << endl;
	Digimon myLilMon("Generic Digimon dude", "Ground");
	myLilMon.feed();
	myLilMon.play();
	
	cout << "Name: " << myLilMon.getName() << endl;
	cout << "Element: " << myLilMon.getElement() << endl;
	cout << "Happiness: " << myLilMon.getHappiness() << endl;
	cout << "Hunger: " << myLilMon.getHunger() << endl;
	myLilMon.useSpecialAttack();
	cout << endl << endl;

	//testing the Gatomon class functions
	cout << "Gatomon test" << endl;
	Gatomon manGat("GatMan", "Light", 22);
	manGat.feed();
	manGat.play();

	cout << "Name: " << manGat.getName() << endl;
	cout << "Element: " << manGat.getElement() << endl;
	cout << "Sharpness: " << manGat.getSharpness() << endl;
	cout << "Happiness: " << manGat.getHappiness() << endl;
	cout << "Hunger: " << manGat.getHunger() << endl;
	manGat.useCatClawAttack(myLilMon);

	
	return 0;
}
