#include <string>
#include <vector>
#include "../Base/Pizza.h"

#ifndef HCMGREEKPIZZA_H
#define HCMGREEKPIZZA_H

class HCMGreekPizza : public Pizza
{
public:
	HCMGreekPizza()
	{
		name = "HCM supper Greek pizza";
		dough = "HCM thin dough";
		sauce = "HCM very good sauce";
		toppings.push_back("HCM Greek");
		toppings.push_back("Black olives");
	}
};

#endif // HCMGREEKPIZZA_H
