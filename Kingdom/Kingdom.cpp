#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include "TownStructure.h"
#include "Town.h"
#include "Engine.h"

using namespace std;

void Market() {
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
    }

    Engine* unity = new Engine;
    Town* city = new Town(150, 50, 200, 10, 1, 1);

    while (structure_type > 3 || structure_type < 1) {

        if (structure_type == 1) {
            cout << "         -|==> Shop <==|-" << endl;
            cout << "Press 1 to select Field:  100 coins " << endl;
            cout << "Press 2 to select Bakery: 200 coins " << endl;
            cout << "Press 3 to select Farm:   300 coins " << endl;
            cout << "Enter structure number --|====> ";
            cin >> structure_num;

            if (structure_num == 1) {

                city->buildStructure(unity->createStructure("Field", 1, 100));
            }
            if (structure_num == 2) {

                city->buildStructure(unity->createStructure("Bakery", 1, 200));
            }
            if (structure_num == 3) {

                city->buildStructure(unity->createStructure("Farm", 1, 300));
            }

        }

        if (structure_type == 2) {
            cout << "         -|==> Shop <==|-" << endl;
            cout << "Press 1 to select Store:          100 coins " << endl;
            cout << "Press 2 to select Bank:           200 coins " << endl;
            cout << "Press 3 to select Trade routes:   300 coins " << endl;
            cout << "Enter structure number --|====> ";
            cin >> structure_num;

            if (structure_num == 1) {

                city->buildStructure(unity->createStructure("Store", 1, 100));
            }
            if (structure_num == 2) {

                city->buildStructure(unity->createStructure("Bank", 1, 200));
            }
            if (structure_num == 3) {

                city->buildStructure(unity->createStructure("Trade routes", 1, 300));
            }
        }

        if (structure_type == 3) {
            cout << "         -|==> Shop <==|-" << endl;
            cout << "Press 1 to select Field:  100 coins " << endl;
            cout << "Press 2 to select Bank:   200 coins " << endl;
            cout << "Press 3 to select Farm:   300 coins " << endl;
            cout << "Enter structure number --|====> ";
            cin >> structure_num;

            if (structure_num == 1) {

                city->buildStructure(unity->createStructure("Barracs", 1, 100));
            }
            if (structure_num == 2) {

                city->buildStructure(unity->createStructure("Brothel", 1, 200));
            }
            if (structure_num == 3) {

                city->buildStructure(unity->createStructure("Residential quarter", 1, 300));
            }
        }
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

