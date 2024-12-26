#include "iostream"
using namespace std;

// Positive, Negative, or Zero
// Expression - final value -> 1

int main(){
    int x;
    cin >> x;

    char ans = x == 0 ? 'Z' : (x > 0 ? 'P' : 'N');
    cout << ans;
    return 0;
}