#include "SocialNetwork.h"
#include <iostream>

void SocialNetwork::init(const std::string networkName, const int minAge)
{
    this->_network_name = networkName;
    this->_min_age = minAge;
    this->profiles = nullptr;
}

void SocialNetwork::clear()
{
    this->_network_name = "";
    this->_min_age = 999;
    if (this->profiles != nullptr) { delete this->profiles; }
}

std::string SocialNetwork::getNetworkName() const
{
    return this->_network_name;
}

int SocialNetwork::getMinAge() const
{
    return this->_min_age;
}

bool SocialNetwork::addProfile(const Profile profile_to_add)
{
    bool okay = false;
    if (profile_to_add.getOwner().getAge() >= this->_min_age)
    {
        if (this->profiles != nullptr)
        {
            this->profiles->add(profile_to_add);
        }
        else
        {
            ProfileNode* a = new ProfileNode;
            a->set_data(profile_to_add);
            a->set_next(nullptr);
            this->profiles = new ProfileList;
            this->profiles->init();
            this->profiles->set_first(a);
        }
        okay = true;
    }
    return okay;
}

std::string SocialNetwork::getWindowsDevices() const
{
    std::string window_device_list = "";
    ProfileNode* step = this->profiles->get_first();
    while (step != nullptr)
    {
        window_device_list += step->get_data().getOwner().getDevices().window_devices();
        step = step->get_next();
    }
    if (window_device_list != "")
    {
        window_device_list.pop_back();
        window_device_list.pop_back();
    }
    return window_device_list;
}
