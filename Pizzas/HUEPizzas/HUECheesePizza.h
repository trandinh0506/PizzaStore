#include <string>
#include <vector>
#include "../Base/Pizza.h"

#ifndef HUECHEESEPIZZA_H
#define HUECHEESEPIZZA_H

class HUECheesePizza : public Pizza {
public:
	HUECheesePizza() {
		name = "HUE supper Cheese pizza";
		dough = "HUE thin dough";
		sauce = "HUE very good sauce";
		toppings.push_back("HUE cheese");
		toppings.push_back("Black olives");
	}

};

#endif // HUECHEESEPIZZA_H

