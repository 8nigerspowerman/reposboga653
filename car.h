#pragma once
#include<string>
#include<iostream>
#include"tires.h"
#include"engine.h"
#include"doors.h"

using namespace std;

class car : public tires, public engine, public doors
{
	car(string nDVS, string tDVS, string tDoor, string nWheel, string tnWheel);
	void getInfo();
};