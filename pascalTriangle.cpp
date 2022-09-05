// print Pascal's triangle
// 1
// 1 1
// 1 2 1
// 1 3 3 1
// 1 4 6 4 1

#include <iostream>

using namespace std;

int factorial(int num)
{
    int fact = 1;
    for (int i = 2; i <= num; i++)
    {
        fact *= i;
    }
    return fact;
}

int nCr(int i, int j)
{
    int ans = factorial(i) / (factorial(j) * factorial(i - j));
    return ans;
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << nCr(i, j) << " ";
        }
        cout << endl;
    }
    return 0;
}