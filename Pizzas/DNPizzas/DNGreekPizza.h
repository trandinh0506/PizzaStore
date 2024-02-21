#include <string>
#include <vector>
#include "../Base/Pizza.h"

#ifndef DNGREEKPIZZA_H
#define DNGREEKPIZZA_H

class DNGreekPizza : public Pizza
{
public:
    DNGreekPizza()
    {
        name = "DN supper Greek pizza";
        dough = "DN thin dough";
        sauce = "DN very good sauce";
        toppings.push_back("DN Greek");
        toppings.push_back("Black olives");
    }
};

#endif // DNGREEKPIZZA_H
