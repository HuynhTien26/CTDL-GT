#include <iostream>
#include <algorithm>
#define MAX 1000
using namespace std;
int main(){
	string s, original;
	cout<<"Moi ban nhap chuoi s: ";
	cin>>s;
	if (s.length()>MAX){
		cout<<"Chuoi qua dai, toi da "<<MAX<<" ky tu";
		return 1;
	}
	original =s;
	sort (s.begin(), s.end());
	cout<<"Chuoi "<< original <<" sau khi sap xep "<<s<<endl;;
	return 0;
}
