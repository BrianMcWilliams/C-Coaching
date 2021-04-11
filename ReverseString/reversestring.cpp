#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cassert>

using namespace std;

const char* originalString = "Racecar is a palindrome";

void ReverseString(char* stringToReverse)
{

}

int reverseStringMain(void)
{
	void* memory = malloc(0x50);

	assert(memory != 0);
	
	strcpy_s((char*)memory, sizeof(char) * 50 , originalString);
	char* strPtr = (char*)memory;

	cout << "Let's reverse this string : " << (char*)memory << endl;

	ReverseString(strPtr);
	
	cout << "Here's the reversed string : " << (char*)memory << endl;
	system("pause");

	return 0;
}
