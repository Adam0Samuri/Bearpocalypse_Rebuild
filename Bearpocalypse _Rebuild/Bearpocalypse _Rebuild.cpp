// Bearpocalypse _Rebuild.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
#include <string>
std::string username;
int i;
int m;
/* Variables Global Vairables
      d       i,m, username*/
      // Correct answers are 2,4,1,4,2
void Pak() //press any key to continue
{
    using namespace std;
    cout << "Press any key to continue" << endl;
    do{} while (cin.get() != '\n');
}

void Pta() //used for decisions
{
    using namespace std;
    cout << "Please try again" << endl;
}

void Cscreen()// Used to clear Screen
{
    using namespace std;
    cout << string(50, '\n');
}

void Dscreen()
{
    using namespace std;
    m = i + 1;
    i = m;
    cout << "You have been Mauled " << m << " times!" << endl;
    Pak();
    system("cls");
}

void Prologue()
{
    using namespace std;
    system("cls");
    cout << "┌──────────────────────────┐" << endl;
    cout << "│Hello Adveturer welcome to│" << endl;
    cout << "│ the land of Alagaesia    │" << endl;
    cout << "└──────────────────────────┘" << endl;
    Pak();
    system("cls");
    cout << "┌─────────────────────────────────┐" << endl;
    cout << "│ You have awoken lost in a       │" << endl;
    cout << "│ clearing, of a dark, petrified  │" << endl;
    cout << "│ forest. You look around and find│" << endl;
    cout << "│ a backpack, which you believe is│" << endl;
    cout << "│ yours. You decide to search it. │" << endl;
    cout << "└─────────────────────────────────┘" << endl;
    Pak();
    system("cls");
    cout << "┌─────────────────────────────────┐" << endl;
    cout << "│ Inside the backpack you find a  │" << endl;
    cout << "│ small, metal compass, and a     │" << endl;
    cout << "│ note, adressed to you. You      │" << endl;
    cout << "│ decide to read the note.        │" << endl;
    cout << "└─────────────────────────────────┘" << endl;
    Pak();
    system("cls");
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << "Hello " << username << endl;
    cout << "I know you must be confused, but if" << endl;
    cout << "you head to the town south of you, " << endl;
    cout << "and find me at the chapel, I will  " << endl;
    cout << "explain everything.                " << endl;
    cout << " - Galkero " << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << "┌─────────────────────────────────┐" << endl;
    cout << "│1. You head east towards a river.│" << endl;
    cout << "│2. You head south towards town.  │" << endl;
    cout << "│3. You head west, deeper into the│" << endl;
    cout << "│   forest.                       │" << endl;
    cout << "│4. You head north towards Black  │" << endl;
    cout << "│   Rock Mountain.                │" << endl;
    cout << "└─────────────────────────────────┘" << endl;
    cout << "Please choose a number" << endl;
}

void Mountain()// Decision 1 Option 4
{
    system("clear");
    using namespace std;
    cout << "┌─────────────────────────────────┐" << endl;
    cout << "│ You find a pack of miniature    │" << endl;
    cout << "│ grizzly bears, it mauls you.    │" << endl;
    cout << "└─────────────────────────────────┘" << endl;
    Pak();
} //Decision 1 Option 4

void Cave()// Decision 1 Option 3
{
    system("cls");
    using namespace std;
    cout << "┌─────────────────────────────────┐" << endl;
    cout << "│ You find a cave and decide to   │" << endl;
    cout << "│ enter, ignoring bear signs.     │" << endl;
    cout << "└─────────────────────────────────┘" << endl;
    Pak();
    system("cls");
    cout << "┌─────────────────────────────────┐" << endl;
    cout << "│You go inside the cave and find a│" << endl;
    cout << "│large grizzly bear, it mauls you.│" << endl;
    cout << "└─────────────────────────────────┘" << endl;
    Pak();
}// Decision 1 Option 3

void River()// Decision 1 Option 1
{
    system("cls");
    using namespace std;
    cout << "┌─────────────────────────────────┐" << endl;
    cout << "│You get to the river and find a  │" << endl;
    cout << "│large grizzly bear, it mauls you.│" << endl;
    cout << "└─────────────────────────────────┘" << endl;
    Pak();
}// Decision 1 Option 1

