#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;

//=======================Chuong trinh (a) 
//===============Fibonancy
//============De quy
using ll = long long; 

ll fibonancy(int n){
	if(n<=1) return n;
	else return fibonancy(n-1) +fibonancy(n-2);}

//===========Stack
using ll = long long;
ll fibostack(int n){ //O(n_
	if(n<=1) return n;
	stack<int> st; //khai bao stack luu so nguyen
	st.push(0); //day F(0)=0 va F(1) =1 vao stack
	st.push(1);
	for(int i=2;i<=n;i++){
		int a=st.top(); st.pop(); //lay so dau tien cua ngan xep ra roi xoa di
	    int b=st.top(); //sau khi lay a thi b se thanh top moi
	    st.push(a); //day lai a vao ngan xep de khong mat gia tri
	    st.push(a+b); //day gia tri moi F(n)=F(n-1)+F(n-2) vao stack
//co the hieu: o vong lap i=2  lay F(1) =1 va F(0)=0 tu stack sau do day F(2) =1+0=1 vao stack
	}
	return st.top(); //tra ve so nam tren dinh ngan xep
}

int main(){
	//test case cho fibonancy
    int test_case[]={9,1,5,12,20};
    int size =sizeof(test_case)/sizeof(test_case[0]); //tinh so luong phan tu trong mang test case
    //sizeof(test_case) tra ve tong kich thuoc mang (tinh theo byte, int chiem 4 byte), sizeof(test_case[0] phan tu dau tien cua mang (thuoc kieu int -> 4 byte)
    //mang co 5 phan tu =>tong kich thuoc 5*4=20; =>20/4=5 vay mang co 5 phan tu
    
  for(int i=0;i<size;i++){
    int n=test_case[i];
	  cout<<"Tinh fibo co de quy: "<<fibonancy(n)<<endl;
    cout<<"Tinh fibo bang stack: "<<fibostack(n)<<endl;
}
return 0;
}
