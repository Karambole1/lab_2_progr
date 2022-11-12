#include "Evaporator.h"
#include <string>
#include <iostream>

Evaporator::Evaporator() {
	name = "default name";
	diameter = 20;
	watts = 10;
	resistance = 5;
	std::cout << "Evaporator was created with default params!\n";
}

Evaporator::Evaporator(std::string name) {
	this->name = name;
	diameter = 20;
	watts = 10;
	resistance = 5;
	std::cout << "Evaporator was created\n";
}
Evaporator::Evaporator(std::string name, int diameter, int watts, int resistance) {
	this->name = name;
	this->diameter = diameter;
	this->watts = watts;
	this->resistance = resistance;
	std::cout << "\nNew Evaporator was created";
}
Evaporator::~Evaporator() {
	std::cout << "\nEvaporator " << name << " was removed";
}

void Evaporator::Evaporator_INFO() {
	std::cout << "\tname: " << name << "\n\tdiameter: " << diameter << "\n\twatts: " << watts << "\n\tresistance: " << resistance << "\n";
}


void Evaporator::set_name(std::string name) {
	this->name = name;
}
std::string Evaporator::get_name() {
	return name;
}

void Evaporator::set_diameter(int diameter) {
	this->diameter = diameter;
}
int Evaporator::get_diameter() {
	return diameter;
}

void Evaporator::set_watts(int watts) {
	this->watts = watts;
}
int Evaporator::get_watts() {
	return watts;
}

void Evaporator::set_resistance(int resistance) {
	this->resistance = resistance;
}
int Evaporator::get_resistance() {
	return resistance;
}