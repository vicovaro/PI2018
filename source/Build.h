/// \brief Action qui construit
/// \details Classe héritant de action et qui contient tout les informations relatives à la création d'un objet
/// \author Mickaël Grisé-Roy
/// \date 10 Avril 2018
/// \version 0.1
/// \warning Aucun.
/// \bug Aucun.

#ifndef SOURCE_BUILD_H
#define SOURCE_BUILD_H

#include <map>

#include "Action.h"
#include "ActionParameter.h"

class Build : public Action{
private:
    double x,y,z;
    int buildType;
public:
    /// Constructeur
    /// \param x position en x
    /// \param y position en y
    /// \param z position en z
    Build(double x, double y, double z){
        this->x = x;
        this->y = y;
        this->z = z;
        this->buildType = buildType;
        actionType = BUILD;
    }
    double getX(){
        return x;
    }
    double getY(){
        return y;
    }
    double getZ(){
        return z;
    }



};


#endif //SOURCE_BUILD_H