void TownGate()// Decision 1 Option 2
{
    system("cls");
    using namespace std;
    cout << "┌─────────────────────────────────┐" << endl;
    cout << "│ You get to the town and find the│" << endl;
    cout << "│ gate closed, with a guard posted│" << endl;
    cout << "│ at it, you approach him.        │" << endl;
    cout << "└─────────────────────────────────┘" << endl;
    Pak();
    system("cls");
    cout << "Guard: Stop, Who are you?" << endl;
    cout << "       " << username << "?" << endl;
    cout << "       What an odd name." << endl;
    Pak();
    system("cls");
    cout << "Guard: Well, I don't recognize you, " << endl;
    cout << " and I was ordered to guard the town," << endl;
    cout << " with my pocket bear Jacobi, and to " << endl;
    cout << " not to let anyone into town.       " << endl;
    cout << "┌─────────────────────────────────┐" << endl;
    cout << "│1. Try and bribe the guard, with │" << endl;
    cout << "│   the contents of your pocket.  │" << endl;
    cout << "│2. Attempt to sneak past the     │" << endl;
    cout << "│   Guard, and over the wall.     │" << endl;
    cout << "│3. Charge the guard, and punch   │" << endl;
    cout << "│   him in the face.              │" << endl;
    cout << "│4. Make fun of the Guards silly  │" << endl;
    cout << "│   uniform.                      │" << endl;
    cout << "└─────────────────────────────────┘" << endl;
    cout << "Please choose a number" << endl;
}// Decision 1 Option 2

void BribeG()// Decision 2 Option 1
{
    using namespace std;
    system("cls");
    cout << "┌─────────────────────────────────┐" << endl;
    cout << "│ You attempt to bribe the Guard, │" << endl;
    cout << "│ with the lint, and various      │" << endl;
    cout << "│ fungi, you find in your pocket. │" << endl;
    cout << "└─────────────────────────────────┘" << endl;
    Pak();
    system("cls");
    cout << "Guard:What is this supposed to be, " << endl;
    cout << "     A BRIBE?! Who would want this!" << endl;
    cout << "┌─────────────────────────────────┐" << endl;
    cout << "│ He throws Jacobi, the pocket    │" << endl;
    cout << "│ bear, at you. It mauls you.     │" << endl;
    cout << "└─────────────────────────────────┘" << endl;
    Pak();
}// Decision 2 Option 1

void MockG()// Decision 2 Option 4
{
    using namespace std;
    system("cls");
    cout << "┌─────────────────────────────────┐" << endl;
    cout << "│ You compare the Guard's uniform,│" << endl;
    cout << "│ to a particularly ugly animal,  │" << endl;
    cout << "│ causing the Guard to run away   │" << endl;
    cout << "│ crying. You walk into the town. │" << endl;
    cout << "└─────────────────────────────────┘" << endl;
    Pak();
    system("cls");
    cout << "┌─────────────────────────────────┐" << endl;
    cout << "│ Where do you go in the Town?    │" << endl;
    cout << "└─────────────────────────────────┘" << endl;
    cout << "┌─────────────────────────────────┐" << endl;
    cout << "│ 1. The chapel, to meet Galkero. │" << endl;
    cout << "│ 2. The Town's Inn.              │" << endl;
    cout << "│ 3. The Town's Center.           │" << endl;
    cout << "│ 4. Look around at the Town's    │" << endl;
    cout << "│ shops, for some supplies.       │" << endl;
    cout << "└─────────────────────────────────┘" << endl;
    cout << "Please choose a number" << endl;
}// Decision 2 Option 4

void AttackG()// Decision 2 Option 3
{
    using namespace std;
    system("cls");
    cout << "┌─────────────────────────────────┐" << endl;
    cout << "│ You miss the Guard, and he      │" << endl;
    cout << "│ throws Jacobi at you!           │" << endl;
    cout << "└─────────────────────────────────┘" << endl;
    Pak();
}// Decision 2 Option 3

void SneakG()// Decision 2 Option 2
{
    using namespace std;
    system("cls");
    cout << "┌─────────────────────────────────┐" << endl;
    cout << "│ You decide to use some crates,  │" << endl;
    cout << "│ that you see stacked next to    │" << endl;
    cout << "│ the wall, to try and climb over.│" << endl;
    cout << "└─────────────────────────────────┘" << endl;
    Pak();
    system("cls");
    cout << "┌─────────────────────────────────┐" << endl;
    cout << "│ You accidentally knock over, one│" << endl;
    cout << "│ of the boxes, and a bear comes  │" << endl;
    cout << "│ out. It mauls you.              │" << endl;
    cout << "└─────────────────────────────────┘" << endl;
    Pak();
}// Decision 2 Option 2

