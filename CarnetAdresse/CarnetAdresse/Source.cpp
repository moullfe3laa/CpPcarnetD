#include <iostream>
#include <fstream>
#include <string>
#include "CarnetD.h"
using namespace std;
int main()
{
    bool boucle = true;
    string line;
    int choix;
    string Nom;
    int numero;
    string mail;
    string civilite;
    string adressePostale;
    map<Contact, int> Contacts;
    ofstream myfile;
    myfile.open("contact.cvs");
    int id = 0;

    while (boucle == true)
    {
        cout << "Que desirez-vous faire ? " << endl;
        cout << "**" << endl;
        cout << " 1) Ajouter un contact  " << endl;
        cout << "2) Modifier un contact  " << endl;
        cout << "  3) Supprimer un contact  " << endl;
        cout << " 4) afficher un contact  " << endl;
        cout << "  5) afficher tous les contacts  " << endl;
        cout << "**" << endl;
        cout << "Que voulez vous faire: "; cin >> choix;
        if (choix == 1 || choix == 2 || choix == 3 || choix == 4 || choix == 5)
        {
            Contact c;
            ofstream myfile("contact.cvs");
            myfile.open("contact.cvs");
            if (myfile.is_open())
            {
                if (choix == 1)
                {
                    CarnetD d;
                    d.ajouter(c, id);
                }
                if (choix == 2)
                {

                }
                if (choix == 3)
                {

                }
                if (choix == 4)
                {

                }
                if (choix == 5)
                {
                    /* while (getline(myfile, line))
                     {
                         cout << line << '\n';
                     }
                     myfile.close();*/
                }
            }
            else
            {
                cout << "Unable to open file";
                myfile.close();
            }
        }




        boucle = true;
    }
}