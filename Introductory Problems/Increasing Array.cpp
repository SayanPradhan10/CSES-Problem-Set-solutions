#include <bits/stdc++.h>
using namespace std;

int bubbleSort(vector<int> &v)
{
    int n = v.size();
    int count = 0;  

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (v[j] > v[j + 1])
            {
                swap(v[j], v[j + 1]);
                count++;
            }
        }
    }
    return count;
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    int result = bubbleSort(v);
    cout << result+1; 
    return 0;
}