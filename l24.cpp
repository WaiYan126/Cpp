#include "iostream"
using namespace std;

// switch

int main(){
    int day;
    cin >> day;

    switch (day) {
        case 1:
            cout << "Math";
            break;
        case 2:
            cout << "English";
            break;
        case 3:
            cout << "Programming";
            break;
        case 4:
            cout << "Physics";
            break;
        case 5:
            cout << "Chemistry";
            break;
        case 6:
            cout << "ICT";
            break;
        case 7:
            cout << "Rest";
            break;
        default:
            cout << "Invalid input";
            break;
    }
    return 0;
}