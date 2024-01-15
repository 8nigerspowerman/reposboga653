#pragma once
#include<string>

class doors
{
private:
	bool open = true;
public:
	doors() {
		cout << "Doors constructor" << endl;
	}
	void Doors(bool Open);
	void infoDoor();
	doors(string nDoor, string tDoor);
};

void doors::Doors(bool Open) {
	this->open = Open;
	cout << "Door is opened now " << endl;
}
void doors::infoDoor() {
	cout << "Doors constructor " << endl;
}