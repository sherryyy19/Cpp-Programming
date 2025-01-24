#include<iostream>
using namespace std;
int main(){

    /*
    Print Half Inverted Pyramid 
        * * * * *
        * * * *
        * * * 
        * *
        *     
*/
    int rows;

    cout << "Enter number of rows: ";
    cin >> rows;

    for(int i = rows; i >= 1; --i) {
        for(int j = 1; j <= i; ++j) {
            cout << "* ";
        }
        cout << endl;
    }

    system("pause");
    return 0;
}
