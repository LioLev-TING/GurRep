#pragma once

#include <string>
#include <iostream>

class Page
{
private:
	std::string _status;
	std::string _posts;
public:
	/*
	initializes the page object
	input: none
	output: none
	*/
	void init();
	/*
	Returns the posts
	input: none
	output: string
	*/
	std::string getPosts() const;
	/*
	Returns the status
	input: none
	output: string
	*/
	std::string getStatus() const;
	/*
	Resets the pages params
	input: none
	output: none
	*/
	void clearPage();
	/*
	sets a new status instead of the old one
	input: a string
	output: none
	*/
	void setStatus(const std::string status);
	/*
	Adds a new post to your posts without deleting the old ones
	input: string
	output: none
	*/
	void addLineToPosts(const std::string new_line);

};

