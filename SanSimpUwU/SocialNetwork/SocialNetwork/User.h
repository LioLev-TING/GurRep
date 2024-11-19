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
	/*
	initialize a new user object
	input: unsigned int, string, unsigned int
	output: none
	*/
	void init(const unsigned int id,
		const std::string username, const unsigned int age);
	/*
	reset a user node
	input:none
	output: none
	*/
	void clear();
	/*
	Get the id of the user
	input: none
	output: unsigned int
	*/
	unsigned int getID() const;
	/*
	Returns the username of the user
	input: none
	output: string
	*/
	std::string getUserName() const;
	/*
	Returns the age of the user
	input: none
	output: unsigned int
	*/
	unsigned int getAge() const;
	/*
	returns a node of all of the devices of the user
	input: none
	output: devicelist
	*/
	DevicesList& getDevices() const;
	/*
	adds a new device for the user
	input: device
	output: none
	*/
	void addDevice(const Device newDevice);
	/*
	checks if all of the users devices are on
	input: none
	output: true of false
	*/
	bool checkIfDevicesAreOn() const;

};


