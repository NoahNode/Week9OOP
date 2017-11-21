#pragma once
#include "Book.h"
class EBook : public Book
{

private:
	std::string format_; //Kindle edition
	float fileSize_;
	std::string language_;
	bool enhancedTypeSetting_;
	bool screenReaderSupport_;


public:
	EBook();

	EBook(std::string title, Author author, std::string publisher, std::string isbn, 
		bookGenre genre, float price, std::string format, float filesize, 
		std::string language, bool typeSetting, bool screenReaderSupport);

	~EBook();

	std::string ToString();
};

