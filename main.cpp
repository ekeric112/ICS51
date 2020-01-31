#include <iostream>

using namespace std;

int createHist(int array[26]);

int main() {
    int array[26] ={300,0,0,1,5,0,1,0,2,0,0,1,0,0,0,3,0,2,3,2,0,0,0,0,0,300};
    cout << createHist(array);
    return 0;
}

int createHist(int array[26]) {
    int entries = 0;
    for (int i = 0; i < 26; ++i) {
        int occ = array[i];
        if (occ < 0){
            return -1;
        }
        //if its valid
        char character = i + 97; //change to lowercase letter
        if (occ > 0){
            entries++;
            cout << character;
            cout << ":";
            for (int j = 0; j < occ; ++j) {
                cout << "*";
            }
            cout << endl;
        }

    }


    return entries;
}

