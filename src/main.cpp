#include <iostream>
#include "main.hpp"
using namespace std;

int main()
{
	str1 = "test";
	cout << str1;
	cout << "content-type: text/html" << endl << endl;
	cout << "<html><head></head><body>" << endl;
	cout << "<h1>CGI C++ example</h1>" << endl;
	cout << "</body></html>" << endl;
	return 0;
}
