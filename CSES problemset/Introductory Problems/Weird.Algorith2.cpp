#include <iostream>
using namespace std;
void collatzSequence(long long n)
{

    while (n != 1)
    {
        cout << n << " ";
        if (n % 2 == 0)
        {

            n /= 2;
        }
        else
        {

            n = 3 * n + 1;
        }
    }
    cout << n << endl;
}

int main()
{
    long long num;
    cin >> num;
    collatzSequence(num);

    return 0;
}
