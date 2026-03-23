#include<iostream>
using namespace std;

int binaryTodecimal(int n){

	int ans = 0;
	int pow = 1;

	while(n > 0){
	int rem = n % 10;
	 n = n / 10;
	 ans  += (pow*rem);
	 pow = (pow*2);
	}
	return ans;
}

	int main(){
		int n;
		 cout<<" enter the binary number:";
		 cin>>n ;
		 
		 cout<<binaryTodecimal(n);
		 return 0;
	}