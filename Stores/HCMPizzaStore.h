#include <string>
#include "./Base/PizzaStore.h"
#include "../Pizzas/Base/Pizza.h"
#include "../Pizzas/HCMPizzas/HCMCheesePizza.h"
#include "../Pizzas/HCMPizzas/HCMGreekPizza.h"
#include "../Pizzas/HCMPizzas/HCMPepperoniPizza.h"

class HCMPizzaStore : public PizzaStore
{
public:
	Pizza *CreatePizza(std::string type) override
	{
		if (type == "cheese")
		{
			return new HCMCheesePizza;
		}
		else if (type == "greek")
		{
			return new HCMGreekPizza;
		}
		else if (type == "pepperoni")
		{
			return new HCMPepperoniPizza;
		}
		else
		{
			std::cout << "We do not have " << type << " pizza!" << std::endl;
			return nullptr;
		}
	}

protected:
	void Welcome() override
	{
		std::cout << "----- Ho Chi Minh Pizza Store -----" << std::endl;
	}
	void Thanks() override
	{
		std::cout << "----- Ho Chi Minh Pizza Store Thanks for order -----" << std::endl;
	}
};