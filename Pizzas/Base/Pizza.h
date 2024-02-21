#include <iostream>
#include <string>
#include <vector>

#ifndef PIZZA_H
#define PIZZA_H

class Pizza
{
protected:
	std::string name;
	std::string dough;
	std::string sauce;
	std::vector<std::string> toppings;

public:
	void Bake() const
	{
		std::cout << "Baking " << name << " in 30 mins" << std::endl;
	};
	void Cut() const 
	{
		std::cout << "Cutting " << name << std::endl;
	};
	void Prepare()
	{
		std::cout << "Preparing " << name << "..." << std::endl;
		std::cout << "Tossing dough... " << dough << std::endl;
		std::cout << "Adding sauce..." << sauce << std::endl;
		std::cout << "Adding toppings:" << std::endl;
		for (auto &topping : toppings)
		{
			std::cout << "\t" << topping << std::endl;
		}
	};
	void Box() const
	{
		std::cout << "Boxing " << name << std::endl;
	};
};

#endif // PIZZA_H
