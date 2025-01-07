#include <string>
#include "Pizzas\Base\Pizza.h"

#ifndef PIZZASTORE_H
#define PIZZASTORE_H

class PizzaStore
{
public:
	void orderPizza(std::string type)
	{
		Pizza *pizza = CreatePizza(type);
		Welcome();
		if (pizza != nullptr)
		{
			pizza->Prepare();
			pizza->Bake();
			pizza->Cut();
			pizza->Box();
		}
		Thanks();
	}

protected:
	virtual Pizza* CreatePizza(std::string type) const = 0;
	
	virtual void Welcome() = 0;
	virtual void Thanks() = 0;
};

#endif // PIZZASTORE_H