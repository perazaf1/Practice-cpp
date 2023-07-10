#include <iostream>

using namespace std;

int main()
{
    int x = 9, y = 2;
    int multiply = x * y;
    int remainder = x % y  ;
    cout << x << " multiplied by " << y << " is " << multiply << endl;
    cout << "The remainder of dividing " << x << " with " << y << " is " << remainder;

    int c = 5, d = 3;
    int sum = 5 + 3;
    int diff = 5 - 3;
    cout << "The sum of " << c << " and " << d << " is " << sum << endl;
    cout << "The difference between " << c << " and " << d << " is " << diff;

    int a, b;
    cin >> a >> b;
    cout << a + b << endl;
    cout << a - b << endl;
    cout << a * b << endl;
    cout << a / b;  

    int e = 5;
    e++;
    cout << e << endl;
    e--;
    e--;
    cout << e;

    return 0;
}


