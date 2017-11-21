#pragma once
#include "Book.h"

Book::Book() {}

Book::Book(std::string title) :
	title_{ title } {
}

Book::Book(std::string title, Author author) :
	title_{ title }, author_{ author } {
}


Book::Book(std::string title, Author author, std::string  publisher, std::string isbn13, bookGenre genre, float price) :
	title_{ title }, author_{ author }, publisher_{ publisher }, isbn13_{ isbn13 }, genre_{ genre }, price_ {
	price
} {
}

//Default destructor
Book::~Book() { }
	
std::string Book::GetTitle() { 
	return title_; 
};

void Book::SetTitle(std::string title) {
		title_ = title;
}

Author Book::GetAuthor() {
	return author_;
}
void Book::SetAuthor(Author author) {
	author_ = author;
}


std::string  Book::GetPublisher() const {
	return publisher_;
}

void Book::SetPublisher(std::string  publisher) {
	publisher_ = publisher;
	std::cout << "Set publisher called on base object " << std::endl;
}

bookGenre Book::GetGenre()const{
	return genre_;
}
void Book::SetGenre(bookGenre genre){
	genre_ = genre;
}

float Book::GetPrice()const{
	return price_;
}
void Book::SetPrice(float price) {
	price_ = price;
}


std::string Book::ToString()  {
	std::ostringstream output;
	std::cout << "Details of the base object are: " << std::endl;
	output << "Base book details " << GetAuthor().GetName() << ", " << GetTitle() << ", " << GetPublisher()
		<< std::endl;

	return output.str();
}
