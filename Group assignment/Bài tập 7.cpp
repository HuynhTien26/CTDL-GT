#include <iostream>
using namespace std;

//TEST CASE
//INPUT:
//	9 7 4 6 5 2 10
//OUTPUT:
//	10 2 4 6 5 7 9

void SORTEVOD(int a[], int n){
int left =0; //duyet tu dau voi so le
int right =n-1; //duyet cuoi voi so chan

while (left<right){ //dam bao khong duyet qua mang
	//tim so chan tu trai
	while (a[left]%2==0 && left<right){
		left ++;
	}
	
	//tim so le tu phai
	while(a[right]%2!=0 && left<right){
		right--;
	}
	
	if(left<right)
	swap(a[left], a[right]);
	left ++;
	right--;
}
}


int main(){
	int n;
	cout<<"Nhap so luong phan tu n: ";cin>>n;
	if (n<0){
	cout<<"Khong hop le";
	return 1;}
	
	//nhap mang
	int a[n];
	for(int i=0;i<n;i++){
		cout<<"Phan tu "<<i+1<<" ";
		cin>>a[i];
	}
	
	//in mang 
	cout<<"Mang da nhap "<<endl;
	for(int i=0; i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
	
	SORTEVOD(a,n);
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	
return 0;
}
