#include <iostream>
using namespace std;
#include <curl/curl.h>

signed long long x=200;
signed long long arr[200];

void fibonacci()
{
    arr[0] = 1;
    arr[1] = 1;
    for (signed long long i = 2; i < x; i++)
    {
        arr[i] = arr[i-1] + arr[i-2];
    }
}

int main()
{
    fibonacci();
    long long  n;
    cin >> n;
    while (n != -1 && n > 1)
    {
        for (signed long long i = 0; i < x; i++)
        {
            string s ="";
            if (n==arr[i])
            {
                s+=arr[i];
                s+="-";
                s+=arr[i];
                cout<<arr[i]<<"-"<<arr[i]<<endl;
                break;
            }
            if (n>arr[i] && n<arr[i+1])
            {
                s+=arr[i];
                s+="-";
                s+=arr[i+1];
                cout<<arr[i]<<"-"<<arr[i+1]<<endl;
                break;
            }
        }
        cin >> n;
    }
}