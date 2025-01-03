#include "iostream"
using namespace std;

// arithmetic sequence, series

int main(){
    int d = 3, f = 1;
    int nth, counter = 1;
    cin >> nth;
    while (counter < nth){
        f += d;
        counter++;
    }
    cout << f;
    return 0;
}
