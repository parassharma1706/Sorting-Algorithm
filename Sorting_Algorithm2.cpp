//***********************Selection Sort************************
//*********** Repeatedly find minimum element in the unsorted array and put in at beginning**************
#include<bits/stdc++.h>
using namespace std;
void Selection_sort(int *arr,int n){
	for(int i=0;i<n-1;i++){
		int min_index=i;
		for(int j=i+1;j<n;j++){
			if(arr[j]<arr[min_index])
			min_index=j;
		}
		if(min_index!=i)
		swap(arr[i],arr[min_index]);
	}
	return ;
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int &ele:arr)
	cin>>ele;
	
	Selection_sort(arr,n);
	
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
	
	
	return 0;
} 
