/*
    Print Half Pyramid usign Alphabets
        A
        B B
        C C C
        D D D D
        E E E E E
*/

#include<iostream>
using namespace std;
int main(){

    char input, alphabet = 'A';

    cout << "Enter the uppercase character you want to print in the last row: ";
    cin >> input;

    // convert input character to uppercase
    input = toupper(input);

    for(int i = 1; i <= (input-'A'+1); ++i) {
        for(int j = 1; j <= i; ++j) {
            cout << alphabet << " ";
        }
        ++alphabet;

        cout << endl;
    }
    system("pause");
    return 0;
}
