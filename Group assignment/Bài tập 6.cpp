#include <iostream>
#include <algorithm>
using namespace std;

//TEST CASE
//INPUT
//8 1 3 2 0 5 6 4
//OUTPUT
//2 5 3 4 0 1 6 8


//tach so chan, so le va so 0
void customsort(int a[], int n){
	int EVA[n], ODA[n];
	int EVCOUNT =0; int ODCOUNT=0;
	
	for(int i=0; i<n;i++){
		if(a[i] !=0)
			if(a[i]%2==0)
			EVA[EVCOUNT++]=a[i];
			else
			ODA[ODCOUNT++]=a[i];
	}

//sap xep so chan tang
sort(EVA, EVA + EVCOUNT);

//sap xep so le giam
sort(ODA, ODA + ODCOUNT, greater<int>());

//chen lai vao mang goc
int EVPointer =0, ODPointer =0;
for(int i=0; i<n;i++){
	if (a[i]!=0){
		if(a[i]%2==0)
		a[i]=EVA[EVPointer++];
		else
		a[i]=ODA[ODPointer++];
	}
}
}

int main(){
	int n; 
	cout<<"Nhap so luong phan tu n: ";cin>>n;
	
if (n<0){
	cout<<"Khong hop le";
	return 1;}
	
	int a[n];
//nhap mang
for (int i=0; i<n;i++){
cout<<"phan tu "<<i+1<<" : ";
cin>>a[i];
}

cout<<"Mang da nhap"<<endl;
	for (int i=0; i<n;i++){
		cout<<a[i]<<" ";}
		cout<<endl;

customsort(a,n);

cout<<"Mang sau khi sap xep";
for(int i=0;i<n;i++){
	cout<<a[i]<<" ";
	}cout<<endl;

return 0;
	}
