#include <iostream>
#include <ctime>
#include <string>
#include <cstdlib>
using namespace std;

string gett(int len)
{
    string Password = "";
    string character = "qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM_1234567890";
    int charlen = character.size();
    srand(time(0));
    int rindex;
    for (int i = 0; i < len; i++)
    {
        rindex = rand() % charlen;
        Password = Password + character[rindex];
    }
    return Password;
}

int main()
{
    int len;
    cout << "Write your Password Length::" << endl;
    cin >> len;
    string Password;
    Password = gett(len);
    cout << "Your Password::" << Password;
    return 0;
}
