#include <iostream>
#include <string>
using namespace std;

int main(int argc, char **argv)
{
    //  WHILE
    int z;
    cout << "Enter a number" << endl;
    cin >> z;

    bool prime = true;
    int i = 2;

    while (i <= z / i)
    {
        int factor = z / i;
        if (factor * i == z)
        {
            cout << "factor found: " << factor << endl;
            prime = false;
            break;
        }
        i = i + 1;
    }

    cout << z << " is ";
    if (prime)
        cout << "prime" << endl;
    else
        cout << "not prime" << endl;

    // FOR
    int a;
    cout << "Enter a number" << endl;
    cin >> a;

    bool prime2 = true;
    for (int i = 2; i <= a / i; i = i + 1)
    {
        int factor = a / i;
        if (factor * i == a)
        {
            cout << "factor found: " << factor << endl;
            prime2 = false;
            break;
        }
    }

    cout << a << " is ";
    if (prime)
        cout << "prime" << endl;
    else
        cout << "not prime" << endl;

    // SWITCH
    int b;
    cout << "Enter a number, 0 to quit" << endl;
    cin >> b;
    while (b > 0)
    {
        switch (b)
        {
        case 1:
            cout << "you entered 1" << endl;
            break;
        case 2:
        case 3:
            cout << "you entered 2 or 3" << endl;
            break;
        case 4:
            cout << "you entered 4" << endl;
            break;
        case 5:
            cout << "you entered 5" << endl;
            break;
        default:
            cout << "you entered a number greater than 5" << endl;
        }
        cout << "Enter a number, 0 to quit" << endl;
        cin >> b;
    }

    // IF
    int x, y;
    cout << "Enter two numbers" << endl;
    cin >> x >> y;
    cout << x << " ";
    if (x > y)
    {
        cout << "is larger than ";
    }
    else
    {
        cout << "is not larger than ";
    }
    cout << y << endl;
    if (x + y > 10)
        cout << "Those are large numbers." << endl;
    //if there was y=3 here it is NOT part of the if statement
    return 0;
}