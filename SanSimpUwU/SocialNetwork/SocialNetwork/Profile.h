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
	/*
	initializes the profile object
	input: a user
	output: none
	*/
	void init(const User owner);
	/*
	resets the profile
	input: none
	output: none
	*/
	void clear();
	/*
	Returns owner of the profile
	input: none
	output: user object
	*/
	User getOwner() const;
	/*
	Sets a new status
	input: string
	output: none
	*/
	void setStatus(const std::string new_status);
	/*
	Adds a new posts to profile
	input: string
	output: none
	*/
	void addPostToProfilePage(const std::string post);
	/*
	Adds a new friend to the list
	input: user
	output: none
	*/
	void addFriend(const User friend_to_add);
	/*
	Returns the profile page
	input: none
	output: string
	*/
	std::string getPage() const;
	/*
	Returns all of the friends names
	input: none
	output: string
	*/
	std::string getFriends() const;
	/*
	returns the names of all the users with the same name length
	input: none
	output: string
	*/
	std::string getFriendsWithSameNameLength() const;

};

