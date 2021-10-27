#pragma once
#include "Header.h"
class Factory
{
private:
	vector<fs::path> files;
public:
	void Get_Files_Extensions(const string);
	void Print();
};

