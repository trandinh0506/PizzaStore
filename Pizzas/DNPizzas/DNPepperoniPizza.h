#include <string>
#include <vector>
#include "../Base/Pizza.h"

#ifndef DNPEPPERONIPIZZA_H
#define DNPEPPERONIPIZZA_H

class DNPepperoniPizza : public Pizza
{
public:
    DNPepperoniPizza()
    {
        name = "DN supper Pepperoni pizza";
        dough = "DN thin dough";
        sauce = "DN very good sauce";
        toppings.push_back("DN Pepperoni");
        toppings.push_back("Black olives");
    }
};

#endif // DNPEPPERONIPIZZA_H
