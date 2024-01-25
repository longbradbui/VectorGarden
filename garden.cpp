#include <iostream>
#include <string>
#include "garden.h"
using namespace std;

Plant::Plant()
{
	name_ = "Grass";
	lifespan_ = 2;
}

Plant::Plant(string name, int lifespan)
{
	name_ = name;
	lifespan_ = lifespan;
}

string Plant::name() const
{
	return name_;
}

int Plant::lifespan() const
{
	return lifespan_;
}

bool Garden::PlantPlants(Plant &plant)
{
	if (isFull()) {
		return false;
	}
	else 
	{
		plants_.push_back(plant);
		return true;
	}
}

bool Garden::DigUpPlants(Plant &plant)
{
	if (isEmpty()) {
		return false;
	}
	auto iterator = find(plants_.begin(), plants_.end(), plant);
	if (iterator != plants_.end())
	{
		plants_.erase(iterator); // Erase the plant from the vector
	} 
	else 
	{
		cout << "Not found any plant. Plant some more!" << endl;
	}
	return true;
}

bool Garden::PresentPlants()
{
	if (isEmpty()) {
		cout << "The garden is empty. Please plant some flowers.";
		return false;
	} 
	else
	{
		cout << "Plants that we currently have in the garden: " << endl;
		auto iterator = plants_.begin();
		while (iterator != plants_.end())
		{
			const Plant& plant = *iterator;
			cout << plant.name() << ", ";
			++iterator; // Move iterator to the next element
		}
	}

}

bool Garden::isFull()
{
	if (plants_.size() > 99) {
		isFull_ = true;
		return;
	}
		isFull_ = false;
}

bool Garden::isEmpty()
{
	if (plants_.size() < 0) {
		isEmpty_ = true;
		return;
	}
		isEmpty_ = false;
}
