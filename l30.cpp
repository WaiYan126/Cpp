#include "iostream"
using namespace std;

// if/else in loop
// break/continue

int main(){
    int i = 1;
    while (i < 10){
        if (i % 3 == 0){
            i++;
            break;
        }
        cout << i;
        i++;
    }
    return 0;
}
