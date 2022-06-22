#include "Namee.h"

Name::Name()
{
	this->Fname = "";
	this->Lname = "";
}

Name::Name(string Fname, string Lname)
{
	this->Fname = Fname;
	this->Lname = Lname;

}

Name::Name(const Namee& N)
{
	this->Fname = N.Fname;
	this->Lname = N.Lname;
}

void Name::afficher()
{
	cout << "first name = " << this->Fname << endl;
	cout << "last name = " << this->Lname << endl;

}

Name& Name::operator=(const Name& N)
{
	if (this != &N)
	{
		this->Fname = N.Fname;
		this->Lname = N.Lname;
	}
	return *this;
}

bool Name::operator>(const Name& N)
{
	if (this->Fname > N.Fname)
	{
		return true;
	}
		return false;
}

Name::~Name()
{
}
