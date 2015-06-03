// http://www.iarcs.org.in/inoi/2014/zco2014/zco2014-1a.php
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,h,a[100000],seq=1,index=0,flag=0;
	int temp=0;
	cin >> n >> h;
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	while(seq!=0){		
		cin >>  seq;
		
		// move left 
		if(seq==1){
			if(index>0){
				index=index-1;
			}
		}	
		
		// move right
		if(seq==2){
			if(index<n-1){
				index=index+1;
			}
		}
		
		//pickup box
		
		if(seq==3){
			if(a[index]>0&&temp==0){
				temp=1;
				a[index]--;
			}
				
		}
		
		// Drop Box
		
		if(seq==4){
			if(temp>0){
			
			if(temp + a[index] <= h ){
				temp=0;
				a[index]++;
			}
		}
			
		}		
	}
	
	for(int z=0;z<n;z++){
		cout << a[z] << " ";
	}
	
	
	
	return 0;
}
