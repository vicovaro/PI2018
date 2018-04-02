/// \brief Représentation du menu principal en jeu.
/// \details Interface qui apparait lorsqu'on ouvre le jeu.
/// \author Antoine Legault
/// \date 24 mars 2018
/// \version 0.1
/// \warning Mettre les warning si nécessaire.
/// \bug Problèmes connus
#ifndef SOURCE_MAINMENU_H
#define SOURCE_MAINMENU_H

#include "Button.h"
#include "Image2D.h"
#include "includes.h"
#include <iostream>

class MainMenu : public Menu {
private:
    Button* startButton;
    Button* settingsButton;
    Button* highscoreButton;
    Image2D* imageMenu;

public:
    /// Constructeur
    MainMenu(){
        imageMenu = new Image2D( ResourceManager::getInstance()->getTexture("FondMaison"), 0, 0, 0.01, 1280, 720);
        ResourceManager::getInstance()->addResource("FondMaison", imageMenu);

        startButton = new Button ( ResourceManager::getInstance()->getTexture("ButtonStart"), 967, 75, 0.3, 298, 128);
        ResourceManager::getInstance()->addResource("ButtonStart", startButton);
        startButton->onClick = [this]() { onStartButtonClick(); };

        settingsButton = new Button( ResourceManager::getInstance()->getTexture("ButtonSettings"), 967, 275, 0.2, 298, 128);
        ResourceManager::getInstance()->addResource("ButtonSettings", settingsButton);
        settingsButton->onClick = [this]() { activeMenu = "Settings"; };

        highscoreButton = new Button(  ResourceManager::getInstance()->getTexture("ButtonHighScore"), 967, 475, 0.1, 298, 128);
        ResourceManager::getInstance()->addResource("ButtonHighScore", highscoreButton);
        highscoreButton->onClick = [this]() { activeMenu = "Highscore"; };

        activeMenu = "MainMenu";
    }

    void onStartButtonClick() {
      // TODO : Code on start button click...
    }

    void draw(){
        startButton->draw();
        highscoreButton->draw();
        settingsButton->draw();
        imageMenu->draw();
    }
};


#endif
