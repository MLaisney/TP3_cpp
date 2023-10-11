#include <iostream>
#include "Personne.h"
using namespace std;
int main ()
{
    // Création des 4 personnages Personne 
    Personne sarko ("SARKOZY", "Nicolas", 62, "Avocat"); // Création de l'objet sarko 
    Personne carlita ("BRUNI", "Carla", 50, "Mannequin"); // Création de l'objet carlita  
    Personne manu("MACRON", "Emmanuel", 48, "Banquier"); // Création de l'objet manu  
    Personne bibi("TROGNEUX", "Brigitte", 64, "Enseignante"); // Création de l'objet bibi
    
    // Affichage des informations des 4 personnages avant l'utilisation des objets
    cout << "On affiche les informations des 4 personnages avant l'utilisation des objets" << endl; 
    sarko.afficher();
    carlita.afficher();
    manu.afficher();
    bibi.afficher();
    
    // Action sur les objets
    carlita.marier("SARKOZY"); // Carla BRUNI se marie avec Nicolas SARKOZY
    bibi.marier("MACRON"); // Brigitte se marie avec Emmanuel MACRON
    manu.demenager("Palais de l'Elysee, 75008 PARIS"); // Emmanuel MACRON déménage à l'Elysée 
    bibi.demenager("Palais de l'Elysee, 75008 PARIS"); // Brigitte MACRON déménage à l'élysée 
    sarko.anniversaire(); // Nicolas SARKOZY a 1 an de plus
    sarko.changer_travail ("Hommes d'Affaires"); // Nicolas SARKOZY a toujours aimé l'argent ! 
    carlita.changer_travail ("Chanteuse"); // Faut croire que Carla BRUNI sait chanter ! 
    manu.changer_travail ("President de la Republique"); // Emmanuel MACRON devient Président 
    bibi.changer_travail ("Premiere Dame"); // Brigitte MACRON devient la première Dame de France
    
    // Affichage des informations des 4 personnages après l'utilisation des objets
    cout << "On affiche les informations des 4 personnages apres l'utilisation des objets" << endl; 
    sarko.afficher();
    carlita.afficher();
    manu.afficher();
    bibi.afficher();

    return 0;
}