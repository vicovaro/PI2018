/// \brief Représentation du menu echap en jeu.
/// \details Interface permettant d'accéder au menu des options en jeu et de quitter le jeu.
/// \author Antoine Legault
/// \date 27 mars 2018
/// \version 0.1
/// \warning .
/// \bug Aucun.

#ifndef SOURCE_PAUSEMENU_H
#define SOURCE_PAUSEMENU_H

#include "includes.h"

class PauseMenu : public Menu {
public:

    ///Constructeur
    PauseMenu(){
        models["PauseMenuFond"] = new Image(0, 0, 0, 1280, 720, ResourceManager::getInstance()->getTexture("PauseMenuFond"));

        models["1resumeGameButton"] = new Button (238, 225, 0, 786, 113, ResourceManager::getInstance()->getTexture("PauseResumeGame"), ResourceManager::getInstance()->getTexture("PauseResumeGameOver"));
        models["1resumeGameButton"]->onClick = [this]() {Scene::changeActiveScene("World");};

        models["2settingsButton"] = new Button (238, 350, 0, 786, 113, ResourceManager::getInstance()->getTexture("PauseSettings"), ResourceManager::getInstance()->getTexture("PauseSettingsOver"));
        models["2settingsButton"]->onClick = [this]() {Scene::changeActiveScene("SettingsMenu");};

        models["3quitGameButton"] = new Button (238, 475, 0, 786, 113, ResourceManager::getInstance()->getTexture("PauseQuitGame"), ResourceManager::getInstance()->getTexture("PauseQuitGameOver"));
        models["3quitGameButton"]->onClick = [this]() {Scene::changeActiveScene("MainMenu");};

    }


    /// Permet d'inscrire tous les évènements comme observables.
    /// \param observables une map contenant tous les observables nécessaires.
    void subscribeAll(std::map <unsigned int, Observable<SDL_Event*>*>& observables){
        if (!observables[SDL_MOUSEBUTTONDOWN]) observables[SDL_MOUSEBUTTONDOWN] = new Observable<SDL_Event*>();
        if (!observables[SDL_MOUSEMOTION]) observables[SDL_MOUSEMOTION] = new Observable<SDL_Event*>();

        for (auto it : models) {
            observables[SDL_MOUSEBUTTONDOWN]->subscribe(it.second);
            observables[SDL_MOUSEMOTION]->subscribe(it.second);
        }
    }

    /// Permet de désinscrire tous les observables.
    /// \param observables une map contenant tous les observables nécessaires.
    void unsubscribeAll(std::map<unsigned int, Observable<SDL_Event*>*>& observables){
        for (auto it : models) {
            observables[SDL_MOUSEBUTTONDOWN]->unsubscribe(it.second);
            observables[SDL_MOUSEMOTION]->unsubscribe(it.second);
        }
    }
};


#endif
