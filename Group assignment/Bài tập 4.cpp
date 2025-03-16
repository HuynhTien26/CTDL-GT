#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
const int MAXROWS=100;
const int MAXCOLS=100;

//test case
//INPUT:
//{3  5  7
//4  6  8
//2 11 13}
//OUTPUT:
//SO NGUYEN TO LON NHAT 13
//DONG CO GIA TRI NGUYEN TO DONG 1, DONG 3
//DONG CHI CHUA CAC SO NGUYEN TO DONG 1, DONG 3 

bool checkSNT(int num){
	if (num<2) return false;
	for (int i=2; i<=sqrt(num);i++){
		if (num%i==0)
			return false; //khong phai SNT
	}
	return true; //chinh no
}

//TIM SNT LON NHAT
int findmaxSNT(int MATRIX[][MAXCOLS], int n, int m){
	int MAXSNT =-1; 
	for(int i=0; i<m;i++){
		for(int j=0;j<n;j++){
			if(checkSNT(MATRIX[i][j]))
			MAXSNT =max(MAXSNT, MATRIX[i][j]);
		}
	}
	return MAXSNT;
}

//do`ng chua gia tri nguyen to
void findGTNT(int MATRIX[][MAXCOLS], int n, int m){
	cout<<"Dong chua gia tri nguyen to la"<<endl;
	for(int i=0;i<m;i++){
		bool allSNT=false; //bien ktr phai SNT hay khong
		for (int j=0;j<n;j++){
			if(checkSNT(MATRIX[i][j])){
				allSNT=true; //gan co 
			}
		}
		if(allSNT)
		cout<<"Dong "<<i+1<<" co gia tri nguyen to"<<endl;
	}
}

//tim dong chi chua SNT
void finwithSNT(int MATRIX[][MAXCOLS], int n, int m){
	cout<<"dong chi chua cac so nguyen to"<<endl;
	for(int i=0;i<m;i++){
		bool allSNT= true;
		for(int j=0; j<n;j++){
			if(!checkSNT(MATRIX[i][j])){
				allSNT =false;
}
		}
		if(allSNT)
		cout<<"DONG "<<i+1<<" chi chua cac so nguyen to"<<endl;
	}
}

int main(){
	int n,m; //j,i
	int MATRIX [MAXROWS][MAXCOLS];
	cout<<"nhap so hang ";cin>>m;
		if(m<0) {
	cout<<"khong hop le";
	return 1;}
	
	cout<<"nhap so cot ";cin>>n;	
		if(n<0) {
	cout<<"khong hop le";
	return 1;}
	
	//nhap ma tran
	for (int i=0; i<m; i++){
	for (int j=0;j<n;j++){
		cin>>MATRIX[i][j];
	}
}

//in ma tran
cout<<"Mang da nhap "<<endl;
for(int i=0;i<m;i++){
	for(int j=0;j<n;j++){
		cout<<MATRIX [i][j];
	}
}
cout<<endl;

int MAXSNT = findmaxSNT(MATRIX,n, m);
if (MAXSNT !=-1)
cout<<"so nguyen to lon nhat la "<<MAXSNT<<endl;
else 
cout<<"Khong co so nguyen to"<<endl;

finwithSNT(MATRIX, n,m);
finwithSNT(MATRIX,n,m);

	return 0;
}
