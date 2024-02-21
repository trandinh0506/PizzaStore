#include <string>
#include <vector>
#include "../Base/Pizza.h"

#ifndef DNCHEESEPIZZA_H
#define DNCHEESEPIZZA_H

class DNCheesePizza : public Pizza
{
public:
	DNCheesePizza()
	{
		name = "DN supper Cheese pizza";
		dough = "DN thin dough";
		sauce = "DN very good sauce";
		toppings.push_back("DN cheese");
		toppings.push_back("Black olives");
	}
};

#endif // DNCHEESEPIZZA_H
