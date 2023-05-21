#include <iostream>

using namespace std;

int main() {
    int points = 75;
    char grade;

    if(points < 70)
        grade = 'C';
    if(points < 90)
        grade = 'B';
    if(points > 90)
        grade = 'A';
        
    cout << "Your grade is: " << grade;

    return 0;
}

