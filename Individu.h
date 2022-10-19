/**
 * @file Individu.h
 * @author Gaigne
 * @brief Spécification une classe Individu en relation avec sa Voiture
 * @version 0.1
 * @date 2022-10-19
 * 
 */



/*
  Spécifie une classe Individu en relation réciproque avec sa Voiture
  Auteur : Lopistéguy
  Version : 0.1
  Date : 12/08/2022
*/

#ifndef INDIVIDU_H
#define INDIVIDU_H

using namespace std;

#include "Voiture.h" // Utilisée ci-dessous
#include <iostream>

class Voiture; /* Annonce une définition ultérieure de Voiture
                   permet de faire référence aux membres de Voiture dans la classe Individu */

/**
 * @brief jbjsfbjvjbsvjbsjbsvbjsbjsvbjdvbjkqdvbhk
 * @warning Dans cette implementation un Individu conduit au plus une Voiture
 * @deprecated Utiliser a la place la classe Personne
 */
class Individu
{
    // ATTRIBUTS
  public:
    /**
     * @brief Le nom de l'individu
     * 
     */
    string nom;         // Le nom de l'individu
    /**
     * @brief Le prénom de l'individu
     * 
     */
    string prenom;      // Le prénom de l'individu
    /**
     * @brief Lien avec la voiture de l'individu
     * 
     */
    Voiture *maVoiture; // Lien avec la voiture de l'individu

    // MÉTHODES
  public:
    
    /**
     * @brief Construit un nouvelle objet de la classe d'un Individu a partir du nom et du prenom
     * 
     */
    Individu(string = "", string = "");
    // destructeur
    ~Individu();

    // Méthodes usuelles : toString
    /**
     * @brief retourne l'identite de l'Individu 
     * 
     * @return une chaine sous la forme nom, prenom
     * @bug un espace en trop entre le prenom et le nom
     * @todo Ajouter un parametre qui permet de choisir un return prenom, nom ou nom, prenom
     */
    string toString();        // Affiche l'identité de l'individu
    string toStringAndLink(); // Affiche l'identité de l'individu et de sa voiture s'il en a une

    // Méthodes spécifiques
    void majMaVoiture(Voiture* voiture);
    /**
     * @brief Definie la Voiture conduite par un  Individu
     * 
     * @param [in] voiture un pointeur vers un objet de classe Voiture 
     */
    void setMaVoiture(Voiture* voiture);
    void supprimerLien();
};

#endif // INDIVIDU_H