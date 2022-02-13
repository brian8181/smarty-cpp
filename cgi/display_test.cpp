#include <iostream>
#include <iterator>
#include <regex>
#include <string>
#include <map>
#include "utility.hpp"
#include "display_test.hpp"

using namespace std;

int main(int argc, char* argv[])
{
    map<string, string> m;
    assign("page_title", "Home", m);
    assign("test1", "ONE", m);
    assign("test2", "TWO", m);

    cout << "page_title=" << m["page_title"] << " : " << "test1=" << m["test1"] << " : " << "test2=" << m["test2"] << endl; 

    if(argc == 2)
    {
        string path = argv[1];
        string src = fstream_readlines(path);
        cout << src << endl;
    }
}