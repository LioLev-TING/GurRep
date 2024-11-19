#pragma once

#include <string>
#include <iostream>
#include "ProfileList.h"
using namespace std;

class SocialNetwork
{
private:
	std::string _network_name;
	unsigned int _min_age;
	ProfileList* profiles;
public:
	/*
	initialize a new social network object
	input: string and int
	output: none
	*/
	void init(const std::string networkName, const int minAge);
	/*
	clears all data in network
	input: none
	output: none
	*/
	void clear();
	/*
	Returns network name
	input: none
	output: string
	*/
	std::string getNetworkName() const;
	/*
	returns the minimum age of the user in the network
	input: none
	output: int
	*/
	int getMinAge() const;
	/*
	adds a new profile on the network if above min age
	input: profile object
	output: true or false
	*/
	bool addProfile(const Profile profile_to_add);
	/*
	returns all of the window devices on the network
	input: none
	output: string
	*/
	std::string getWindowsDevices() const;
};

