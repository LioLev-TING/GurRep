#include "User.h"

using std::cout;
using std::endl;

void User::init(const unsigned int id, const std::string username, const unsigned int age)
{
	this->_id = id;
	this->_username = username;
	this->_age = age;
	this->_devices = nullptr;
}

void User::clear()
{
	delete this->_devices;
	this->_age = 0;
	this->_id = 0;
	this->_username;
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

void User::addDevice(const Device newDevice)
{
	if (this != nullptr && this->_devices == nullptr)
	{
		DeviceNode* a = new DeviceNode;
		a->init(newDevice);
		this->_devices = new DevicesList;
		this->_devices->init();
		this->_devices->set_first(a);
	}
	else if (this != nullptr)
	{
		this->_devices->add(newDevice);
	}
}

bool User::checkIfDevicesAreOn() const
{
	if (this->_devices == nullptr) { return true; }
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

