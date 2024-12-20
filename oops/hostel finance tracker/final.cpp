#include <bits/stdc++.h>
using namespace std;

// ####################################                        FINANCE TRACKER                                       ######################################################### //

// VERY FIRST STEP WAS TO MAKE  A USER CLASS WHOSE TASK IS TO : REPRESENT THE USER OF FINANCE TRACKER AND MANAGE THERE FINANCIAL DATA
//**************************METHODS***********************************************************//

// ADDINCOME
// ADDEXPENSE
// CALCULATE BALANCE
// VIEW transacation
// VIEW SUMMARY

//*****************************ATTRIBUTES******************************************************//

// NAME
// BALACE
// TRANSACTIONS

class user
{
    // ill decalre the attributes for the user class

private:
    string name;
    double balace;
    vector<Transaction *> transaction;

public:
};

// we will test our functions incrementally here in the main function
int main()
{
    cout << "WELCOME TO YOUR PERSONAL FINANCE TRACKER APP " << endl;
}