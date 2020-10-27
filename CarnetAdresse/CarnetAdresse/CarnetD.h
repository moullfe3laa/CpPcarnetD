#pragma once
#include <map>
#include "Contact.h"
class CarnetD
{
private:
	map<Contact, int> Contacts;
public:
	CarnetD();
	CarnetD(map<Contact, int> Contacts);
	~CarnetD();
	map<Contact, int> getContact();
	void setContact(map<Contact, int> Contacts);
	void affiche();
	void ajouter(Contact c, int id);
	void modifier(Contact c);
	void supprimer(Contact c);
};

