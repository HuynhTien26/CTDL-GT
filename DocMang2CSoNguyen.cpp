#include <iostream>
#include <stdio.h>
using namespace std;
#define F2 "MangSo.inp" 
int main(){
		FILE *fptr;
	fptr = fopen(F2, "r");
	if (fptr ==NULL){
		cout<<"Khong the mo file";
		return 1;
	}
	int n,m;
	fscanf(fptr, "%d %d", &n, &m);
	
	int **matran = new int *[n];
	for (int i=0; i<n; i++){
		matran[i]= new int[m];
	}
	fclose(fptr);
	
	for(int i=0;i<n;i++){
		for (int j=0; j<m; j++){
			cout<<matran[i][j]<<" ";
		}
		cout<<endl;
	}
	
	for (int i=0; i<n;i++){
		delete[] matran[i];
	}
	 fclose(fptr);
	 delete[] matran;
	 return 0;
}

