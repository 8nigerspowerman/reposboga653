#pragma once
#include<string>

class engine
{
private:
	int power;
public:
	engine(int p);
	void infoDVS();
	engine(string nDVS, string tDVS);
};

engine::engine(int p) {
	this->power = p;
}
void engine::infoDVS() {
	cout << "Engine constructor " << endl;
}