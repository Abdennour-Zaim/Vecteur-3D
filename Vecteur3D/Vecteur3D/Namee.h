#pragma once
#include<iostream>
using namespace std;
class Name
{
private:
	string Fname;
	string Lname;
public:
	Name();
	Name(string Fname,string Lname);
	Name(const Name& N );
	void afficher();
	Name& operator=(const Name&);
	bool operator>(const Name&);
	~Name();
};

