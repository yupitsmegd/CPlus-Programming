/*This system takes care of the amount of calories a diabetic person eats in a day and the count of sweets eaten*/

#include <iostream>
using namespace std;

class sweets
{
public:
    int N = 0, left = 0;

    int cals(int K, int sum = 0, int i = 1)
    {
        left = K;
        while (N <= K)
        {
            cout << "Sweet " << i << endl;
            cout << "Enter the calories in this sweet: ";
            cin >> sum;
            cout << "\n";
            if (sum <= left)
            {
                N += sum;
                i++;
                left = K - N;
            }
            else
            {
                break;
            }
        }
        cout << "Cals today:" << N << endl;
        cout << "No. of sweets eaten:" << i - 1;
    }
};

int main()
{
    int K;
    cout << "Today's calorie limit:";
    cin >> K;
    sweets h;
    h.cals(K);

    return 0;
}
