#include "CarnetD.h"
#include <iostream>
#include <fstream>
#include <map>
#include <string.h>

CarnetD::CarnetD()
{
}

CarnetD::CarnetD(map<Contact, int> Contacts)
{
	this->Contacts = Contacts;
}

CarnetD::~CarnetD()
{
}

map<Contact, int> CarnetD::getContact()
{
	return map<Contact, int>();
}

void CarnetD::setContact(map<Contact, int> Contacts)
{
}

void CarnetD::affiche()
{
}
void  CarnetD::ajouter(Contact c, int id)
{
    ofstream myfile("carnet.cvs");
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
        Contact::Contact(Nom, numero, mail, civilite, adressePostale);
        map<Contact, int>::iterator mapIt = Contacts.begin();
        pair<map<Contact, int>::iterator, bool> paire(mapIt, id);
        Contacts.insert(pair<Contact, int>(c, id));
            /* ptr = mp.insert( pair<char, int>('a', 20) ); */
         /*map<Produit, int>::iterator mapIt = lignesCmde.begin();
     pair<Produit, int> paire(p, qte);
     lignesCmde.insert(mapIt, paire);*/
        myfile << Nom << ", "
            << numero << ", "
            << mail << ", "
            << civilite << ", "
            << adressePostale << ", "
            << "\n";
        id++;
    }
    else
    {
        cout << "ERREUR: Impossible d'ouvrir le fichier." << endl;
    }
}
void CarnetD::supprimer(Contact c)
{
}
