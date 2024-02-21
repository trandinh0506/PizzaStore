#include <string>
#include <vector>
#include "../Base/Pizza.h"

#ifndef HCMCHEESEPIZZA_H
#define HCMCHEESEPIZZA_H

class HCMCheesePizza : public Pizza {
public:
	HCMCheesePizza() {
		name = "HCM supper Cheese pizza";
		dough = "HCM thin dough";
		sauce = "HCM very good sauce";
		toppings.push_back("HCM cheese");
		toppings.push_back("Black olives");
	}

};

#endif // HCMCHEESEPIZZA_H
