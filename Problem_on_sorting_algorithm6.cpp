/*Write a Program to find kth smallest element in an array using Quick sort.
input:
3,5,2,1,4,7,8,6
Enter the value of k
5
output:
kth smallest element is 5
*/
#include<bits/stdc++.h>
using namespace std;
int partition(int *arr,int start,int last){
	int pivot=arr[last];
	int i=start-1;
	int j=start;
	
	for( ;j<last;j++){
		if(arr[j]<pivot){
			i++;
			swap(arr[i],arr[j]);
		}
	}
	
	swap(arr[i+1],arr[last]);
	
	return i+1;
}
int kth_smallest(int *arr,int start,int last,int k,int n){
	
	int pivot_index=partition(arr,start,last);
	
	if(pivot_index==k-1)
	return arr[pivot_index];
	
	else if(pivot_index>k-1)
	return kth_smallest(arr,start,pivot_index-1,k,n);
	
	else
	return kth_smallest(arr,pivot_index+1,last,k,n);
}
int main(){
	int arr[]={24,56,34,12,10,47,39};
	int n=sizeof(arr)/sizeof(arr[3]);
	
	int k=2;
	
cout<<kth_smallest(arr,0,n-1,k,n);

	return 0;
}


