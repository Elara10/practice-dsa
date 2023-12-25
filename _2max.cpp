#include<bits/stdc++.h>
using namespace std;
int maxelement(int arr[],int n)
{
    int max=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
        
    }
    return max;
}
int main()
{
    int arr[]={4,5,17,3,2};
    int n=5;
    int max=maxelement(arr,n);
    cout<<"Maximum element in the array is "<<max<<endl;
}
