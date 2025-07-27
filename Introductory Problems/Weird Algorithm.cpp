#include <iostream>
using namespace std;
void collatzSequence(long long n)
{
    cout << n << " ";
    if (n == 1)
    {
        return;
    }
    if (n % 2 == 0)
    {
        collatzSequence(n / 2);
    }
    else
    {
        collatzSequence(3 * n + 1);
    }
}

int main()
{
    long long num;
    cin >> num;
    collatzSequence(num);
    cout << endl;

    return 0;
}