#include "User.h"

void User::init(unsigned int id, std::string username, unsigned int age)
{
	this->_id = id;
	this->_username = username;
	this->_age = age;
	this->_devices = nullptr;
}

void User::clear()
{
	delete this;
}

unsigned int User::getID() const
{
	return this->_id;
}

std::string User::getUserName() const
{
	return this->_username;
}

unsigned int User::getAge() const
{
	return this->_age;
}

DevicesList& User::getDevices() const
{
	return *this->_devices;
}

void User::addDevice(Device newDevice)
{
	DeviceNode* a = nullptr;
	a->DeviceNode::init(newDevice);
	if (this->_devices == nullptr)
	{
		this->_devices->init();
		this->_devices->set_first(a);
	}
	else
	{
		this->_devices->add(newDevice);
	}
}

bool User::checkIfDevicesAreOn() const
{
	DeviceNode* step = this->_devices->get_first();
	while (step->get_next() != nullptr)
	{
		if (!step->get_data().isActive())
		{
			return false;
		}
		step = step->get_next();
	}
	return true;
}
