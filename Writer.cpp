/*  A program that allows the user to enter as many sentences to a file as he wants */


#include <iostream>
#include <string>
#include <fstream>
#include <limits>

using namespace std;

int main() {
    char c = 'y';
    // Open once outside the loop in append mode to keep all entries
    ofstream out("hyro.txt", ios::app); 

    if (!out) {
        cerr << "Couldn't open file!" << endl;
        return 1;
    }

    while (c == 'y' || c == 'Y') {
        string j = "";
        cout << "What do u want to pass?" << endl;
        
        // Clear input buffer before getline
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        getline(cin, j);
        
        out << j << "\n";
        
        cout << "Do you want to continue? (y/n): ";
        cin >> c;
    }
    
    out.close(); 
    return 0;
}
