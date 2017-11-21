/*
* Main.cpp
*
* Version information
* Author: Dr. Shane Wilson
* Date: 20/11/2017
* Description: Code to demonstrate polymorphism - start code
*
* Copyright notice
*/
#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Book.h"
#include "Publisher.h"
#include "Author.h"
#include "PhysicalBook.h"
#include "EBook.h"

using namespace std;

int main() {

	Author bjarne{ "Bjarne", "Stroustrup" };
	Book myBook{"Programming principles and practice using C++", bjarne, "Addison Wesley", "2343242", bookGenre::Reference, 59.99f};
	
	//cout << myBook.ToString();
	

	Author aaron{ "Aaron ", "Franklin" };
	PhysicalBook myPB{ "Franklin Barbecue (A Meatsmoking Manifesto)", aaron, "Ten Speed Press", "978-1607747208", bookGenre::Cuisine, 17.46f, 0.8f, 21.0f, 26.1f, 2.6f };

	EBook myEB{ "Franklin Barbecue (A Meatsmoking Manifesto)", aaron, "Ten Speed Press", "978-1607747208", bookGenre::Cuisine, 17.46f, "Kindle Edition", 63145.0f, "English", true, true  };

	myPB.SetTitle("hello sailor");

	//cout << myPB.ToString() << endl;
	//cout << myEB.ToString() << endl;


	//Create a pointer of base book
	Book* bookPtr{ nullptr };

	//Point the book pointer at my book
	bookPtr = &myBook;
	cout << "\nCalling to string using a base book pointer on a book object" << endl;
	cout << bookPtr->ToString() << endl;


	//Create pointer of type physical book
	PhysicalBook* physicalBookPtr{ nullptr };
	physicalBookPtr = &myPB;

	cout << "\nCalling to string using a derived physical book pointer on a physicalBook object" << endl;
	cout << physicalBookPtr->ToString();


	//Point bookptr at a physical book object?
	bookPtr = &myPB;
	cout << "\nCalling to string using a base book pointer on devired physical book object" << endl;
	cout << bookPtr->ToString() << endl;


	//Point a dervied pointer at a base object?
	//physicalBookPtr = &myBook;  // NOT ALLOWED, compiler gives error, cannot point as book is not a type of physical book


	//What if a base pointer pointing at a derived object calls a derived only function
	//bookPtr->Distribute();  // cannot use derived only functionality


	bookPtr = nullptr;
	physicalBookPtr = nullptr;

	return 0;
}