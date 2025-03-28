#include <iostream>
#include <stack>
using namespace std;


//=======================Chuong trinh de quy (b) 
//==============Dao nguoc so
//============De quy
int daoso(int n, int sodaonguoc =0){
	if (n==0) return sodaonguoc;
	else daoso(n/10, sodaonguoc*10+n%10);//n%10: lay so du, sodaonguoc*10: them vao so dao nguoc; n/10: bo di chu so cuoi
}

//===========Stack
int daosostack(int n){
	stack<int>st;
	while(n>0){
		st.push(n%10); //chia lay du cho 10, lay phan du day vao stack
		n/=10;//xoa di phan du sau khi da day vao stack
	}
	int sodaonguoc=0, vitri=1;
	while(!st.empty()){
		sodaonguoc +=st.top()*vitri;
		st.pop(); //xoa so da lay di
		vitri*=10; //chuyen sang hang chuc, tram,.
//VD nhun=1234 ->vao stack. top=1 , vitri=1->* lai =1, vitri*10=10. sodaonguoc =1
//top=2, vitri=10 -> * lai =20 roi + sodaonguoc =21 
	}
}

int main(){
int n=1234;
cout<<"Dao nguoc co de quy: "<<daoso(n)<<endl;
cout<<"Dao so bang stack: "<<daosostack(n)<<endl;
return 0;
}
