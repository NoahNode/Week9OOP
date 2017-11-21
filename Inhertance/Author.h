#pragma once
#include <string>
#include <iostream>
#include <stdexcept>
#include <assert.h> 
#include <Windows.h>

class Author {

private:
	//private data members
	std::string firstName_;
	std::string secondName_;

public:
	//default constructor
	Author();

	//custom constructor
	Author(std::string fname, std::string sname);

	std::string GetName();
	void SetFName(std::string);
	void SetSName(std::string);

	void TestException();

	//Default destructor
	~Author();
};
