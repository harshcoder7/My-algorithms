// alright i am writing this very basic code just to understand how this thing works overall

//  I WILL MAKE CLASSES CHARACTERS (BASE CLASS ), CLASS FIGHTER WHICH WILL INHERIT FROM CHARCTER USING VIRTUAL FUNCTION
// AND WILL MAKE TWO CLASSES OF WARRIOR AND MAGE AND WILL MAKE A FUNCTION FOR BATTLE FOR MAIN LOGIC

// Develop the Battle Function (battle())

// Execute a turn-based attack loop.
// Display health after each attack.
// End battle when one player’s health reaches zero.

#include <bits/stdc++.h>
using namespace std;
#include <iostream>

// BASE CLASS

class Character
{
protected:
    string name;
    int health;

public:
    Character(string n, int h) : name(n), health(h) {}; // initialized a constructor for name and health

    // done with initializing the constructor now need to check if the character is still alive
    bool isalive()
    {
        return health > 0;
    }

    // need to reduce health when damage is done

    void takedamage(int damage)
    {
        health -= damage;
        if (health < 0)
            health = 0;
    }

    // also need to show the status of the user who is alive or dead

    void display()
    {
        cout << name << " | Health : " << health << endl;
    }

    // getting the character name

    string getname()
    {
        return name;
    }

    // will write a pure virtual function attack which can be changes later on by anyone

    virtual void attack(Character &target) = 0; // here we are using a charcter as a referebce cause when we will attack someone other its going to be a sublass of the  base class
};

// done with the base class now lets write fighter class which use virtual funciton

class Fighter : public virtual Character
{
public:
    Fighter(string n, int h) : Character(n, h) {};
};

// ===============================
//  Derived Class: Warrior
// ===============================

class Warrior : public Fighter
{
public:
    // lets write the logic for attack
    Warrior(string n) : Character(n, 100),
                        Fighter(n, 100) {}

    void attack(Character &target) override
    {
        int damage = 20 + (rand() % 10);

        cout << name << " swings sword and deals" << damage << " damage!\n";
        target.takedamage(damage);
    }
};

// ===============================
//  Derived Class: Mage
// ===============================
class Mage : public Fighter
{
public:
    // Mage starts with 80 health
    Mage(string n) : Character(n, 80), Fighter(n, 80) {}

    // Mage attack function (magic attack)
    void attack(Character &target) override
    {
        int damage = 25 + (rand() % 10); // Random damage between 25-34
        cout << name << " casts Fireball and deals " << damage << " damage!\n";
        target.takedamage(damage);
    }
};

// lets write the main function for battle function

void battle(Character &p1, Character &p2)
{
    cout << "the battle is between " << p1.getname() << " AND " << p2.getname() << endl;

    // they need to continue to keep fighting until one of them dies soo we can easily do this

    while (p1.isalive() && p2.isalive())
    {
        p1.attack(p2);
        if (!p2.isalive())
            break;
        p2.attack(p1);
    }
    // Display battle result
    cout << "\n===== Battle Over! =====\n";
    if (p1.isalive())
    {
        cout << p2.getname() << " has fallen!\n";
    }
    else
    {
        cout << p1.getname() << " has fallen!\n";
    }
}

// lets write the main function where i will call everything

int main()
{
    srand(time(0)); // Seed random number generator for attack damage variation
    Warrior thor("thor");
    Mage merlin("Merlin");

    // lets display the initial states
    thor.display();
    merlin.display();

    // lets start the battle

    battle(thor, merlin);
    return 0;
}