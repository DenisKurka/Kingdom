#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include "TownStructure.h"
#include "Town.h"

class Engine {
public:
    void oneTurn(Town* town) {
        vector<TownStructure*> structuresTmp = town->getBuildings();
        for (int i = 0; i < structuresTmp.size(); i++) {
            if (structuresTmp[i]->getType() == 1) { //1 - еда
                town->setFood(town->getFood() + structuresTmp[i]->getFoodValue());
            }
            else if (structuresTmp[i]->getType() == 2) {//2 - деньги
                town->setFood(town->getMoney() + structuresTmp[i]->getMoneyValue());
            }
            else if (structuresTmp[i]->getType() == 3) {//3 - попул€ци€
                town->setPopulation(town->getPopulation() + structuresTmp[i]->getPopulationValue());
            }
        }
    }
    TownStructure* createStructure(string name, int type, int structure_cost) {
        TownStructure* build1 = new TownStructure(name, type, structure_cost);
        return build1;
    }
};
