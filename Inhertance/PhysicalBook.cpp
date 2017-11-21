#include "PhysicalBook.h"



PhysicalBook::PhysicalBook() {
		
}

PhysicalBook::PhysicalBook(std::string title, Author author, std::string publisher, std::string isbn, 
	bookGenre genre, float price, float weight, float length, float width, float depth) : Book{ title, author, publisher, isbn, genre, price }, weight_{ weight }, 
	length_{ length }, width_{ width }, depth_{depth} {
	
}

PhysicalBook::~PhysicalBook(){}

void PhysicalBook::Distribute() {
	std::cout << "Royal Mail rushing the book to your door " << std::endl;
}


std::string PhysicalBook::ToString() {
	std::ostringstream output;
	std::cout << "Details of the physical book are: " << std::endl;
	output << Book::ToString() << ", " << weight_ << ", " << length_ << ", " << width_ << ", " << depth_ << std::endl << std::endl;

	return output.str();
}

