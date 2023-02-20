/* Given an array where all its elements are sorted in increasing order except two
 swapped elements,sort it in linear time.Assume there are no duplicates in the array.
 input:{3,8,6,7,5,9,10}
 output:{3,5,6,7,8,9,10}
 */
#include<bits/stdc++.h>
using namespace std;
void sort_array(int *arr,int n){
	if(n<=1)//edge case ,corner case
	return ;
	
	int x=-1,y=-1;
	for(int i=1;i<n;i++){
		if(arr[i-1]>arr[i]){
			if(x==-1){
			x=i-1;
			y=i;	
			}
			else
			y=i;
		}
	}
	swap(arr[x],arr[y]);
	return ;
}
int main(){
	
	int arr[]={3,8,6,7,5,9,10};
	int n=sizeof(arr)/sizeof(arr[0]);
	
	sort_array(arr,n);
	
	for(int i=0;i<n;i++)
	cout<<arr[i]<<" ";
	
	return 0;
}
