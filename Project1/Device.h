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
	std::string getOS() const;
	bool isActive() const;
	void activate();
	void deactivate();
	unsigned int getID() const;
	DeviceType getType() const;
	void init(unsigned int id, DeviceType type, std::string os);
};

