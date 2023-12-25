#include<iostream>
using namespace std;
int main()
{
  
    int sum=0;
    int arr[]={5,1,3,4};
    int n=4;
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
  

    cout<<"The sum of elements given in the array:"<<sum<<endl;
}
