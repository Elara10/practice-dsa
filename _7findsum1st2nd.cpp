// [7,8,4,6,1],find the sum of 1st and 2nd,2nd & 3rd,3rd & 4th,4th & 5th. output-->15
//                                                                                 12
//                                                                                  10
//                                                                                  7

// 6th oct 2023

// #include<iostream>
// using namespace std;
// int main()
// {
//     int sum;
//     int arr[]={7,8,4,6,1};
//     int size=5;
//     for(int i=0;i<size;i++)
//     {
//        sum=arr[i]+arr[i+1];
//         cout<<"The sum of two elements are :"<<sum<<endl;
//     }
// }



#include<iostream>
using namespace std;
int main()
{
    int sum;
    int arr[]={6,3,7,2,4};
    int size=5;
    for(int i=0;i<size;i++)
    {
      sum=arr[i]+arr[i+1];
      cout<<"The sum of two elements :"<<sum<<endl;
    }
}
