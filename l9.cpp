#include "iostream"
using namespace std;

// swap the data of two variables

int main(){
    int a = 10;
    int b = 5;
    int c;

    c = a;
    a = b;
    b = c;
    cout << a << endl;
    cout << b << endl;
    return 0;
}