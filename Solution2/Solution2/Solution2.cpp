#include <iostream>
using namespace std;

int main()
{
	unsigned int number;
	cout << "Please enter a card number:";
	cin >> number;

	int num = number;
	int count = 0;
	while (num > 0) {
		num = num / 10;
		count++;
	}

	if (count != 9) {
		cout << "Invalid card number! ";
		return 0;
	}

	int firstDigit;
	firstDigit = number / 100000000;
	
	int thirdDigit;
	thirdDigit = number / 1000000 % 10;
	
	string spec;
	switch (thirdDigit) {

	case 0:
		spec = "Informatics";
		break;

	case 1:
		spec = "Computer Science";
		break;

	case 2:
		spec = "Information Systems";
		break;

	case 3:
		spec = "Software Engeneering";
		break;

	case 4:
		spec = "Applied Mathematics";
		break;

	case 5:
		spec = "Mathematics";
		break;

	case 6:
		spec = "Statistics";
		break;

	case 8:
		spec = "Mathematic and Informatics";
		break;

	default:
		cout << "Invalid card number!";
		return 0;
	}
	
	int id;
	id = number / 10 % 100000;

	if (id == 0) {
		cout << "Invalid card number!" << endl;
		return 0;
	}
	cout << "{\"card_version\":" << firstDigit << ",\"owner_spec\":" << spec << ",\"owner_id\":" << id << "}";


	
	return 0;
}


