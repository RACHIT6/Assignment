#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, count = 0, rem;

    cout<<"Enter the number: ";
    cin>>n;

    while (n != 0)
    {
        count++;
        n /= 10;
    }
    
    cout<<"The number has "<<count<<" digits";

    return 0;
}
