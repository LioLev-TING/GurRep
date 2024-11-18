#pragma once

#include <string>
#include <iostream>
#include "User.h"
#include "UserList.h"
#include "Page.h"
using std::cout;
using std::endl;

class Profile
{
private:
	User _owner;
	UserList* _friend_list;
	Page* _page;
public:
	void init(const User owner);
	void clear();
	User getOwner() const;
	void setStatus(const std::string new_status);
	void addPostToProfilePage(const std::string post);
	void addFriend(const User friend_to_add);
	std::string getPage() const;
	std::string getFriends() const;
	std::string getFriendsWithSameNameLength() const;

};

