#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include <cmath>

class Animal {

//private means the keeping variables will only be accesisible inside the class

private:
	std::string name;
	double height;
	double weight;

//static variables share the same value for all objects of the class
	static int num_of_animals;
//in a real world scenario, animals wouldn't be able to count

//public methods are accesible anywhere where the objecy is accessible
public:

	std::string get_name()
	{
		return name;
	}
	void set_name(std::string name){
		this->name = name;
	}
	//-> pointer operator
	double get_height()
	{
		return height;
	}
	void set_height(double height)
	{
		this->height = height;
	}
	double get_weight()
	{
		return weight;
	}
	void set_weight(double weight)
	{
		this->weight = weight;
	}

	void set_all(std::string, double, double);

	//constructor
	Animal (std::string, double, double);
	//default
	Animal();
	//deconstructor
	~Animal ();

	//static method
	static int get_num_of_animals(){return num_of_animals;}
	void to_str();
};

class Dog: public Animal{
private:
	std::string sound = "Woof";

public:
	void make_sound() {
		std::cout << "The dog " << this->get_name() << " says " <<
		this->sound << ".\n";
	}
	Dog (std::string, double, double, std::string);
	Dog():Animal(){};
	void to_str();
};

Dog::Dog(std::string name, double height, double weight, std::string sound) :
Animal(name, height, weight)
{
	this->sound = sound;
}

void Dog::to_str()
{
	std::cout << this->get_name() << " is " << this->get_height() <<
	 " cm tall and " <<
	this->get_weight() << " kgs in weight and says " << this->sound << '\n';
}

int Animal::num_of_animals = 0;
void Animal::set_all(std::string name, double height, double weight)
{
	this->name = name;
	this-> height = height;
	this->weight = weight;
	Animal::num_of_animals++;
}
//constructor
Animal::Animal(std::string name, double height, double weight)
{
	this->name = name;
	this-> height = height;
	this->weight = weight;
	Animal::num_of_animals++;
}


Animal::Animal()
{
	this->name = "";
	this-> height = 0;
	this->weight = 0;
	Animal::num_of_animals++;
}

void Animal::to_str()
{
	std::cout << this->name << " is " << this->height << " cm tall and " <<
	this->weight << " kgs in weight." << '\n';
}

Animal::~Animal()
{
	std::cout << "Animal " << this->name << " Destroyed" << '\n';
}


int main() {

	Animal spot;
	//spot.to_str();
	spot.set_height(123);
	spot.set_weight(121);
	spot.set_name("SPOT");
	spot.to_str();

	//using the constructor

	Animal bobby("BOBBY", 123, 23);
	bobby.to_str();

	Dog Ruffles("Ruffles", 12, 23, "RRRR");
	Ruffles.to_str();

	std::cout << "NUmber of animals " << Animal::get_num_of_animals() << '\n';
;	return 0;
}
