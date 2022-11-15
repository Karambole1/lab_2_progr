#include <iostream>
#include <conio.h>
#include "Evaporator.h"
#include "Battery.h"
#include "Cotton_wool.h"
#include "Goo.h"
#include "Device.h"
using namespace std;

int main() {
	int choice, change_choice, list_choice = 0;
	std::string name, taste;
	int diameter, watts, resistance, capacity, mAh, heating_temperature, fiber_density, strength;

	Evaporator* evaporators[5] = { 0, 0, 0, 0, 0 };
	Battery* batteries[5] = { 0, 0, 0, 0, 0 };
	Cotton_wool* cotton_wools[5] = { 0, 0, 0, 0, 0 };
	Goo* goos[5] = { 0, 0, 0, 0, 0 };

	evaporators[0] = new Evaporator();
	batteries[0] = new Battery();
	cotton_wools[0] = new Cotton_wool();
	goos[0] = new Goo();

	Device* device = new Device(evaporators[0], batteries[0], cotton_wools[0], goos[0]);

	std::cout << "\nPress any key to continue...";
	_getch();
	system("cls");

	while (true) {
		std::cout << "Menu:\n\t1 to show Device's info.\n\t2 to change part of device.\n\t3 to exit.\nYour answer: ";
		std::cin >> choice;
		system("cls");

		if (choice == 1) {
			device->Info_Device();
			std::cout << "\nPress any key to continue...";
			_getch();
			system("cls");
		}

		else if (choice == 2) {
			std::cout << "Select part to change:\n\t1 Evaporator\n\t2 Battery\n\t3 Cotton wool\n\t4 Goo\n\t5 to menu\nYour answer: ";
			std::cin >> change_choice;
			system("cls");

			if (change_choice == 1) {
				std::cout << "Choose Evaporator in list:\n";
				for (int i = 0; i < 5; i++) {
					if (evaporators[i] != 0)
						std::cout << i + 1 << " " << evaporators[i]->get_name() << "\n";
					else std::cout << i + 1 << " create new...\n";

				}
				std::cout << "\n6 Remove added parts.\n";

				std::cout << "Your answer: ";
				std::cin >> list_choice;

				if (list_choice == 6) {
					for (int i = 1; i < 5; i++) {
						if (evaporators[i] == 0) continue;
						evaporators[i]->~Evaporator();
						evaporators[i] = 0;
					}
					device->set_Evaporator(evaporators[0]);
					std::cout << "\n\nPress any key to continue...";
					_getch();
					system("cls");
					continue;
				}

				if (evaporators[list_choice - 1] == 0) {
					printf("\nCreate new:\n");

					std::cout << "Enter Evaporator's name: "; std::cin >> name;
					std::cout << "Enter Evaporator's diameter: "; std::cin >> diameter;
					std::cout << "Enter Evaporator's watts: "; std::cin >> watts;
					std::cout << "Enter Evaporator's resistance: "; std::cin >> resistance;

					evaporators[list_choice - 1] = new Evaporator(name, diameter, watts, resistance);
					device->set_Evaporator(evaporators[list_choice - 1]);
					std::cout << "\nPress any key to continue...";
					_getch();
					system("cls");
					continue;
				}
				std::cout << endl;
				device->set_Evaporator(evaporators[list_choice - 1]);
				std::cout << "\nPress any key to continue...";
				_getch();
				system("cls");
			}

			else if (change_choice == 2) {
				std::cout << "Choose Battery in list:\n";
				for (int i = 0; i < 5; i++) {
					if (batteries[i] != 0)
						std::cout << i + 1 << " " << batteries[i]->get_name() << "\n";
					else std::cout << i + 1 << " create new...\n";

				}
				std::cout << "\n6 Remove added parts.\n";

				std::cout << "Your answer: ";
				std::cin >> list_choice;

				if (list_choice == 6) {
					for (int i = 1; i < 5; i++) {
						if (batteries[i] == 0) continue;
						batteries[i]->~Battery();
						batteries[i] = 0;
					}
					device->set_Battery(batteries[0]);
					std::cout << "\n\nPress any key to continue...";
					_getch();
					system("cls");
					continue;
				}

				if (batteries[list_choice - 1] == 0) {
					printf("\nCreate new:\n");

					std::cout << "Enter Battery's name: "; std::cin >> name;
					std::cout << "Enter Battery's capacity: "; std::cin >> capacity;
					std::cout << "Enter Battery's mAh: "; std::cin >> mAh;

					batteries[list_choice - 1] = new Battery(name, capacity, mAh);
					device->set_Battery(batteries[list_choice - 1]);
					std::cout << "\nPress any key to continue...";
					_getch();
					system("cls");
					continue;
				}
				std::cout << endl;
				device->set_Battery(batteries[list_choice - 1]);
				std::cout << "\nPress any key to continue...";
				_getch();
				system("cls");
			}

			else if (change_choice == 3) {
				std::cout << "Choose Cotton wool in list:\n";
				for (int i = 0; i < 5; i++) {
					if (cotton_wools[i] != 0)
						std::cout << i + 1 << " " << cotton_wools[i]->get_name() << "\n";
					else std::cout << i + 1 << " create new...\n";

				}
				std::cout << "\n6 Remove added parts.\n";

				std::cout << "Your answer: ";
				std::cin >> list_choice;

				if (list_choice == 6) {
					for (int i = 1; i < 5; i++) {
						if (cotton_wools[i] == 0) continue;
						cotton_wools[i]->~Cotton_wool();
						cotton_wools[i] = 0;
					}
					device->set_Cotton_wool(cotton_wools[0]);
					std::cout << "\n\nPress any key to continue...";
					_getch();
					system("cls");
					continue;
				}

				if (cotton_wools[list_choice - 1] == 0) {
					printf("\nCreate new:\n");

					std::cout << "Enter Cotton wool's name: "; std::cin >> name;
					std::cout << "Enter Cotton wool's heating temperature: "; std::cin >> heating_temperature;
					std::cout << "Enter Cotton wool's fiber density: "; std::cin >> fiber_density;

					cotton_wools[list_choice - 1] = new Cotton_wool(name, heating_temperature, fiber_density);
					device->set_Cotton_wool(cotton_wools[list_choice - 1]);
					std::cout << "\nPress any key to continue...";
					_getch();
					system("cls");
					continue;
				}
				std::cout << endl;
				device->set_Cotton_wool(cotton_wools[list_choice - 1]);
				std::cout << "\nPress any key to continue...";
				_getch();
				system("cls");
			}

			else if (change_choice == 4) {
				std::cout << "Choose Goo in list:\n";
				for (int i = 0; i < 5; i++) {
					if (goos[i] != 0)
						std::cout << i + 1 << " " << goos[i]->get_name() << "\n";
					else std::cout << i + 1 << " create new...\n";

				}
				std::cout << "\n6 Remove added parts.\n";

				std::cout << "Your answer: ";
				std::cin >> list_choice;

				if (list_choice == 6) {
					for (int i = 1; i < 5; i++) {
						if (goos[i] == 0) continue;
						goos[i]->~Goo();
						goos[i] = 0;
					}
					device->set_Goo(goos[0]);
					std::cout << "\n\nPress any key to continue...";
					_getch();
					system("cls");
					continue;
				}

				if (goos[list_choice - 1] == 0) {
					printf("\nCreate new:\n");

					std::cout << "Enter Goo's name: "; std::cin >> name;
					std::cout << "Enter Goo's strength: "; std::cin >> strength;
					std::cout << "Enter Goo's taste: "; std::cin >> taste;

					goos[list_choice - 1] = new Goo(name, strength, taste);
					device->set_Goo(goos[list_choice - 1]);
					std::cout << "\nPress any key to continue...";
					_getch();
					system("cls");
					continue;
				}
				std::cout << endl;
				device->set_Goo(goos[list_choice - 1]);
				std::cout << "\nPress any key to continue...";
				_getch();
				system("cls");
			}

		}

		else if (choice == 3) break;
	}
}