#include "personne.h"

personne::personne(string nom, string prenom, int age, string adresse)
{
    this->nom = nom;
    this->prenom = prenom;
    this->age = age;
    this->adresse = adresse;
}

int personne::getage()
{
    return age;
}

bool personne::operator<(const personne& p) const
{
    return this->age < p.age ;
}

void personne::afficher() const
{
    cout << this->nom << this->prenom << endl;

}