void Tmeet()// Decision 3 Option 1
{
    using namespace std;
    system("cls");
    cout << "┌─────────────────────────────────┐" << endl;
    cout << "│ You head to the chapel, and     │" << endl;
    cout << "│ find Galkero. You go talk with  │" << endl;
    cout << "│ Galkero, in hopes of getting an │" << endl;
    cout << "│ explanation.                    │" << endl;
    cout << "└─────────────────────────────────┘" << endl;
    Pak();
    system("cls");
    cout << "Galkero: Hello " << username << ", " << endl;
    cout << " sorry for just leaving you in the " << endl;
    cout << " woods like that, I had to hurry   " << endl;
    cout << " back to town. To help the town get" << endl;
    cout << " ready for the Bearpocalypse. If   " << endl;
    cout << " you want to help, come with me to " << endl;
    cout << " kill the King Bear." << endl;
    cout << "┌─────────────────────────────────┐" << endl;
    cout << "│ 1. Find a way to become the     │" << endl;
    cout << "│ King Bear.                      │" << endl;
    cout << "│ 2. Hide in the Woods.           │" << endl;
    cout << "│ 3. Stay in the Town.            │" << endl;
    cout << "│ 4. Go kill the King Bear.       │" << endl;
    cout << "└─────────────────────────────────┘" << endl;
    cout << "Please choose a number" << endl;
}// Decision 3 Option 1

void Tinn()// Decision 3 Option 2
{
    using namespace std;
    system("cls");
    cout << "┌─────────────────────────────────┐" << endl;
    cout << "│ You head to the inn, the inn is │" << endl;
    cout << "│ apparently famous, because the  │" << endl;
    cout << "│ inn keeper tamed a bear, and    │" << endl;
    cout << "│ trained it to be a waiter. It   │" << endl;
    cout << "│ has never even Grawr'd at a     │" << endl;
    cout << "│ customer before. It mauls you.  │" << endl;
    cout << "└─────────────────────────────────┘" << endl;
    Pak();
}// Decision 3 Option 2

void Tcenter()// Decision 3 Option 3
{
    using namespace std;
    system("cls");
    cout << "┌─────────────────────────────────┐" << endl;
    cout << "│ You head to the Town Center,    │" << endl;
    cout << "│ and find some famous performers │" << endl;
    cout << "│ have set up here, they are      │" << endl;
    cout << "│ famous for their dancing bear.  │" << endl;
    cout << "│ You decide to stay and watch it.│" << endl;
    cout << "│ It mauls you.                   │" << endl;
    cout << "└─────────────────────────────────┘" << endl;
    Pak();
}// Decision 3 Option 3

void Tshop()// Decision 3 Option 4
{
    using namespace std;
    system("cls");
    cout << "┌─────────────────────────────────┐" << endl;
    cout << "│ You look around the town, and   │" << endl;
    cout << "│ and find a pet shop, you decide │" << endl;
    cout << "│ to enter, and look around.      │" << endl;
    cout << "└─────────────────────────────────┘" << endl;
    Pak();
    system("clear");
    cout << "┌─────────────────────────────────┐" << endl;
    cout << "│ Inside the pet store, you find  │" << endl;
    cout << "│ some pet Bears for sale. One of │" << endl;
    cout << "│ them breaks out of its cage. It │" << endl;
    cout << "│ mauls you.                      │" << endl;
    cout << "└─────────────────────────────────┘" << endl;
    Pak();
}// Decision 3 Option 4

void BecomeKB()//Decision 4 Option 1
{
    using namespace std;
    system("cls");
    cout << "┌─────────────────────────────────┐" << endl;
    cout << "│ You decide, to become the King  │" << endl;
    cout << "│ Bear, and to create peace       │" << endl;
    cout << "│ between man and bears, You      │" << endl;
    cout << "│ think that you can manage to    │" << endl;
    cout << "│ achieve this, by lots of        │" << endl;
    cout << "│ medidation near the bears. So   │" << endl;
    cout << "│ you go to the woods, and find a │" << endl;
    cout << "│ pack of bears,and you begin to  │" << endl;
    cout << "│ meditate near it.It mauls you.  │" << endl;
    cout << "└─────────────────────────────────┘" << endl;
    Pak();
}//Decision 4 Option 1

