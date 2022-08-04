// A program that sums up the elements of a vector.
// By John Fam
// August 3 2022

#include <iostream>
#include <vector>
using namespace std;

inline void sum(int & p, int n, vector<int>& d)
{
    int i;
    p = 0;

    for(i = 0; i < d.size(); i++)
    {
        p += d[i];
    }
}

int main()
{
    const int N = 40;
    int i = 0;
    int accum = 0;
    vector<int>data(N);

    for(i = 0; i < N; ++i)
    {
        data[i] = i;
    }

    sum(accum, N, data);

    cout << "sum is " << accum << "\n" << endl;

    return 0;
}   
