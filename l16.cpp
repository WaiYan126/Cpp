#include "iostream"
using namespace std;

// nested if
// the greatest number

int main(){
    int a, b, c;
    int greatest;
    cin >> a >> b >> c;

    if (a > b){
        if (a > c){
            greatest = a;
        } else{
            greatest = c;
        }
    } else{
        if (b > c){
            greatest = b;
        } else{
            greatest = c;
        }
    }

    cout << greatest << " is the greatest number.";
    return 0;
}