// divisible by 2
// #include<iostream>
// using namespace std;
// int main()
// {
//     int a;
//     cout<<"Enter a number";
//     cin>>a;
//     if(a%2==0)
//     {
//         cout<<"A number "<<a<<" is divisible by 2 ";
//     }
//     else{
//          cout<<"A number is not  divisible by 2";
//     }
//     return 0;

// }



// #include<iostream>
// using namespace std;

// int main()
// {
//     int arr[]={8,4,546,5,32,6786,3,56,7};
//     int n=9;
//    for(int i=0;i<n;i++)
//    {
//     if(arr[i]%2==0)
//     {
//         cout<<arr[i]<<" ";
//     }
//    }
//    cout<<endl;
// }

// 5th oct
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter a number ";
//      cin>>n;
//     if(n%2==0)
//     {
//       cout<<"A Number "<<n<<" is divisible by 2"<<endl;
//     }
//     else{
//     cout<<"A Number is not  divisible by 2";
//     }
//    return 0;

// }



// #include<iostream>
// using namespace std;
// int main()
// {
//   int n;
//   cout<<"Enter a number ";
//   cin>>n;
//   if(n%2==0)
//   {
//     cout<<"A number " <<n<<" is divisible by 2";
//   }
//   else{
//     cout<<"A number " <<n<<" is not divisible by 2";
//   }
//   return 0;
// }







#include<iostream>
using namespace std;
int main()
{
  int arr[]={4,5,9,6,10};
  int size=5;
  for(int i=0;i<size;i++)
  {
    if(arr[i]%2==0)
    {
      cout<<"A numbers divisible by 2 are "<< arr[i]<<" "<<endl;
    }
  }
  cout<<endl;

}