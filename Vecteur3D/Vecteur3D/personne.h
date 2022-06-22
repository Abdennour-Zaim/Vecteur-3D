#pragma once
#include<iostream>
#include<string>

using namespace std;
class personne
{

private:
	string nom;
	string prenom;
	int age;
	string adresse;

public:
	personne(string nom ,string prenom,int age,string adresse);
	int getage();
	bool operator<(const personne &p) const;
	void afficher() const;
};

