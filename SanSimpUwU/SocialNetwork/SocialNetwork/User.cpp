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
