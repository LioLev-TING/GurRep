#pragma once

#include <string>
#include <iostream>
#include "DeviceList.h"

class User
{
private:
	unsigned int _id;
	std::string _username;
	unsigned int _age;
	DevicesList* _devices;

public:
	void init(const unsigned int id,
		const std::string username, const unsigned int age);
	void clear();
	unsigned int getID() const;
	std::string getUserName() const;
	unsigned int getAge() const;
	DevicesList& getDevices() const;
	void addDevice(const Device newDevice);
	bool checkIfDevicesAreOn() const;

};


