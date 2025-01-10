#include "iostream"
using namespace std;

// nested loop-1

int main(){
    int i;
    cin >> i;

    while (i > 0){
        int j = 0;
        while (j < 5){
            // cout << j+1;
            cout << "*";
            j++;
        }
        cout << endl;
        i--;
    }

    return 0;
}
