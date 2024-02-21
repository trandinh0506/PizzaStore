#include <string>
#include <vector>
#include "../Base/Pizza.h"

#ifndef HCMPEPPERONIPIZZA_H
#define HCMPEPPERONIPIZZA_H

class HCMPepperoniPizza : public Pizza
{
public:
    HCMPepperoniPizza()
    {
        name = "HCM supper Pepperoni pizza";
        dough = "HCM thin dough";
        sauce = "HCM very good sauce";
        toppings.push_back("HCM Pepperoni");
        toppings.push_back("Black olives");
    }
};

#endif // HCMPEPPERONIPIZZA_H
