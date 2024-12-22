#include "iostream"
using namespace std;

// conditional statements-1

int main(){
    int age;
    bool isAdult;
    cin >> age;

    if (age >= 18){
        isAdult = true;
    } else {
        isAdult = false;
    }

    cout << isAdult;
}