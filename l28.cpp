#include "iostream"
using namespace std;

// multiplication table
// factorial - N!  Example 5! = 5 x 4 x 3 x 2 x 1

int main(){
//    int num, counter = 1;
//    cin >> num;
//    while (counter <= 12){
//        cout << num << " * " << counter << " = " << num * counter << endl;
//        counter++;
//    }

    int num, result = 1;
    cin >> num;
    while (num > 0){
        result *= num;
        num--;
    }
    cout << "Factorial = " << result;
    return 0;
}
