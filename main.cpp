// Pocholo Gayan
// 2-13-13
// This is the main entry point for the Alphabetizer program

#include <iostream>
#include <string>
#include <list>
using std::list;
using std::cout;
using std::cin;
using std::endl;
using std::string;
#define END_OF_LINKED_LIST		5

void main()
{
	list<string> myList; // Declaration of container
	list<string>::iterator pos; // iterator to help with looping
	string insertedString;

	for (int i = 0; i < END_OF_LINKED_LIST; i++) // store values
	{
		cout << "Enter string: ";
		cin >> insertedString; // Enter string to be alphabetically ordered into list
		cout << endl;

		// keep iterating through list until proper place is found -OR- end of list is reached
		for (pos = myList.begin(); pos != myList.end() && insertedString > *pos; pos++)
		{
		}

		myList.insert(pos, insertedString); // insert at the correct position
	}

	for (pos = myList.begin(); pos != myList.end(); pos++) // Print list
	{
		cout << *pos << endl;
	}

	system("pause");
}