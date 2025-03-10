#include <iostream>
#include <stdio.h>
using namespace std;
#define F1 "DaySoNguyen.inp" 
int main(){
	FILE *fptr;
	fptr = fopen(F1, "r");
	if (fptr ==NULL){
		cout<<"Khong the mo file";
		return 1;
	}
	 char myString [100];
	 if (fgets(myString, 100, fptr) != NULL){
	 cout<<myString;
	 };
	 fclose(fptr);
	 return 0;
}


