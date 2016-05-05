#include <iostream>

class Engine {
	int power;
public:
	Engine(int p) :power(p) {};
};
class LandVehicle :virtual public Engine {
	int speed;
public:
	LandVehicle(int s, int p) :speed(s), Engine(p) {}
};
class WaterVehicel :virtual public Engine {
	int speed;
public:
	WaterVehicel(int s, int p) :speed(s), Engine(p) {}
};
struct AmphibiousVehicel:LandVehicle, WaterVehicel {
	AmphibiousVehicel(int s1, int s2, int p) :LandVehicle(s1, p), WaterVehicel(s2, p), Engine(p) {}
};
