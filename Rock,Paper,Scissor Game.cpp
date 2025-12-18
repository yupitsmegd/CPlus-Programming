#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

int main()
{
    char count = 'y';
    int i;
    int min = 0;
    int max = 2;
    cout << "Wanna play?(y/n)" << endl;
    cin >> count;
  
    string game[] = {"rock", "paper", "scissor"};
    srand(time(0));
    while (count == 'y')
    {
        i = min + rand() % (max - min + 1);
        cout << "I gave " << game[i] << endl;
        cout << "Do you want to continue(y/n)?";
        cin >> count;
    };
    return 0;
}
