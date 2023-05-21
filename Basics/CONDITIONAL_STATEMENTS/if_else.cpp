#include <iostream>

using namespace std;

int main()
{
    // Enter your code here
    int num;
    cin >> num;

    if (num > 18 || num < 6)
        cout << "Night";
    else 
        cout << "Day";

}