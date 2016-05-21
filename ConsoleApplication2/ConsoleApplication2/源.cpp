#include <iostream>
#include <math.h>
#include <string>

using namespace std;

class boxForSnake {
	char* box;
public:
	void putInSnake();
	boxForSnake();
	~boxForSnake();
	void box_print();
};

boxForSnake::boxForSnake() {
	box = new char[];
	for (int i = 0; i < 100; i++) {
		box[i] = ' ';
	}
}

void boxForSnake::putInSnake() {
	for(int i=0;i<100;i++)
}