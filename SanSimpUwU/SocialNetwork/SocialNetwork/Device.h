#pragma once

///////////////////////////////////////////////////////////
/*									    //
	Those definitions are used for tests,               //
	you can add your own, but please do not delete any. //
*/									    //
enum DeviceType {PHONE, PC, LAPTOP, TABLET};		    //
									    //
#define UbuntuOS "UbuntuLinux"                            //						
#define RedHatOS "RedHatLinux"				    //
#define MacOS "MacOS"						    //
#define IOS "IOS"							    //
#define WINDOWS7 "Windows7"                               //
#define WINDOWS10 "Windows10"                             //
#define WINDOWS11 "Windows11"                             //
#define ANDROID "Android"                                 //
									    //
/// ///////////////////////////////////////////////////////

#include <string>
#include <iostream>

class Device
{
private:
	DeviceType _device;
	std::string _OS;
	bool _active;
	unsigned int id;

public:
	/*
	This function returns the OS of the object
	input: none
	output: a string
	*/
	std::string getOS() const;
	/*
	Returns weather the object (device) is active 
	input: none
	output: true or false
	*/
	bool isActive() const;
	/*
	Turns the object to active
	input: none
	output: none
	*/
	void activate();
	/*
	Turns the object off
	input: none
	output: none
	*/
	void deactivate();
	/*
	Returns the id of the device object
	input: none
	output: unsigned int
	*/
	unsigned int getID() const;
	/*
	Returns the type of the object (device)
	input: none
	output: none
	*/
	DeviceType getType() const;
	/*
	initializes the device object
	input: the params of the objects: id type os
	output: none
	*/
	void init(unsigned int id, DeviceType type, std::string os);
};

