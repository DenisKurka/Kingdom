#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include "TownStructure.h"
#include "Town.h"
#include "Engine.h"

using namespace std;

void Market() {
    int structure_num = 0;

    while (structure_num > 4 || structure_num < 1) {

        cout << "         -|==> Shop <==|-" << endl;
        cout << "Press 1 to select Food Structures " << endl;
        cout << "Press 2 to select Money Structures " << endl;
        cout << "Press 3 to select Populatin Structures " << endl;
        cout << "Press 4 to skip " << endl;
        cout << "Enter structure type --|====> ";
        cin >> structure_num;
    
        system("cls");
    }

    Engine* unity = new Engine;
    Town* city = new Town(150, 50, 200, 10, 1, 1);
    if (structure_num == 1) {

        city->buildStructure(unity->createStructure("Field", 1, 100));
    } 
    if (structure_num == 2) {
       
        city->buildStructure(unity->createStructure("Store", 2, 100));
    } 
    if (structure_num == 3) {
        
        city->buildStructure(unity->createStructure("Barracs", 3, 100));
    }
    if (structure_num == 4) {
        cout << "You skipped" <<endl ;
    }
}

int main(int argc, char* argv[])
{
    int Nation = 0;

    while (Nation > 3 || Nation < 1)
    {
        cout << "                                     --|====> Welcome to Magic Kingdom <====|-- " << endl << endl;
        cout << "Choose your Nation:" << endl << endl;
        cout << "Humans    (Easy)        1" << endl;
        cout << "Elfs      (Normal)      2" << endl;
        cout << "Dragons   (Hard)        3" << endl << endl;
        cout << "Your way: ";
        cin >> Nation;
        system("cls");
    }
    system("cls"); //Очистка консоли после выбора сложности

    Town* player = new Town(0, 0, 0, 0, 1, 1);

    if (Nation == 1) {
        player = new Town(150, 50, 200, 10, 1, 1);
    }
    else if (Nation == 2) {
        player = new Town(100, 40, 150, 10, 1, 1);
    }
    else if (Nation == 3) {
        player = new Town(50, 30, 100, 10, 1, 1);
    }

    player->Title();
    Market();
}

