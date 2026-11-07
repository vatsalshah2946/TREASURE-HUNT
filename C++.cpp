#include <iostream>
using namespace std;
class TreasureHunt
{
private:
    int health;
    int treasure;

public:
    TreasureHunt()
    {
        health = 100;
        treasure = 0;
    }
    void startGame()
    {
        int choice;
        cout << "\n--- Treasure Hunt Adventure ---\n";
        cout << "You are lost in a jungle.\n";
        cout << "Health: " << health << "\n";
        cout << "\n1. Enter the Cave\n";
        cout << "2. Walk into the Forest\n";
        cout << "Enter your choice: ";
        cin >> choice;
        if (choice == 1)
            caveScene();
        else if (choice == 2)
            forestScene();
        else
            cout << "Invalid choice. Game Over.\n";
        showResult();
    }
    void caveScene()
    {
        int option;
        cout << "\nYou entered a dark cave.\n";
        cout << "1. Light a torch and explore\n";
        cout << "2. Follow a strange sound\n";
        cout << "Enter choice: ";
        cin >> option;
        if (option == 1)
        {
            int exploreChoice;
            cout << "\nYou discover an old chest.\n";
            cout << "1. Open the chest carefully\n";
            cout << "2. Ignore it and continue exploring\n";
            cin >> exploreChoice;

            if (exploreChoice == 1)
            {
                cout << "\nYou found treasure!\n";
                treasure += 80;
                health += 10;
            }
            else
            {
                cout << "\nA hidden trap activates!\n";
                health -= 25;
            }
        }
        else if (option == 2)
        {
            int soundChoice;
            cout << "\nYou see glowing eyes deeper in the cave.\n";
            cout << "1. Investigate\n";
            cout << "2. Run away\n";
            cin >> soundChoice;

            if (soundChoice == 1)
            {
                cout << "\nYou discover ancient coins!\n";
                treasure += 50;
            }
            else
            {
                cout << "\nBats attack while you escape!\n";
                health -= 20;
            }
        }
    }
    void forestScene()
    {
        int option;
        cout << "\nYou walk into the forest.\n";
        cout << "1. Climb a tall tree\n";
        cout << "2. Follow animal footprints\n";
        cout << "Enter choice: ";
        cin >> option;
        if (option == 1)
        {
            int treeChoice;
            cout << "\nAt the top you see fruits and a weak branch.\n";
            cout << "1. Pick fruits\n";
            cout << "2. Jump to another branch\n";
            cin >> treeChoice;

            if (treeChoice == 1)
            {
                cout << "\nThe fruits restore your energy.\n";
                health += 15;
            }
            else
            {
                cout << "\nThe branch breaks and you fall!\n";
                health -= 20;
            }
        }
        else if (option == 2)
        {
            int trackChoice;
            cout << "\nYou follow the tracks into thick bushes.\n";
            cout << "1. Search the bushes\n";
            cout << "2. Stay hidden and observe\n";
            cin >> trackChoice;

            if (trackChoice == 1)
            {
                cout << "\nYou find a pouch of coins!\n";
                treasure += 70;
            }
            else
            {
                cout << "\nA wild animal scratches you.\n";
                health -= 30;
            }
        }
    }
    void showResult()
    {
        if (health <= 0)
        {
            cout << "\nYou lost all health. Game Over!\n";
        }
        else
        {
            cout << "\nAdventure Completed!\n";
            cout << "Final Health: " << health << endl;
            cout << "Treasure Collected: " << treasure << endl;
        }
    }
};
int main()
{
    TreasureHunt game;
    game.startGame();
    return 0;
}