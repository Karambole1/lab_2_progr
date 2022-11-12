#include <iostream>

struct type_evaporator {
	char name[20];		// Название
	int diameter;		// Диамерт
	int watts;			// Ватты
	int resistance;		// Сопративление
};
struct type_battery {
	char name[20];	// Название
	int capacity;	// Ёмкость
	int mAh;		// Милиамп. часы
};
struct type_cotton_wool {
	char name[20];				// Название
	int heating_temperature;	// Температура нагревания
	int fiber_density;			// Плотность волокон
};
struct type_goo {
	char name[20];	// Название
	int strength;	// Крепость
	char taste[20];		// Вкус
};
struct type_screen {
	type_evaporator evaporator;
	type_battery battery;
	type_cotton_wool cotton_wool;
	type_goo goo;
};

void InfoDevice(type_screen device, int m) {
	if (m == 0) {
		printf("Name of Device's parts:\n");
		printf("\tEvaporator: %s\n", device.evaporator.name);
		printf("\tBattery: %s\n", device.battery.name);
		printf("\tCotton wool: %s\n", device.cotton_wool.name);
		printf("\tGoo: %s\n\n", device.goo.name);
	}
	else if (m == 1) {
		printf("Info about Device:\n");
		printf("\tEvaporator: %s, diameter: %d mm, %d watts, %d OM\n", device.evaporator.name, device.evaporator.diameter, device.evaporator.watts, device.evaporator.resistance);
		printf("\tBattery: %s, capacity: %d, %d mAh\n", device.battery.name, device.battery.capacity, device.battery.mAh);
		printf("\tCotton wool: %s, heating_temperature: %d, fiber_density: %d\n", device.cotton_wool.name, device.cotton_wool.heating_temperature, device.cotton_wool.fiber_density);
		printf("\tGoo: %s, taste: %s, %d mg\n", device.goo.name, device.goo.taste, device.goo.strength);
	}
}

type_screen CreateDevice(type_evaporator evaporator, type_battery battery, type_cotton_wool cotton_wool, type_goo goo) {
	type_screen newDevice;
	newDevice.evaporator = evaporator;
	newDevice.battery = battery;
	newDevice.cotton_wool = cotton_wool;
	newDevice.goo = goo;
	return newDevice;
};

type_evaporator CreateEvaporator() {
	printf("Create new Evaporator:\n");
	type_evaporator newEvaporator;

	printf("\tInput name: ");
	while (gets_s(newEvaporator.name, 20) == 0) {
		printf("\tSorry, try again.\n");
	}
	printf("\tInput diameter: ");
	while (scanf_s("%d", &newEvaporator.diameter) == 0) {
		printf("\tSorry, try again.\n");
	}
	printf("\tInput watts: ");
	while (scanf_s("%d", &newEvaporator.watts) == 0) {
		printf("\tSorry, try again.\n");
	}
	printf("\tInput power: ");
	while (scanf_s("%d", &newEvaporator.resistance) == 0) {
		printf("\tSorry, try again.\n");
	}
	while (getchar() != '\n');

	printf("Evaporator was created.\n\n");
	return newEvaporator;
}

type_battery CreateBattery() {
	printf("Create new Battery:\n");
	type_battery newBattery;

	printf("\tInput name: ");
	while (gets_s(newBattery.name, 20) == 0) {
		printf("\tSorry, try again.\n");
	}

	printf("\tInput capacity: ");
	while (scanf_s("%d", &newBattery.capacity) == 0) {
		printf("\tSorry, try again.\n");
	}

	printf("\tInput mAh: ");
	while (scanf_s("%d", &newBattery.mAh) == 0) {
		printf("\tSorry, try again.\n");
	}
	while (getchar() != '\n');

	printf("Battery was created.\n\n");
	return newBattery;
}

type_cotton_wool CreateCotton_wool() {
	printf("Create new Cotton_wool:\n");
	type_cotton_wool newCotton_wool;

	printf("\tInput name: ");
	while (gets_s(newCotton_wool.name, 20) == 0) {
		printf("\tSorry, try again.\n");
	}

	printf("\tInput heating temperature: ");
	while (scanf_s("%d", &newCotton_wool.heating_temperature) == 0) {
		printf("\tSorry, try again.\n");
	}

	printf("\tInput fiber density: ");
	while (scanf_s("%d", &newCotton_wool.fiber_density) == 0) {
		printf("\tSorry, try again.\n");
	}
	while (getchar() != '\n');

	printf("Cotton wool was created.\n\n");
	return newCotton_wool;
}

type_goo CreateGoo() {
	printf("Create new Goo:\n");
	type_goo newGoo;

	printf("\tInput name: ");
	while (gets_s(newGoo.name, 20) == 0) {
		printf("\tSorry, try again.\n");
	}

	printf("\tInput taste: ");
	while (gets_s(newGoo.taste, 20) == 0) {
		printf("\tSorry, try again.\n");
	}

	printf("\tInput strength: ");
	while (scanf_s("%d", &newGoo.strength) == 0) {
		printf("\tSorry, try again.\n");
	}
	while (getchar() != '\n');

	printf("Goo was created.\n\n");
	return newGoo;
}

void ChangeEvaporator(type_screen* device, type_evaporator newEvaporator) {
	printf("CPU in PC was changed. (%s -> %s)\n\n", device->evaporator.name, newEvaporator.name);
	device->evaporator = newEvaporator;
}

void ChangeGPU(type_screen* device, type_battery newBattery) {
	printf("GPU in PC was changed. (%s -> %s)\n\n", device->battery.name, newBattery.name);
	device->battery = newBattery;
}

void ChangeRAM(type_screen* device, type_cotton_wool newCotton_wool) {
	printf("RAM in PC was changed. (%s -> %s)\n\n", device->cotton_wool.name, newCotton_wool.name);
	device->cotton_wool = newCotton_wool;
}

void ChangeSSD(type_screen* device, type_goo newGoo) {
	printf("SSD in PC was changed. (%s -> %s)\n\n", device->goo.name, newGoo.name);
	device->goo = newGoo;
}

int main() {
	type_evaporator evaporator2 = CreateEvaporator();
	type_battery battery2 = CreateBattery();
	type_cotton_wool cotton_wool2 = CreateCotton_wool();
	type_goo goo2 = CreateGoo();
	type_screen Device2 = CreateDevice(evaporator2, battery2, cotton_wool2, goo2);
	InfoDevice(Device2, 0);
	InfoDevice(Device2, 1);
}
