#ifndef UTEIS_H
#define UTEIS_H

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

class Uteis
{

public:
	static void PartirString(const string &str, string array[4])
	{
		
		int i = 0;
		stringstream ss(str);
		string token;
		while (getline(ss, token, '\t'))
		{
			
			array[i] = token;
			i++;
		}
	}
};


#endif 
