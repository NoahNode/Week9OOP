#pragma once
#include "Book.h"
class PhysicalBook : public Book
{

private:
	float weight_;
	float length_;
	float width_;
	float depth_;

public:
	PhysicalBook();

	PhysicalBook(std::string title, Author author, std::string publisher, std::string isbn, bookGenre genre, float price, float weight, float length, float width, float depth);

	~PhysicalBook();

	void Distribute();

	std::string ToString();
};

