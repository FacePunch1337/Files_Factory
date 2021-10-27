#include "Header.h"

void Factory::Get_Files_Extensions(const string extension)
{
	for (filesystem::directory_entry const& dir : filesystem::directory_iterator("./Literature"))
	{
		if (dir.path().extension().string() == extension)
			files.push_back(dir);
	}
}

void Factory::Print()
{
	for (size_t i = 0; i < files.size(); i++)
		cout << files[i].is_relative() << " " << files[i].filename().string() << "\t" << " [" << files[i].extension().string() << "] " << endl;
}
