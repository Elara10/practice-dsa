// [5,2,3,1,6].Write the table of an array elements
#include<iostream>
using namespace std;
int main()
{
    int arr[]={5,2,3,1,6};
    int size=5;
    for(int i=0;i<size;i++){
        for(int j=1;j<=10;j++)
        {
            cout<<arr[i]<<" "<<"*"<<" "<<j<<" "<<"="<<" "<<arr[i]*j <<endl;       }
    }
    // cout<<endl;

}