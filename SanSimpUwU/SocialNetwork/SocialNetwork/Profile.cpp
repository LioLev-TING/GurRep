#include "Profile.h"

void Profile::init(const User owner)
{
	this->_owner = owner;
	this->_friend_list = new UserList;
	this->_friend_list->init();
	this->_page = new Page;
	this->_page->init();
}

void Profile::clear()
{
	delete this->_friend_list;
	delete this->_page;
}

User Profile::getOwner() const
{
	return this->_owner;
}

void Profile::setStatus(const std::string new_status)
{
	if (this->_page != nullptr)
	{
		this->_page->setStatus(new_status);
	}
}

void Profile::addPostToProfilePage(const std::string post)
{
	if (this->_page != nullptr)
	{
		this->_page->addLineToPosts(post);
	}
}

void Profile::addFriend(const User friend_to_add)
{
	if (this->_friend_list == nullptr) // first node
	{
		this->_friend_list = new UserList;
		UserNode* a = new UserNode;
		a->set_data(friend_to_add);
		a->set_next(nullptr);
		this->_friend_list->set_first(a);
	}
	else
	{
		this->_friend_list->add(friend_to_add);
	}
}

std::string Profile::getPage() const
{
	std::string a = "";
	a += "Status: ";
	if (this->_page != nullptr && this->_page->getStatus() != "" && this->_page->getPosts() != "")
	{
		a += this->_page->getStatus() + "\n*******************\n*******************" + this->_page->getPosts()+"\n";
	}
	if (!(this->_page != nullptr && this->_page->getStatus() != "" && this->_page->getPosts() != ""))
	{
		a += "\n*******************\n*******************\n";
	}
	return a;
}

std::string Profile::getFriends() const
{
	std::string names = "";
	if (this->_friend_list != nullptr) // more than 0 friends
	{
		UserNode* step = this->_friend_list->get_first();
		names += step->get_data().getUserName();
		step = step->get_next();
		while (step != nullptr) // still more friends to check
		{
			names += "," + step->get_data().getUserName();
			step = step->get_next();
		}
	}
	return names;
}

std::string Profile::getFriendsWithSameNameLength() const
{
	std::string names = "";
	if (this->_friend_list == nullptr) { return names; } // not empty
	UserNode* step = this->_friend_list->get_first();
	unsigned int Length = this->_owner.getUserName().length(); // remember the wanted length
	while (step != nullptr && step->get_data().getUserName().length() != Length) // get first one
	{
		step = step->get_next();
	}
	if (step == nullptr) { return names; } // reached an end
	names += step->get_data().getUserName();
	step = step->get_next();
	if (step == nullptr) { return names; }  // next reached an end
	while (step != nullptr) // more friends
	{
		if (step->get_data().getUserName().length() == Length) // length check
		{
			names += "," + step->get_data().getUserName();
		}
		step = step->get_next();
	}
	return names;
}
