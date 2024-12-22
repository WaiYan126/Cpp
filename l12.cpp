#include "iostream"
using namespace std;

// conditional statements-2

int main(){
    int mark;
    char grade;
    cin >> mark;

    if (mark < 0 || mark > 100){
        cout << "Invalid mark!";
    }
    else if (mark < 40){
        cout << "Fail!" << endl;
        grade = 'F';
    } else {
        cout << "Pass!" << endl;
        if (mark >= 40 && mark < 60){
            grade = 'C';
        } else if (mark >= 60 && mark < 80){
            grade = 'B';
        } else{
            grade = 'A';
        }
    }

    cout << grade;
}