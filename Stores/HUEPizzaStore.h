#include <string>
#include "./Base/PizzaStore.h"
#include "../Pizzas/Base/Pizza.h"
#include "../Pizzas/HUEPizzas/HUECheesePizza.h"
#include "../Pizzas/HUEPizzas/HUEGreekPizza.h"
#include "../Pizzas/HUEPizzas/HUEPepperoniPizza.h"

class HUEPizzaStore : public PizzaStore
{
public:
    Pizza *CreatePizza(std::string type) const override
    {
        if (type == "cheese")
        {
            return new HUECheesePizza;
        }
        else if (type == "greek")
        {
            return new HUEGreekPizza;
        }
        else if (type == "pepperoni")
        {
            return new HUEPepperoniPizza;
        }
        else
        {
            std::cout << "We do not have " << type << " pizza!" << std::endl;
            return nullptr;
        }
    }

protected:
    void Welcome() const override
    {
        std::cout << "----- Hue Pizza Store -----" << std::endl;
    }
    void Thanks() const override
    {
        std::cout << "----- Hue Pizza Store Thanks for order -----" << std::endl;
    }
};