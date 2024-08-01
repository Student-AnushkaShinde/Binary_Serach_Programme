#include<iostream>
using namespace std;
 int binary_search(int arr[], int n, int target)
 {
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<=e)
    {
        if(arr[mid]==target)
        {
            return mid;
        }
        if (target>arr[mid])
        {
         s=mid +1;
        }
        if (target<arr[mid])
        {
          e=mid-1;
        } 

        // yeh mai bhul jati hou   

        mid=s+(e-s)/2;
    }
    return -1;
 }
int main(){
    int arr[]={10,20,30,40,50,60};
    int n=6;
    int target=40;
    int ans=binary_search(arr,n ,target);
   cout<<ans<<endl;
    return 0;
}