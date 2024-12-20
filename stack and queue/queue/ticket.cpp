#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<string> ticketQueue;
    string command;

    while (true)
    {
        cout << "Enter a command (join, sell, display, or quit): ";
        cin >> command;

        if (command == "join")
        {
            string name;
            cout << "Enter your name: ";
            cin >> name;
            ticketQueue.push(name);
            cout << "You have joined the ticket queue." << endl;
        }

        else if (command == "sell")
        {
            if (ticketQueue.empty())
            {
                cout << "No one in the ticket queue." << endl;
            }
            else
            {
                string nextPerson = ticketQueue.front();
                ticketQueue.pop();
                cout << "Ticket sold to: " << nextPerson << endl;
            }
        }
        else if (command == "display")
        {
            if (ticketQueue.empty())
            {
                cout << "The ticket queue is empty." << endl;
            }
            else
            {
                cout << "Current ticket queue:" << endl;
                queue<string> tempQueue = ticketQueue;
                while (!tempQueue.empty())
                {
                    cout << tempQueue.front() << endl;
                    tempQueue.pop();
                }
            }
        }
        else if (command == "quit")
        {
            break;
        }
        else
        {
            cout << "Invalid command. Please try again." << endl;
        }
    }

    return 0;
}
