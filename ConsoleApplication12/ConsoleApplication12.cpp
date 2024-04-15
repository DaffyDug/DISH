#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Product
{
private:
	double proteins;
	double fats;
	double carbohydrates;
public:
	Product(double proteins, double fats, double carbohydrates)
	{
		this->proteins = proteins;
		this->fats = fats;
		this->carbohydrates = carbohydrates;
	}
	double getProteins()
	{
		return proteins;
	}
	double getFats()
	{
		return fats;
	}
	double getCarbohydrates()
	{
		return carbohydrates;
	}
};
class Dish
{
	vector<Product> products;
public:

	void addProduct(const Product& product) 
	{
		products.push_back(product);
	}

	double getTotalProteins()  
	{
		double total = 0.0;
		for (auto product : products) 
		{
			total += product.getProteins();
		}
		return total;
	}

	double getTotalFats()  
	{
		double total = 0.0;
		for (auto product : products) 
		{
			total += product.getFats();
		}
		return total;
	}
	double getTotalCarbs()  
	{
		double total = 0.0;
		for (auto product : products) 
		{
			total += product.getCarbohydrates();
		}
		return total;
	}
};

int main()
{
	Dish dish;
	dish.addProduct(Product(1.0, 2.0, 3.0));
	dish.addProduct(Product(4.0, 5.0, 6.0));
	cout <<"Count poteins in dish: " << dish.getTotalProteins() << endl;
	cout << "Count fast in dish: " << dish.getTotalFats() << endl;
	cout << "Count carbohydrates in dish: " << dish.getTotalCarbs() << endl;
}