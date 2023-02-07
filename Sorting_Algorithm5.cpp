//*****************************Quick Sort***************************
#include<bits/stdc++.h>
using namespace std;
int partition(int *arr,int first,int last){
	int pivot_element=arr[last];
	int i=first-1;
	int j=first;
	
	while(j<last){
		if(arr[j]<pivot_element){
			i++;
			swap(arr[j],arr[i]);
		}
		j++;
	}
	swap(arr[i+1],arr[last]);
	
	return i+1;
}
void Quick_sort(int *arr,int first,int last){
	
	if(first>=last) return ;
	
	int pi=partition(arr,first, last);
	
	Quick_sort(arr, first,pi-1);
	Quick_sort(arr,pi+1,last);
	
	return ;
}
int main(){
	int arr[]={45,23,12,22,19,20};
	int n=sizeof(arr)/sizeof(arr[0]);
	
	Quick_sort(arr,0,n-1);
	
	for(auto ele:arr){
		cout<<ele<<" ";
	}
	
	return 0;
}
