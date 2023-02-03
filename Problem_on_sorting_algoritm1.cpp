/**************Given an integer array arr,move all 0's to the end of it while maintaining
 the relative order of the non-zero elements.
Note that you must do this in-place without making a copy of the array.
  Input:
  0 5 0 3 4 2
  Output:
   5 3 4 2 0 0                   **************************/
#include<bits/stdc++.h>
using namespace std;
void moving_zeroes(int *arr,int n){
for(int i=0;i<n;i++){
	int j=0;
	int c=0;
	while(j<n-i-1){
		if(arr[j]==0&&arr[j+1]!=0){
			swap(arr[j],arr[j+1]);
			c=1;
		}
		j++;
	}
	if(c==0)
	break;
	
}	

	return ;
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int &ele:arr){
		cin>>ele;
	}
	
	moving_zeroes(arr,n);
	
	for(int ele:arr)
	cout<<ele<<" ";
	
	return 0;
}
