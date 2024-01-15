#pragma once
#include<string>

class tires
{
private:
	int r;
	int rad;
public:
	tires();
	void setR(int rad);
	void infoTire();
	tires(string nWheel, string tnWheel);
};

tires::tires() {
	int r(0);
}
void tires::setR(int rad) {
	this->r = rad;
}
void tires::infoTire() {
	cout << "Wheel constructor " << endl;
}