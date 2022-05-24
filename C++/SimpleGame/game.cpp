/*Program for RPG game
Mohammed Ansari- Student Programmer
*Written by Mohammed*/
#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;
int main()
{
    int selection = 0;
    int health = 0;
    char role[100];
    char msg[100];
    char answer = 'y';
    do
    {
        cout << "welcome to the world of the Incursion";
        cout << "please select a role";
        cout << "\n choose ... " << endl;
        cout << "1 for Count Doom" << endl;
        cout << "2 for the Countess of Crime" << endl;
        cout << "3 for the Spartan Warrior" << endl;
        cout << "4 for the Messenger of Incursion" << endl;
        cout << "5 for The Student" << endl;
        cout << "Beware! Make sure to choose right or you will be lost in an infinite loop" << endl;
        cin >> selection;

        switch (selection)
        {
        case 1:
        {
            strcpy_s(role, "Count Doom");
            strcpy_s(msg, "welcome ");
            strcat_s(msg, role);
            cout << msg << endl;
            cout << "We hope your role will be successful!\n";
            cout << "you have ... 100% health" << endl;
            health += 100;
            break;
        }
        case 2:
        {
            strcpy_s(role, "Countess of Crime");
            strcpy_s(msg, "Welcome ");
            strcat_s(msg, role);
            cout << msg << endl;
            cout << "May you achieve your objectives!\n";
            cout << "you have ... 75% health" << endl;
            health += 75;
            break;
        }

        case 3:
        {
            strcpy_s(role, "Spartan Warrior");
            strcpy_s(msg, "Welcome ");
            strcat_s(msg, role);
            cout << msg << endl;
            cout << "May you achieve your objectives!\n";
            cout << "you have ... 50% health" << endl;
            health += 50;
            break;
        }

        case 4:
        {
            strcpy_s(role, "Messenger Of Incursion");
            strcpy_s(msg, "Welcome ");
            strcat_s(msg, role);
            cout << msg << endl;
            cout << "May you achieve your objectives!\n";
            cout << "you have ... 25% health" << endl;
            health += 25;
            break;
        }
        case 5:
        {
            strcpy_s(role, "The Student");
            strcpy_s(msg, "Welcome ");
            strcat_s(msg, role);
            cout << msg << endl;
            cout << "You fell into the pit of no reutrn\nAll your objectives have been BLOWN TO SMITHEREENS!\n";
            cout << "you have ... 0% health" << endl;
            health += 0;
            system("pause");
            return 0;
        }
        default:
            cout << "invalid entry ... try again later" << endl;
        }

        // part 2 ... choosing a mission
        cout << "please select an objective";
        cout << "\n choose ... " << endl;
        cout << "1 for \"Get the Gold\"" << endl;
        cout << "2 for \"Capture the Fortress\"" << endl;
        cout << "3 for \"Enter the City\"" << endl;
        cout << "4 for \"Forest of Frenzy\"" << endl;
        cout << "5 for \"Battle for Midland\"" << endl;
        cout << "Beware! Make sure to choose right or you will be lost in an infinite loop" << endl;
        cin >> selection;
        int treasure = 0;
        switch (selection)
        {
        case 1:
        {
            treasure += 10;
            health += 10;
            cout << "Your mission is to retrieve the gold." << endl;
            cout << "Your initial score: " << treasure << endl;
            cout << "We wish that your mission is a success!" << endl;
            bool active = true;
            char motion = ' ';

            // game play keys defined
            cout << "Let the Games begin!" << endl
                 << endl;
            cout << "Use these keyboard keys for game play." << endl;
            cout << endl;
            cout << "Press w  a  s  d  and Enter for movement" << endl;

            if (active == true)
            // open loop block
            {
                // commence game play
                cout << endl;
                cout << "Enter the building (w) or" << endl;
                cout << "Bypass building and reach the Entrance of the Forest (a or d)" << endl;
                cout << endl;
                cin >> motion;

                // update game points
                if (motion == 'w' || motion == 'W')
                {
                    cout << "\nYou have entered the building and its empty"
                         << "\nYou decide to exit the building and end up at the entrance of the forest" << endl;
                    treasure += 20;
                }

                else
                    cout << "\nYou are at the entrance of the forest" << endl;
                treasure += 5;
                health += 5;

                // display current game points
                cout << "your treasure score : " << treasure << endl;
                cout << "your health : " << health << endl;

                // continue game play
                cout << endl;
                cout << "Enter into forest (w) or" << endl;
                cout << "Bypass forest and walk to the river (a)" << endl;
                cout << "Bypass forest and go to the mountains (d)" << endl;
                cout << "Run away (s)" << endl;
                cout << endl;
                cin >> motion;
            }

            if (motion == 'w' || motion == 'W')
            {
                cout << "You entered the forest and encountered your nemesis!\n"
                     << "Get ready for battle" << endl;
                cout << "You draw your sword\n"
                     << endl;
                cout << "Your nemesis dashes towards you and swings his sword\n"
                     << "What should you do?\n"
                     << "Press w for Striking back at the same time\n"
                     << "Press d to jump to the right and slash your nemesis\n"
                     << "Press a to jump to the left and slash your nemesis\n"
                     << "Press s to do nothing\n"
                     << endl;
                cin >> motion;
                if (motion == 'w' || motion == 'w')
                {
                    cout << "You strike back and kill him but take damage at the same time." << endl;
                    health -= 30;
                    cout << "THE NEMESIS DROPS SOMETHING.\n"
                         << "You pick it up.\n"
                         << "You got the Goblet of gold." << endl;
                    treasure += 100;
                }
                else if (motion == 'd' || motion == 'D')
                {
                    cout << "You dodge the attack and slash your nemesis\n"
                         << "THE NEMESIS DROPS DEAD\n"
                         << "You check the nemesis and get the Goblet of Gold\n"
                         << endl;
                    health += 10;
                    treasure += 100;
                }
                else if (motion == 'a' || motion == 'A')
                {
                    cout << "You dodge the attack and slash your nemesis\n"
                         << "THE NEMESIS DROPS DEAD\n"
                         << "You check the nemesis and get the Goblet of Gold" << endl;
                    health += 10;
                    treasure += 100;
                }
                else if (motion == 's' || motion == 'S')
                {
                    cout << "Your nemesis slashes you\n"
                         << "You lose all your health and your treasure is taken\n"
                         << endl;
                    treasure = 0;
                    health = 0;
                }
            }
            else if (motion == 'a' || motion == 'A')
            {
                cout << "You are at the bank of the river"
                     << "\nThe Gold is on the other side of the river"
                     << "\nThe current seems really strong"
                     << "\nWhat should you do"
                     << "\nSwim accross the river(Press w)"
                     << "\nBuild a raft using 50 of your treasure(Press a)"
                     << "\nTry to make the jump accross the river(Press d)"
                     << "\nDo nothing and camp" << endl;
                cin >> motion;
                if (motion == 'w' || motion == 'W')
                {
                    cout << "You managed to swim accross but the currents were too strong so you lost your health\n"
                         << endl;
                    health -= 30;
                    cout << "Congratulations you found the Loot" << endl;
                    treasure += 100;
                }
                else if (motion == 'a' || motion == 'A')
                {
                    cout << "You get accross without any trouble and lose no health"
                         << "\nCongratulations you found the Loot" << endl;
                    treasure += 100;
                }
                else if (motion == 'd' || motion == 'D')
                {
                    cout << "Are you serious? Like really, out of all the options you choose to jump."
                         << "\nYou get pulled away by the current and drown" << endl;
                    health = 0;
                    treasure -= 20;
                }
                else if (motion == 's' || motion == 'S')
                {
                    cout << "Your nemesis jumps at you and kills you"
                         << "\nYou are dead" << endl;
                    treasure -= 30;
                    health = 0;
                }
            }

            else if (motion == 'd' || motion == 'D')
            {
                cout << "You are at the foot of the mountain\n"
                     << "The gold is at the top"
                     << "\nWhat do you want to do" << endl;
                cout << "\nPress w for climbing the mountain"
                     << "\na to smash the mountain"
                     << "\nd to go around the mountain"
                     << "\ns to do nothing" << endl;
                cin >> motion;
                if (motion == 'w' || motion == 'W')
                {
                    cout << "\nYou have climbed the mountain but lose some health" << endl;
                    treasure += 100;
                    health -= 20;
                    cout << "You have retrieved the Gold" << endl;
                }
                else if (motion == 'a' || motion == 'A')
                {
                    cout << "\nYou really want to destroy the mountain? You serious? Since this is a game ill let it slide"
                         << "\nYou smashed the mountain and the gold drops to the ground "
                         << "\nYou picked it up" << endl;
                    cout << "\nCongratulations you got the gold" << endl;
                    treasure += 100;
                    health += 10;
                }
                else if (motion == 'd' || motion == 'D')
                {
                    cout << "\nYou keep going around the mountain for all eternity"
                         << "\nYou lose" << endl;
                    treasure = 0;
                    health = 0;
                }
                else if (motion == 's' || motion == 'S')
                {
                    treasure += 5;
                    cout << "your nemesis has defeated you!" << endl;
                    cout << "MUAHAHAHAH THERE IS NO STANDING AROUND DURING YOUR MISSION" << endl;
                    health = 0;
                }
            }
            else if (motion == ' ')
            {
                cout << "Invalid entry";
            }

            break;
        }
        case 2:
        {
            char motion = ' ';
            treasure += 20;
            health += 20;
            cout << "Your mission is to secure the fortress." << endl;
            cout << "Your initial score: " << treasure << endl;
            cout << "Would you like to enter the fortress" << endl;
            cout << "Press w to enter" << endl;
            cin >> motion;

            if (motion == 'a', 's', 'd', 'w' || motion == 'W', 'S', 'A', 'D')
                cout << ' ';
            {

                if (motion == 'w' || motion == 'W')

                {
                    cout << "You have entered the Fortress"
                         << "\nThe Lich King is guarding the fortress"
                         << "\nGet ready to battle" << endl;
                    cout << "You draw your sword" << endl;
                    cout << "The Lich King moves swiftly and attacks from above" << endl;
                    cout << "Press w to defend above\n"
                         << "a and d to defend your sides\n"
                         << "s to defend your back" << endl;
                    cin >> motion;
                    if (motion == 'w' || motion == 'W')
                    {
                        cout << "You successfully defend the Lich King's attack"
                             << "\nDo you want to move in for the strike?" << endl;
                        cout << "Hit w to strike" << endl;
                        cin >> motion;
                        if (motion == 'w' || motion == 'W')
                        {
                            cout << "You move in fast for the attack but\n"
                                 << "The Lich King swings his sword\n"
                                 << endl;
                            cout << "Press w a s d to dodge" << endl;
                            cin >> motion;
                            if (motion == 'w', 'a', 's', 'd' || motion == 'W', 'A', 'S', 'D')
                            {
                                cout << "You dodged and striked the Lich King in his heart\n"
                                     << "You won the battle and captured the fortress" << endl;
                                treasure += 100;
                                health += 10;
                            }
                        }
                    }
                    else if (motion == 'a', 's', 'd' || motion == 'A', 'S', 'D')
                    {
                        cout << "The Lich King slashes you and you are dead" << endl;
                        health = 0;
                    }
                }
            }

            break;
        }
        case 3:
        {
            char motion = ' ';
            treasure += 30;
            health += 30;
            cout << "Your mission is to find out what is raging havok in the city and eliminate the threat." << endl;
            cout << "Your initial score: " << treasure << endl;
            cout << "Are you ready to enter the city?" << endl;
            cout << "Press w to enter" << endl;
            cin >> motion;
            if (motion == 'w' || motion == 'W')
            {
                cout << "You have entered the city"
                     << "\nThe Big Bad Wolf is destroying the city and you have to stop him"
                     << "\nYou approach him and he jumps at you with his claws from above"
                     << "\nTime to battle" << endl;
                cout << "You draw your sword quick" << endl;
                cout << "The Big Bad Wolf moves swiftly and attacks from above" << endl;
                cout << "Press w to defend above\n"
                     << "a and d to defend your sides\n"
                     << "s to defend your back" << endl;
                cin >> motion;
                if (motion == 'w' || motion == 'W')
                {
                    cout << "You successfully defend the Wolf's attack"
                         << "\nDo you want to move in for the strike?" << endl;
                    cout << "Hit y for yes" << endl;
                    cin >> motion;
                    if (motion == 'y' || 'Y')
                    {
                        cout << "You move in fast for the attack but\n"
                             << "The Wolf swings his claws\n"
                             << endl;
                        cout << "Press w a s d to dodge" << endl;
                        cin >> motion;
                        if (motion == 'w', 'a', 's', 'd' || motion == 'W', 'A', 'S', 'D')
                        {
                            cout << "You dodged his claws and strike him in the stomach\n"
                                 << "The Big Bad Wolf is still moving and you need to deliver another blow" << endl;
                            cout << "The Wolf hits you away and you fall to the ground\n"
                                 << endl;
                            cout << "The Wolf jumps on you with his claws"
                                 << "\nWhat do you do?"
                                 << "\nPress w to roll up"
                                 << "\nPress a or d to roll on the side"
                                 << "\nPress s to roll down" << endl;
                            cin >> motion;
                            if (motion == 'w', 'a', 's', 'd' || motion == 'W', 'A', 'S', 'D')
                            {
                                cout << "You rolled away and stabbed he Wolf in his chest\n"
                                     << "You won the battle and now the city is at peace" << endl;
                                treasure += 100;
                                health += 10;
                            }
                            else
                            {
                                cout << "The Wolf slashes you and you are dead" << endl;
                                health = 0;
                            }
                        }
                    }
                }
            }
            else
            {
                cout << "IVALID ENTRY" << endl;
            }
            break;
        }

        case 4:
        {
            treasure += 40;
            health += 40;
            char motion = ' ';
            cout << "Your mission is to survive the forest." << endl;
            cout << "Your initial score: " << treasure << endl;
            cout << "Press w to swoop through the forest and get the gold" << endl;
            cin >> motion;
            if (motion == 'w' || motion == 'W')
                cout << "You succesfully passed the forest and survived" << endl;
            treasure += 50;
            break;
        }
        case 5:
        {
            treasure += 50;
            health += 50;
            char motion = ' ';
            cout << "Your mission is to attack Midland." << endl;
            cout << "Your initial score: " << treasure << endl;
            cout << "Press any key to attack and secure the Midland" << endl;
            cin >> motion;
            if (motion == ' ')
                cout << "Congratulation you secured the Midland" << endl;
            treasure += 50;

            break;
        }
        }
        // display current game points
        cout << "Mission is done" << endl;
        cout << "your treasure score : " << treasure << endl;
        cout << "your health : " << health << endl;

        cout << endl;
        cout << "the Game is over ... "
             << "time for homework" << endl;
        cout << "Do you want to replay the game?" << endl;
        cout << "Y/N" << endl;
        cin >> answer;

    } while (answer == 'y' || 'Y');
    system("pause");
    return 0;
}
