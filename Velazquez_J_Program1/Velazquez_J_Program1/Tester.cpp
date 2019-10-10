/*******************************************
* John Velazquez
* 9/17/2019
********************************************
* Program 1 - Inventory
********************************************
* Design an Inventory class that can hold 
* information for an item in a retail 
* store's inventory. This program should 
* validate the user inputs to ensure that 
* negative values are not accepted for item 
* number, quantity, or cost.
********************************************/

#include "Inventory.h"
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	Inventory inv; //default constructor
	Inventory inv2(124, 12, 84.95); //overloaded constructor
	Inventory inv3; //set functions
	Inventory inv4; //input validations

	cout << setprecision(2) << fixed; //setting decimal precision in-advance

	//Default constructor test
	cout << "Demonstrating the default constructor..."
		 << "\nItem number: " << inv.getItemNumber()
		 << "\nQuantity   : " << inv.getQuantity()
		 << "\nCost       : " << inv.getCost()
		 << "\nTotal cost : " << inv.getTotalCost()
		 << endl;

	//Overloaded constructor test
	cout << "\n\nDemonstrating the overloaded constructor..."
		<< "\nItem number: " << inv2.getItemNumber()
		<< "\nQuantity   : " << inv2.getQuantity()
		<< "\nCost       : " << inv2.getCost()
		<< "\nTotal cost : " << inv2.getTotalCost()
		<< endl;

	//Set function tests
	inv3.setItemNumber(243);
	inv3.setQuantity(50);
	inv3.setCost(9.5);

	cout << "\n\nDemonstrating the \"set\" functions..."
		<< "\nItem number: " << inv3.getItemNumber()
		<< "\nQuantity   : " << inv3.getQuantity()
		<< "\nCost       : " << inv3.getCost()
		<< "\nTotal cost : " << inv3.getTotalCost()
		<< endl;

	//Input validation tests
	cout << "\nDemonstrating the input validation functions..." << endl;
	inv4.setItemNumber(-1);
	inv4.setQuantity(-1);
	inv4.setCost(-1);

	cout << "\nItem number: " << inv4.getItemNumber()
		 << "\nQuantity   : " << inv4.getQuantity()
		 << "\nCost       : " << inv4.getCost()
		 << "\nTotal cost : " << inv4.getTotalCost()
		 << endl;

	return 0;
}