void HideinWoods()//Decision 4 Option 2
{
    using namespace std;
    system("cls");
    cout << "┌─────────────────────────────────┐" << endl;
    cout << "│ You head out to the woods, in   │" << endl;
    cout << "│ hopes of hiding from this,      │" << endl;
    cout << "│ terrifying Bearpocalypse. You   │" << endl;
    cout << "│ decide to go to the woods, and  │" << endl;
    cout << "│ make yourself a small log cabin.│" << endl;
    cout << "└─────────────────────────────────┘" << endl;
    Pak();
    system("cls");
    cout << "┌─────────────────────────────────┐" << endl;
    cout << "│ After years of chopping trees,  │" << endl;
    cout << "│ cutting them into logs, of the  │" << endl;
    cout << "│ correct size. You decide to add │" << endl;
    cout << "│ a fireplace, and find a quarry  │" << endl;
    cout << "│ where you can get stone for it. │" << endl;
    cout << "└─────────────────────────────────┘" << endl;
    Pak();
    system("cls");
    cout << "┌─────────────────────────────────┐" << endl;
    cout << "│ You head to the quarry, and     │" << endl;
    cout << "│ encounter a bear on the way. It │" << endl;
    cout << "│ mauls you.                      │" << endl;
    cout << "└─────────────────────────────────┘" << endl;
    Pak();
}//Decision 4 Option 2

void StayinTown()//Decision 4 Option 3
{
    using namespace std;
    system("cls");
    cout << "┌─────────────────────────────────┐" << endl;
    cout << "│You enjoy the peaceful atmosphere│" << endl;
    cout << "│ of the town, so much that you   │" << endl;
    cout << "│ decide to just live in the town.│" << endl;
    cout << "│ However since you are broke, you│" << endl;
    cout << "│ have to live on the streets as a│" << endl;
    cout << "│ begger. You become close with   │" << endl;
    cout << "│ one of the stray dogs, and try  │" << endl;
    cout << "│ to buy a toy for it at the      │" << endl;
    cout << "│ local pet store.                │" << endl;
    cout << "└─────────────────────────────────┘" << endl;
    Pak();
    system("clear");
    cout << "┌─────────────────────────────────┐" << endl;
    cout << "│ While looking for the dog toys, │" << endl;
    cout << "│ you find the pet Bears. One of  │" << endl;
    cout << "│ them breaks out of its cage. It │" << endl;
    cout << "│ mauls you.                      │" << endl;
    cout << "└─────────────────────────────────┘" << endl;
}//Decision 4 Option 3

void KillKB()//Decision 4 Option 4
{
    using namespace std;
    system("cls");
    cout << "┌─────────────────────────────────┐" << endl;
    cout << "│ You decide to go and kill, the  │" << endl;
    cout << "│ King Bear, and end this terrible│" << endl;
    cout << "│ Bearpocalypse, however you need │" << endl;
    cout << "│ help to kill him. Who do you    │" << endl;
    cout << "│ ask for help?                   │" << endl;
    cout << "└─────────────────────────────────┘" << endl;
    cout << "┌─────────────────────────────────┐" << endl;
    cout << "│ 1.Hire a mercenary who calls    │" << endl;
    cout << "│   himself Grawr.                │" << endl;
    cout << "│ 2.Ask Galkero to help you.      │" << endl;
    cout << "│ 3.Just try and do it alone.     │" << endl;
    cout << "│ 4.Get the townspeople to help   │" << endl;
    cout << "└─────────────────────────────────┘" << endl;
    cout << "Please choose a number" << endl;
}//Decision 4 Option 4

void Fwgrawr()//Decision 5 Option 1
{
    using namespace std;
    system("cls");
    cout << "┌─────────────────────────────────┐" << endl;
    cout << "│ You find the mercenary Grawr,   │" << endl;
    cout << "│ and ask how much money he would │" << endl;
    cout << "│ want to help you, kill the King │" << endl;
    cout << "│ Bear. His reply is a loud Grawr.│" << endl;
    cout << "│ he then reveals that he was a   │" << endl;
    cout << "│ a bear in disguise. You try to  │" << endl;
    cout << "│ run, from the bear that was     │" << endl;
    cout << "│ Grawr, but you are too slow.    │" << endl;
    cout << "│ It mauls you.                   │" << endl;
    cout << "└─────────────────────────────────┘" << endl;
    Pak();
}//Decision 5 Option 1

void Fwgalkero()//Decision 5 Option 2
{
    using namespace std;
    system("cls");
    cout << "┌─────────────────────────────────┐" << endl;
    cout << "│ You and Galkero set out to end  │" << endl;
    cout << "│ the King Bear, and this horrific│" << endl;
    cout << "│ Bearpocalypse. When you reach   │" << endl;
    cout << "│ the King Bear, it seems scared  │" << endl;
    cout << "│ of Galkero, and about to run.   │" << endl;
    cout << "│ Galkero manages to cut its leg, │" << endl;
    cout << "│ before it can. Then after a     │" << endl;
    cout << "│ heroic battle you and Galkero,  │" << endl;
    cout << "│ emerge victorious.              │" << endl;
    cout << "└─────────────────────────────────┘" << endl;
    Pak();
}//Decision 5 Option 2

