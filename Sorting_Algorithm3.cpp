//************************Insertion Sort************************
//********************Take an element and put it in its correct position************************
#include<bits/stdc++.h>
using namespace std;
void Insertion_sort(int *arr,int n){
	
	for(int i=1;i<n;i++){
		int j=i;
		while(j>0 && arr[j]<arr[j-1])
		{
			swap(arr[j],arr[j-1]);
            j--;
		}
		
	}
	
	
	
	return ;
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	Insertion_sort(arr,n);
	
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
