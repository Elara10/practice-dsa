#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={3,45,6,12,5,67};
    int twodigit=_TWO_DIGIT_EXPONENT;
    int n=6;
    cout<<"Print two digit numbers :";
    for(int i=0;i<n;i++)
    {
        if(arr[i]>=10 && arr[i]<100)
        {
            cout<<arr[i]<<" ";
        }
      
    }
// cout<<"Last three number are two digit numbers"<<arr[i]<<endl;

}