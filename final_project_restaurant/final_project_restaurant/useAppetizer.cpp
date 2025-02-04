#include <string>
#include "appetizer.h"
#include <iostream>
#include <iomanip>

using namespace std;

void appetizer::setChoice(int i)
{
	string t[] = {"Jalapeno sticks", "Mac and cheese bites", "Chicken Tenders", "Cup of Soup", "Bowl of soup"};
	double p[] = {5.95, 5.95, 6.50, 2.50, 3.25};

	switch (i)
	{
	case 1:
		type = t[0];
		price = p[0];
		break;
	case 2:
		type = t[1];
		price = p[1];
		break;
	case 3:
		type = t[2];
		price = p[2];
		break;
	case 4:
		type = t[3];
		price = p[3];
		break;
	case 5:
		type = t[4];
		price = p[4];
		break;
	default:
		type = "That is not a valid selection";
		price = 0.00;
		break;

	}

}

string appetizer::getChoice() const
{
	return type;
}

double appetizer::getPrice() const
{
	return price;
}

void appetizer::print() const
{
	string t[] = {"Jalapeno sticks", "Mac and cheese bites", "Chicken Tenders", "Cup of Soup", "Bowl of soup"};
	double p[] = {5.95, 5.95, 6.50, 2.50, 3.25};

	cout << "\tAPPETIZERS" << endl << "\t**********" << endl;

	for(int i = 0; i < 5; i++)
	{
		cout << fixed << showpoint << setprecision(2);
		if(i == 0 || i == 1 || i == 2)
		{
			cout << i +1 <<")" << t[i] << "\t$" << p[i] << endl;
		}
		else
			cout << i +1 <<")" << t[i] << "\t\t$" << p[i] << endl;
	}

	cout << endl << endl;
}

appetizer::appetizer()
{
	int i = 0;
	setChoice(i);
}

appetizer::appetizer(int i)
{
	setChoice(i);
}

