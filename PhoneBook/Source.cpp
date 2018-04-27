#include "PhoneBook.h"
#include <iostream>

int main() {
	PhoneBook cont("Test1", "Test2", "Test3", "Str", 21, { 1,1,2000 }, {11111,22222,33333});
	cont.show_contact();
	system("pause");
	return 0;
}