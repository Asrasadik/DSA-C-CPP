#include<iostream>

using namespace std;
int main(){

  int arr[5]={1,2,3,4,5};
  int n= sizeof(arr)/sizeof(arr[0]);
  int start=0,end=n-1,i;
  int temp;
  while(start<end){
  	temp=arr[start];
  	arr[start]=arr[end];
  	arr[end]=temp;
  	start++;
  	end--;
  }
  for(i=0;i<n;i++){
  	cout<<arr[i];
  }
  return 0;
}
