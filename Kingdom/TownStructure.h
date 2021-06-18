#pragma once
#include <string>

using namespace std;

class TownStructure
{
private:
    int cost = 0;
    int food = 0;
    int money = 0;
    int population = 0;

    int food_value = 0;
    int money_value = 0;
    int population_value = 0;
    string name = "";
    int type = 0; //1 = продовольственные // 2 = денежные // 3 = популяция
public:
    TownStructure(string name, int type, int cost) {
        this->name = name;
        this->type = type;
        this->cost = cost;

    }

    void setCost(int cost) { this->cost = cost; }
    int getCost() { return this->cost; }

    void setName(string name) { this->name = name; }
    string getName() { return this->name; }

    void setType(int type) { this->type = type; }
    int getType() { return this->type; }

    void setFoodValue(int food_value) { this->food_value = food_value; }
    int getFoodValue() { return this->food_value; }

    void setMoneyValue(int money_value) { this->money_value = money_value; }
    int getMoneyValue() { return this->money_value; }

    void setPopulationValue(int population_value) { this->type = population_value; }
    int getPopulationValue() { return this->population_value; }
};
