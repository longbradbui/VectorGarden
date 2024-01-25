#ifndef GARGEN_H_
#define GARDEN_H_
#include <string>
#include <vector>
using namespace std;

class Garden
{
public:
	bool PlantPlants(Plant &plant);
	bool DigUpPlants(Plant &plant);
	bool PresentPlants();
	bool isFull();
	bool isEmpty();
private:
	bool isFull_;
	bool isEmpty_;
	vector<Plant> plants_;
};

class Plant
{
public:
	Plant();
	Plant(string name, int lifespan);
	string name() const;
	int lifespan() const;
private:
	string name_;
	int lifespan_;
};
#endif

