#include <iostream>
#include <iterator>
#include <fstream>
#include <string>
#include "utility.hpp"

using namespace std;

string fstream_readlines(string path)
{
    string src;
    fstream file;
    file.open(path, ios::in); //open a file to perform read operation using file object
    if (file.is_open())
    {   
        //checking whether the file is open
        string tp;
        while(getline(file, tp))
        { 
            //read data from file object and put it into string.
            src += tp += "\n";
        }
        file.close(); //close the file object.
    }

    return src;
}