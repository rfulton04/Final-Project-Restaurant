#ifndef salad_H
#define salad_H

#include <string>

using namespace std;

class salad
{
public:
	void setChoice(int i);

	string getChoice() const;

	void setPrice(int i);

	double getPrice() const;

	void print() const;

	salad();

	salad(int i);

private:
	string type;
	double price;



};

#endif