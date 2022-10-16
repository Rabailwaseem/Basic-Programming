#include <iostream>
#include <stdlib.h>
using namespace std;
bool flag = false;
int getRan();
int userCh();
void winner(int, int);
int main()
{
    int uCh = userCh();
    int cCh = getRan();
    if(uCh == cCh)
    {
        cout << "Both players have entered the same choice\nNo winner was decided" << endl;
    } 
    else
    winner(cCh, uCh);
}
int getRan()
{
    srand(time(0));
    int rn = rand() % 3 + 1;
    if (rn == 1) cout << "Computer has chosen Rock" << endl;
    if (rn == 2) cout << "Computer has chosen Paper" << endl;
    if (rn == 3) cout << "Computer has chosen Scissors" << endl;
    return rn;
}
int userCh()
{
    int c;
    cout << "Enter 1 for Rock, 2 for Paper, 3 for Scissors:" << endl;
    cin >> c;
    if (c == 1) cout << "You have chosen Rock" << endl;
    if (c == 2) cout << "You have chosen Paper" << endl;
    if (c == 3) cout << "You have chosen Scissors" << endl;
    return c;
}
void winner(int c, int u)
{
    cout << endl;
    if (c == 1 && u == 3) cout << "Computer is the winner" << endl;
    if (c == 3 && u == 2) cout << "You are the winner" << endl;
    if (c == 2 && u == 1) cout << "Computer is the winner" << endl;
    if (c == 3 && u == 1) cout << "You are the winner" << endl;
    if (c == 2 && u == 3) cout << "Computer is the winner" << endl;
    if (c == 1 && u == 2) cout << "You are the winner" << endl;
}