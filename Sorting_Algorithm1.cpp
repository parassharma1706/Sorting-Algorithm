//*******************************Bubble Sort******************************
//*************Repeatedly swap two adjacent elements if they are in the wrong order********************
#include<bits/stdc++.h>
using namespace std;
void Bubble_sort(int *arr,int n){
	for(int i=0;i<n-1;i++){
		
		for(int j=0;j<n-1-i;j++){
			
			if(arr[j]>arr[j+1]){
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
			
		}
	}
	return ;
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int &ele:arr)
	cin>>ele;
	
	Bubble_sort(arr,n);
	
	for(int ele:arr)
	cout<<ele<<" ";
	return 0;
}
