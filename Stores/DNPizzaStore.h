#include <string>
#include "./Base/PizzaStore.h"
#include "../Pizzas/Base/Pizza.h"
#include "../Pizzas/DNPizzas/DNCheesePizza.h"
#include "../Pizzas/DNPizzas/DNGreekPizza.h"
#include "../Pizzas/DNPizzas/DNPepperoniPizza.h"

class DNPizzaStore : public PizzaStore
{
public:
    Pizza *CreatePizza(std::string type) override
    {
        if (type == "cheese")
        {
            return new DNCheesePizza;
        }
        else if (type == "greek")
        {
            return new DNGreekPizza;
        }
        else if (type == "pepperoni")
        {
            return new DNPepperoniPizza;
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
        std::cout << "----- Da Nang Pizza Store -----" << std::endl;
    }
    void Thanks() override
    {
        std::cout << "----- Da Nang Pizza Store Thanks for order -----" << std::endl;
    }
};