#pragma once

#include <string>
#include <iostream>
#include "ProfileList.h"

class SocialNetwork
{
private:
	std::string _network_name;
	unsigned int _min_age;
	ProfileList* profiles;
public:
	void init(const std::string networkName, const int minAge);
	void clear();
	std::string getNetworkName() const;
	int getMinAge() const;
	bool addProfile(const Profile profile_to_add);
	std::string getWindowsDevices() const;
};

