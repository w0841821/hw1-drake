// Specification C4 - Source File Header
// drake.cpp
// Erroll Abrahamian, CISP 360
// 09/09/2018

#include <iostream>
using namespace std;

int main()
{
	// Specification C2 - Variable Declaration
	float potentialCivs; // N, potential number of alien civilizations
	int starCreation; // R, rate of star creation (7)
	float havePlanets; // p, percentage as decimal, percentage of stars with planets (40%)
	float developLife; // f, percentage as decimal, percentage of n that can develop life (13%)
	float planetLiving; // n, potentially not round, average num of planets potentially supporting life
	float intelLife; // i, percentage, percentage of n that can develop intelligent life
	float commLife; // c, percentage, percentage of n willing or able to communicate
	float expLife; // L, potentially not round, expected lifetime of civilizations

	// Decided to not use random numbers yet, despite your blessing :)
	starCreation = 7;
	havePlanets = 0.4;
	developLife = 0.13;
	planetLiving = 0.2;
	intelLife = 0.05;
	commLife = 0.03;
	expLife = 200000;

	// Specification B1 - Calculation
	potentialCivs = starCreation * havePlanets * developLife * planetLiving * intelLife * commLife * expLife;
	// N = R * p * n * f * i * c * L

	// Specification C3 - Program Greeting
	cout << "Welcome to the Drake Equation calculator!" << endl;
	cout << "" << endl;

	// Specification A1 – Output Headers
	cout << "RESULTS" << endl;
	cout << "-------" << endl;

	// Specification C1 – Program Output
	cout << "There are " << potentialCivs << " potential alien civilizations." << endl;

	// Specification B2 - Double Output
	cout << "Double that is " << potentialCivs * 2 << "," << endl;

	// Specification B3 - Half Output
	cout << "while half of that number is " << potentialCivs / 2 << "." << endl;
	cout << "" << endl;

	// Specification A2 – Display variables
	cout << "VARIABLES" << endl;
	cout << "---------" << endl;
	cout << "starCreation: " << starCreation << endl;
	cout << "havePlanets: " << havePlanets << endl;
	cout << "developLife: " << developLife << endl;
	cout << "planetLiving: " << planetLiving << endl;
	cout << "intelLife: " << intelLife << endl;
	cout << "commLife: " << commLife << endl;
	cout << "expLife: " << expLife << endl;

	return 0;
}