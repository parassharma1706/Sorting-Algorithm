/* Given an array of positive and negative integers,segregate them in linear time and 
constant space.The output should print all negative numbers,followed by all positive numbers.
Input:[19,-20,7,-4,-13,11,-5,3]
Output:[-20,-4,-13,-5,7,11,19,3]
*/
#include<bits/stdc++.h>
using namespace std;
void move(int *arr,int n){
	int first=0,last=n-1;
	while(first<=last){
	
	if(arr[first]>0&&arr[last]<0){
		swap(arr[first],arr[last]);
		first++;
		last--;
	}
	else if(arr[first]<0)
	first++;
	
	else
	last--;
}
return ;
}
int main(){
	int arr[]={19,-20,7,-4,-13,11,-5,3};
	int n=sizeof(arr)/sizeof(arr[2]);
	
	move(arr,n);
	
	for(int i=0;i<n;i++)
	cout<<arr[i]<<" ";
	return 0;
}
