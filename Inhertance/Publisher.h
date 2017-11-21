/*
* Publisher.h
*
* Version information
* Author: Dr. Shane Wilson
* Date:03/09/2017
* Description: Simple publisher class to illustrate unit testing
*
* Copyright notice
*/

#pragma once
#include <vector>
#include "Book.h"


class Publisher
{
private:
	//Private data members of the class
	std::vector<Book> books_;
	std::string publisherName_;


public:
	Publisher();
	explicit Publisher(std::string name);
	~Publisher();

	std::string GetName();
	void SetName(std::string pubName);

	std::vector<Book> GetBooks();
	int Publisher::GetNumBooks();

	void AddBook(Book book);
};

