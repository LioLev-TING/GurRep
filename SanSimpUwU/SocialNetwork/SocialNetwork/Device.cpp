#include "Device.h"
#include <iostream>
using std::cout;
using std::endl;

std::string Device::getOS() const
{
	return this->_OS;
}

bool Device::isActive() const
{
	return this->_active;
}

void Device::activate()
{
	this->_active = true;
}

void Device::deactivate()
{
	this->_active = false;
}

unsigned int Device::getID() const
{
	return this->id;
}

DeviceType Device::getType() const
{
	return this->_device;
}

void Device::init(unsigned int id, DeviceType type, std::string os)
{
	this->id = id;
	this->_active = true;
	this->_device = type;
	this->_OS = os;
}




