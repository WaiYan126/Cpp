#include "iostream"
using namespace std;

// while loop
// print even/odd
// sum of even/odd numbers

int main(){
    // Print until
//    int i, num = 1;
//    cin >> i;
//    while (num <= i){
//        cout << num << endl;
//        num += 1;
//    }

    // print even/odd
//    int i, num = 0;
//    cin >> i;
//    while (num <= i){
//        if (num % 2 == 0){
//            cout << num << endl;
//        }
//        num += 1;
//    }

    // sum of numbers
    int term, result = 0, current = 1;
    cin >> term;
    while (current <= term){
        result += current;
        current++;
    }
    cout << result;
    return 0;
}
