/*Given an array of size N containing only 0's,1's,2's;sort the array in ascending order.
Input:
N=6
arr[]={0,2,1,2,0,0}
output:
{0,0,0,1,2,2}
*/
#include<bits/stdc++.h>
using namespace std;
void sorting(int *arr,int n){
	int low=0;
	int high=n-1;
	int mid=0;
	while(mid<=high){
		if(arr[mid]==0){
			swap(arr[mid],arr[low]);
			low++;
			mid++;
		}
		
		else if(arr[mid]==1)
		mid++;
		
		else 
		{
			swap(arr[mid],arr[high]);
			high--;
		}
	}
	return ;
	
}
int main(){
	int arr[]={0,2,1,2,0,0};
	int n=sizeof(arr)/sizeof(arr[0]);
	
	sorting(arr,n);
	
	for(int i=0;i<n;i++)
	cout<<arr[i]<<" ";
	
	return 0;
}