void Falone()//Decision 5 Option 3
{
    using namespace std;
    system("cls");
    cout << "┌─────────────────────────────────┐" << endl;
    cout << "│ You find the King Bear, and try │" << endl;
    cout << "│ to kill it on your own, the     │" << endl;
    cout << "│ King Bear laughs at you, then,  │" << endl;
    cout << "│ it mauls you.                   │" << endl;
    cout << "└─────────────────────────────────┘" << endl;
    Pak();
}//Decision 5 Option 3

void Fwtp()//Decision 5 Option 4
{
    using namespace std;
    system("cls");
    cout << "┌─────────────────────────────────┐" << endl;
    cout << "│ You gather the townspeople and  │" << endl;
    cout << "│ convince them to form a militia,│" << endl;
    cout << "│ and help you kill the King Bear.│" << endl;
    cout << "└─────────────────────────────────┘" << endl;
    Pak();
    system("cls");
    cout << "┌─────────────────────────────────┐" << endl;
    cout << "│ Once you and the militia find   │" << endl;
    cout << "│ the King Bear, and attack, the  │" << endl;
    cout << "│ militia get scared, and abandon │" << endl;
    cout << "│ you. The King Bear laughs at    │" << endl;
    cout << "│ your attempt, and then it mauls │" << endl;
    cout << "│ you.                            │" << endl;
    cout << "└─────────────────────────────────┘" << endl;
    Pak();
}//Decision 5 Option 4

void Credits()
{
    using namespace std;
    int m;
    string username;
    m = i;
    system("cls");
    cout << "Congratulations, " << username << "you" << endl;
    cout << "have slain the King Bear, and ended" << endl;
    cout << "the Bearpocalypse." << endl;
    cout << "You managed to only get mauled " << m << " times!" << endl;
    cout << "Press 1 to play again" << endl;
    cout << "Press 2 to quit" << endl;
}

int main()
{
    i = 0; //Used for mauling counter
    std::cout << "Please enter your name" << std::endl;
    std::cin >> username;
start:; //Start point
    using namespace std;
    Prologue();
    int d; //Decisions
    cin >> d;
    if (d == 1)
    {
        River();
        Dscreen();
        goto start;
    }
    if (d == 3)
    {
        Cave();
        Dscreen();
        goto start;
    }
    if (d == 4)
    {
        Mountain();
        Dscreen();
        goto start;
    }
    if (d == 2)
    {
        TownGate();
        cin >> d;
        if (d == 1)
        {
            BribeG();
            Dscreen();
            goto start;
        }
        if (d == 2)
        {
            SneakG();
            Dscreen();
            goto start;
        }
        if (d == 3)
        {
            AttackG();
            Dscreen();
            goto start;
        }
        if (d == 4)
        {
            MockG();
            cin >> d;
            if (d == 4)
            {
                Tshop();
                Dscreen();
                goto start;
            }
            if (d == 3)
            {
                Tcenter();
                Dscreen();
                goto start;
            }
            if (d == 2)
            {
                Tinn();
                Dscreen();
                goto start;
            }
            if (d == 1)
            {
                Tmeet();
                cin >> d;
                if (d == 1)
                {
                    BecomeKB();
                    Dscreen();
                    goto start;
                }
                if (d == 2)
                {
                    HideinWoods();
                    Dscreen();
                    goto start;
                }
                if (d == 3)
                {
                    StayinTown();
                    Dscreen();
                    goto start;
                }
                if (d == 4)
                {
                    KillKB();
                    cin >> d;
                    if (d == 1)
                    {
                        Fwgrawr();
                        Dscreen();
                        goto start;
                    }
                    if (d == 3)
                    {
                        Falone();
                        goto start;
                    }
                    if (d == 4)
                    {
                        Fwtp();
                        Dscreen();
                        goto start;
                    }
                    if (d == 2)
                    {
                        Fwgalkero();
                        Credits();
                        cin >> d;
                        if (d == 1)
                        {
                            goto start;
                        }
                        if (d == 2)
                        {
                            cout << "Thanks for Playing!" << endl;
                        }
                    }
                }
            }
        }
    }
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
