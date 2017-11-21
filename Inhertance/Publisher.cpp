#pragma once
#include "Publisher.h"

Publisher::Publisher(){
	//Default constructor does nothing
}

//Custom constructor
Publisher::Publisher(std::string name) : publisherName_{name} {}


Publisher::~Publisher(){
	//This class doesn't do any memory management so nothing to do or see here, move along..
}


std::string Publisher::GetName() {
	return publisherName_;
}


void Publisher::SetName(std::string pubName) {
	publisherName_ = pubName;
}

std::vector<Book> Publisher::GetBooks() {
	return books_;
}

int Publisher::GetNumBooks() {
	return books_.size();
}

void Publisher::AddBook(Book book) {
	books_.push_back(book);
}