#pragma once
#include <string>
class Evaporator
{
private:
	std::string name;	// Название
	int diameter;		// Диамерт
	int watts;			// Ватты
	int resistance;		// Сопративление

public:
	Evaporator();
	Evaporator(std::string name);
	Evaporator(std::string name, int diameter, int watts, int resistance);
	~Evaporator();

	void Evaporator_INFO();

	void set_name(std::string name);
	std::string get_name();

	void set_diameter(int diameter);
	int get_diameter();

	void set_watts(int watts);
	int get_watts();

	void set_resistance(int resistance);
	int get_resistance();
};

