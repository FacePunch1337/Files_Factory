#include "Header.h"

int main() {

	Factory factory;
	factory.Get_Files_Extensions(".lit");
	factory.Print();
	system("pause");
	return 0;
}