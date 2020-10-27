#include "Contact.h"
#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;

map<int, Contact> Contact::getContact()
{
    return map<int, Contact>();
}

void Contact::setContacts(map<int, Contact> Contacts)
{
}

Contact::Contact()
{
}
Contact::Contact(string Nom, int numero, string mail, string civilite, string adressePostale)
{
    this->Nom = Nom;
    this->numero = numero;
    this->mail = mail;
    this->civilite = civilite;
    this->adressePostale = adressePostale;

}

string  Contact::getNom()
{
    return Nom;
}
void Contact::setNom(string nom_p)
{
    this->Nom = nom_p;
}
int Contact::getnumero()
{
    return numero;
}
void Contact::setnumero(int num_p)
{
    this->numero = num_p;
}
string Contact::getmail()
{
    return mail;
}
void Contact::setmail(string mail_p)
{
    this->mail = mail_p;
}
string Contact::getcivilite()
{
    return civilite;
}
void Contact::setcivilite(string civ_p)
{
    this->civilite = civ_p;
}
string Contact::getadressePostale()
{
    return adressePostale;
}
void Contact::setadressePostale(string cpos_p)
{
    this->adressePostale = cpos_p;
}
