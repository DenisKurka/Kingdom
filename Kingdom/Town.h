#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include "TownStructure.h"

using namespace std;

class Town {
private:
    int food = 0;
    int happiness = 0;
    int money = 0;
    int population = 0;
    int lvl = 1;
    int typeNation = 0;
    int days = 0;
    vector<TownStructure*> structures;

public:
    Town(int food = 0, int happiness = 0, int money = 0, int population = 0, int days = 0, int lvl = 0) {
        this->food = food;
        this->happiness = happiness;
        this->money = money;
        this->population = population;
        this->days = days;
        this->lvl = lvl;
    }
    void buildStructure(TownStructure* structure) {
        if (this->money >= structure->getCost()) {
            this->money = this->money - structure->getCost();
            structures.push_back(structure);
        }
        else {
            cout << "You have not reached a sufficient level" << endl;
        }
    }

    void Title() {

        cout << "                                            --|====> Magic Kingdom <====|-- " << endl << endl;
        cout << "Food: " << this->food << "     " << "Happiness: " << this->happiness << "      " << "Money: " << this->money << "     " << "Days: " << this->days << "     " << endl << endl;
    }

    void setFood(int food) { this->food = food; }
    int getFood() { return this->food; }

    void setMoney(int money) { this->money = money; }
    int getMoney() { return this->money; }

    void setHappiness(int happiness) { this->happiness = happiness; }
    int getHappiness() { return this->happiness; }

    void setPopulation(int population) { this->population = population; }
    int getPopulation() { return this->population; }

    vector<TownStructure*> getBuildings() {
        return this->structures;
    }
};
