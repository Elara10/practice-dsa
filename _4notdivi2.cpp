//5th oct
#include<iostream>
using namespace std;
int main()
{
  int arr[]={2,4,1,10,11};
  int size=5;
  for(int i=0;i<size;i++)
  {
    if((arr[i]%2)!=0)
    {
      cout<<"A numbers divisible by 2 are "<< arr[i]<<" "<<endl;
    }
  }
  cout<<endl;

}