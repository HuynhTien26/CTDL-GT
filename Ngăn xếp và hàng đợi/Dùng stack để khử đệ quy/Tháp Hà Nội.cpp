#include <iostream>
#include <stack>
using namespace std;

//=======================Chuong trinh de quy (c)
//==============Thap Ha Noi
//============De quy
void ThapHN(int n, char a, char b, char c){
	if(n==1) {
	cout<<"chuyen dia tu "<<a<<" sang "<<c<<endl;
	return;}

    ThapHN (n-1,a,c,b); //chuyen tu cot a sang b lay c lam trung gian (n-1 la 2 dia dau tien)
     cout<<"chuyen dia tu "<<a<<" sang "<<c<<endl;
    ThapHN (n-1,b,a,c);
}


//============Stack
struct Move{
int n; //so dia can di chuyen
char a,c,b; //cot nguon, cot dich, cot trung gian
};
void ThapStack(int n, char a, char b, char c){
	stack <Move> s;
    s.push({n, a,c,b}); //dua thao tac dau vao stack, tuc di chuyen n dia tu a sang c lay b lam trung gian
    while(!s.empty()){
    	Move m =s.top(); //lay dia tren cung
    	s.pop(); //xoa dia do di
    	if(m.n==1){
    		cout<<"chuyen dia 1 tu "<< m.a <<"sang "<<m.c<<endl;
		}
		else {
			s.push({m.n -1, m.a, m.c, m.b});
			s.push({1, m.a, m.b, m.c});
			s.push({m.n-1, m.b, m.a, m.c});
		}
	}}


int main(){
int test_case1[]={3,5};
char a = 'A', b = 'B', c = 'C';
int size_thaphn =sizeof(test_case1)/sizeof(test_case1[0]);
    for(int i=0;i<size_thaphn;i++){
    	int n=test_case1[i];
	cout<<"Thap Ha Noi co de quy: ";
	ThapHN(n,a,b,c);
	cout<<endl;
    cout<<"Thap Ha Noi bang stack: ";
	ThapStack(n,a,b,c);
	cout<<endl;
}
	return 0;
}
