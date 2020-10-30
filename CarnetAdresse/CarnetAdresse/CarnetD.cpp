#include "CarnetD.h"
#include <iostream>
#include <fstream>
#include <map>
#include <string.h>

CarnetD::CarnetD()
{
}

CarnetD::CarnetD(map<int, Contact> Contacts)
{
	this->Contacts = Contacts;
}

CarnetD::~CarnetD()
{
}

map<int, Contact> CarnetD::getContact()
{
	return map<int, Contact>();
}

void CarnetD::setContact(map<int, Contact> Contacts)
{
}

void CarnetD::affiche()
{
}
void  CarnetD::ajouter(Contact c, int id)
{
    ofstream myfile("Carnet.cvs");
    if (myfile)
    {
        Contact c;
        string Nom = c.getNom();
        int numero = c.getnumero();
        string mail = c.getmail();
        string civilite = c.getcivilite();
        string adressePostale = c.getadressePostale();
        cout << "Nom ? \n" << endl;
        cin >> Nom;
        cout << "numero \n?" << endl;
        cin >> numero;
        cout << "mail ? \n" << endl;
        cin >> mail;
        cout << "civilite ? \n" << endl;
        cin >> civilite;
        cout << "adresse ? \n" << endl;
        cin >> adressePostale;
       
        map<int, Contact>::iterator mapIt = Contacts.end();
        pair<int, Contact> paire(id,c);
        Contacts.insert(mapIt, paire);
        myfile  << Nom << ", "
            << numero << ", "
            << mail << ", "
            << civilite << ", "
            << adressePostale << ", "
            << "\n";
    
    }
    else
    {
        cout << "ERREUR: Impossible d'ouvrir le fichier." << endl;
    }
}

void CarnetD::supprimer(Contact c)
{
}
