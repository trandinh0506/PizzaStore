#include <string>
#include <vector>
#include "../Base/Pizza.h"

#ifndef HUEGREEKPIZZA_H
#define HUEGREEKPIZZA_H

class HUEGreekPizza : public Pizza
{
public:
    HUEGreekPizza()
    {
        name = "HUE supper Greek pizza";
        dough = "HUE thin dough";
        sauce = "HUE very good sauce";
        toppings.push_back("HUE Greek");
        toppings.push_back("Black olives");
    }
};

#endif // HUEGREEKPIZZA_H
