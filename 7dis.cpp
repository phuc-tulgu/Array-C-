#include<iostream>

using namespace std;

void in_put(int arr[][10], int n){
	for( int i = 1; i <= n; i++ ){
		for( int j = 1; j <= n; j++ ){
			cout << "Input value arr["<<i<<"]["<<j<<"] : ";
			cin >> arr[i][j];
		}
	}
}

void out_put(int arr[][10], int n){
	for( int i = 1; i <= n; i++ ){
		for( int j = 1; j <= n; j++ ){
			cout << arr[i][j] << "\t";
		}
	}
	cout << endl;
}

int main(){
	int n = 3;
	int arr[10][10];
	in_put(arr,n);
	out_put(arr,n);
	
}
