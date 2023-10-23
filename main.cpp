#include <iostream>
using namespace std;

int main() {
	srand(time(0));

	int userChoice;
	cout << "Enter a continent:\n\t1. Africa.\n\t2. North America." << endl;
	cout << "--> ";
	cin >> userChoice;

	Continent* continent;

	switch (userChoice)
	{
	case 1:
		continent = new Africa();
		break;
	case 2:
		continent = new North_America();
		break;
	default:
		break;
	}

	delete continent;

	return 0;
}