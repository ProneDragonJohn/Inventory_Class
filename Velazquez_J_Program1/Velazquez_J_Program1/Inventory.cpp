#include <iostream>
#include "Inventory.h"
using namespace std;

bool Inventory::setItemNumber(int iN)
{
	while(iN < 0)
	{
		cout << "Item number must be 0 or greater. Please re-enter: ";
		cin >> iN;
	}

	itemNumber = iN;
	return true;
}

bool Inventory::setQuantity(int q)
{
	while (q < 0)
	{
		cout << "Quantity must be 0 or greater. Please re-enter: ";
		cin >> q;
	}

	quantity = q;
	return true;
}

bool Inventory::setCost(double c)
{
	while (c < 0)
	{
		cout << "Cost must be 0 or greater. Please re-enter: ";
		cin >> c;
	}

	cost = c;
	return true;
}

int Inventory::getItemNumber()
{
	return itemNumber;
}

int Inventory::getQuantity()
{
	return quantity;
}

double Inventory::getCost()
{
	return cost;
}

double Inventory::getTotalCost()
{
	return cost * quantity;
}