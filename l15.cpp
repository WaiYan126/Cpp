#include "iostream"
using namespace std;

// comparison operators (== != < > <= >=) -> returns boolean
// Logical operators(&&, ||, !) -> returns boolean

int main(){
    int age;
    cout << "Enter your age:";
    cin >> age;
    bool isAdult = age >= 18;
    bool passedTest = true;

    if (isAdult || passedTest){
        cout << "Qualified";
    } else{
        cout << "Rejected!";
    }

    cout << passedTest;
    return 0;
}