#include "car.h"

car::car(string nDVS, string tDVS,string nDoor, string tDoor, string nWheel, string tnWheel): engine(nDVS, tDVS), doors(nDoor ,tDoor), tires(nWheel,tnWheel){}

void car::getInfo() {
	this->infoDVS();
	this->infoDoor();
	this->infoTire();
}