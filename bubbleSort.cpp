#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void  bubblesort(vector<int> &arr)
{
    int n=arr.size();
    for (int i = 0; i < n-1; i++)
    {
      for (int j = 0; j < n-i-1; j++)
      {
     if (arr[j]> arr[j+1])
     {
    swap(arr[j], arr[j+1]);
     }
     
      }
      
    }
    
}

void print(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
      cout<<arr[i]<<" ";
    }
    
}
int main(){
    vector<int> arr={5,4,3,2,1};
    bubblesort( arr);
    print(arr);
    return 0;
}