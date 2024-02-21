#include <string>
#include <vector>
#include "../Base/Pizza.h"

#ifndef HUEPEPPERONIPIZZA_H
#define HUEPEPPERONIPIZZA_H

class HUEPepperoniPizza : public Pizza
{
public:
	HUEPepperoniPizza()
	{
		name = "HUE supper Pepperoni pizza";
		dough = "HUE thin dough";
		sauce = "HUE very good sauce";
		toppings.push_back("HUE Pepperoni");
		toppings.push_back("Black olives");
	}
};

#endif // HUEPEPPERONIPIZZA_H
