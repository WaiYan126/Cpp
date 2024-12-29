#include "iostream"
#include "random"
#include "ctime"
using namespace std;

// random

int main(){
    srand(time(0));
    int a = rand();
    cout << a;
    return 0;
}