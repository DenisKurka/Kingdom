#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include "TownStructure.h"
#include "Town.h"

class Engine {
private:
    Town* city;

    Town* foodStruct() {
        int structure_num;

        cout << "         -|==> Shop <==|-" << endl;
        cout << "Press 1 to select Field:  100 coins " << endl;
        cout << "Press 2 to select Bakery: 200 coins " << endl;
        cout << "Press 3 to select Farm:   300 coins " << endl;
        cout << "Enter structure number --|====> ";
        cin >> structure_num;

        if (structure_num == 1) {

            this->city->buildStructure(this->createStructure("Field", 1, 100));
        }
        if (structure_num == 2) {

            this->city->buildStructure(this->createStructure("Bakery", 1, 200));
        }
        if (structure_num == 3) {

            this->city->buildStructure(this->createStructure("Farm", 1, 300));
        }

        return this->city;
    }

        Town* moneyStructur() {
            int structure_num;

            cout << "         -|==> Shop <==|-" << endl;
            cout << "Press 1 to select Store:          100 coins " << endl;
            cout << "Press 2 to select Bank:           200 coins " << endl;
            cout << "Press 3 to select Trade routes:   300 coins " << endl;
            cout << "Enter structure number --|====> ";
            cin >> structure_num;

            if (structure_num == 1) {

                this->city->buildStructure(this->createStructure("Store", 1, 100));
            }
            if (structure_num == 2) {

                this->city->buildStructure(this->createStructure("Bank", 1, 200));
            }
            if (structure_num == 3) {

                this->city->buildStructure(this->createStructure("Trade routes", 1, 300));
            }

        return this->city;
    }

        Town* populatinStructures() {
            int structure_num;

            cout << "         -|==> Shop <==|-" << endl;
            cout << "Press 1 to select Barracs:               100 coins " << endl;
            cout << "Press 2 to select Brothel:               200 coins " << endl;
            cout << "Press 3 to select Residential quarter:   300 coins " << endl;
            cout << "Enter structure number --|====> ";
            cin >> structure_num;

            if (structure_num == 1) {

                this->city->buildStructure(this->createStructure("Barracs", 1, 100));
            }
            if (structure_num == 2) {

                this->city->buildStructure(this->createStructure("Brothel", 1, 200));
            }
            if (structure_num == 3) {

                this->city->buildStructure(this->createStructure("Residential quarter", 1, 300));
            }

            return this->city;
        }


public:
    Engine(Town* city) {
        this->city = city;
    }

    Town* chooseDifficulty(int nationType) {
        if (nationType == 1) {
            this->city = new Town(150, 50, 200, 10, 1, 1);
        }
        else if (nationType == 2) {
            this->city = new Town(100, 40, 150, 10, 1, 1);
        }
        else if (nationType == 3) {
            this->city = new Town(50, 30, 100, 10, 1, 1);
        }

        return this->city;
    }

    Town* market() {
        int structure_type = 0;
        int structure_num = 0;

        while (structure_type > 4 || structure_type < 1) {

            cout << "         -|==> Shop <==|-" << endl;
            cout << "Press 1 to select Food Structures " << endl;
            cout << "Press 2 to select Money Structures " << endl;
            cout << "Press 3 to select Populatin Structures " << endl;
            cout << "Press 4 to skip " << endl;
            cout << "Enter structure type --|====> ";
            cin >> structure_type;

            system("cls");

            if (structure_type > 4 || structure_type < 1) {
                city->Title();
            }
        }

        while (structure_type <= 3 || structure_type >= 1) {

            if (structure_type == 1) {
                this->foodStruct();
            }

            if (structure_type == 2) {
                this->moneyStructur();
            }

            if (structure_type == 3) {
                this->populatinStructures();
            }
        }
        if (structure_num == 4) {
            cout << "You skipped" << endl;
        }

        return city;
    }

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
