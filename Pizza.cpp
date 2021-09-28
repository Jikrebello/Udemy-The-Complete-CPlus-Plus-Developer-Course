#include "Pizza.h"

Pizza::Pizza(string _name, int _diameter, int _cost)
{
    name = _name;
    diameter = _diameter;
    cost = _cost;
    toppings.push_back("Tomato Sauce Base");
    toppings.push_back("Cheese");
}

int Pizza::GetCost() const
{
    return cost;
}

void Pizza::AddTopping(string _topping)
{
    toppings.push_back(_topping);
}

void Pizza::PrintToppings()
{
    cout << "The toppings on the "<< name << " pizza are:" << endl;

    for (string topping : toppings)
    {
        cout << " " << topping << endl;
    }
    
    cout << endl;
}
