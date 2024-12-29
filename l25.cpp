#include "iostream"
using namespace std;

// calculator

int main(){
    int a, b, ans = 0;
    cout << "Enter the numbers:";
    cin >> a >> b;
    char oper;
    cout << "Enter the operation:";
    cin >> oper;

    switch (oper) {
        case '+':
            ans = a + b;
            break;
        case '-':
            ans = a - b;
            break;
        case '*':
            ans = a * b;
            break;
        case '/':
            ans = a / b;
            break;
        default:
            cout << "Invalid operation";
            break;
    }
    cout << ans;
    return 0;
}