/// \brief Représentation du menu des options du jeu.
/// \details Interface permettant de modifier quelques options de jouabilité.
/// \author Antoine Legault, Samuel Labelle
/// \date 27 mars 2018
/// \version 0.1
/// \warning Aucun.
/// \bug Aucun.

#ifndef SOURCE_SETTINGS_H
#define SOURCE_SETTINGS_H

#include "Menu.h"

class Settings : public Menu{
private:
    Model* leftArrowButton, * rightArrowButton, * FPSButton, * backButton;
    void (*onClick)();

public:
    Settings() {
        leftArrowButton = new Button ( ResourceManager::getInstance()->getTexture("ButtonLeftArrow"), 800, 543, 0, 100, 100);
        ResourceManager::getInstance()->addResource("ButtonLeftArrow", leftArrowButton);
        rightArrowButton = new Button ( ResourceManager::getInstance()->getTexture("ButtonRightArrow"), 950, 543, 0, 100, 100);
        ResourceManager::getInstance()->addResource("ButtonRightArrow", rightArrowButton);
        FPSButton = new Button (  ResourceManager::getInstance()->getTexture("ButtonFPS"), 800, 343, 0, 298, 128);
        ResourceManager::getInstance()->addResource("ButtonFPS", FPSButton);
        backButton = new Button (  ResourceManager::getInstance()->getTexture("ButtonBack"), 640, 143, 0, 298, 128);
        ResourceManager::getInstance()->addResource("ButtonBack", backButton);
    }

    void draw (){
        leftArrowButton->draw();
        rightArrowButton->draw();
        FPSButton->draw();
        backButton->draw();
    }
};


#endif


