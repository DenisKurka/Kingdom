#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include "TownStructure.h"
#include "Town.h"
#include "Engine.h"

using namespace std;

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

    Town* player;
    Engine* unity = new Engine(player);

    player = unity->chooseDifficulty(Nation);

    player->Title();
    unity->market();
}

