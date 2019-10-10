#ifndef INVENTORY_H
#define INVENTORY_H

class Inventory
{
private:
	int itemNumber;
	int quantity;
	double cost;

public:
	//Default constructor
	Inventory()
	{
		itemNumber = 0;
		quantity = 0;
		cost = 0.0;
	}

	//Overloaded constructor
	Inventory(int iN, int q, double c)
	{
		itemNumber = iN;
		quantity = q;
		cost = c;
	}

	//Setter fucntions
	bool setItemNumber(int iN);
	bool setQuantity(int q);
	bool setCost(double c);

	//Getter functions
	int getItemNumber();
	int getQuantity();
	double getCost();
	double getTotalCost();
};

#endif