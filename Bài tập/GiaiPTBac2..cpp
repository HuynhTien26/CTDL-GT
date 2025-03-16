#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main (){
	double a, b,c;
	cin>>a>>b>>c;
	
	if (a == 0) {
        if (b != 0) {
            cout << "Phuong trinh co 1 nghiem: " << -c / b << endl;
        } else {
            if (c == 0) {
                cout << "Phuong trinh vo so nghiem." << endl;
            } else {
                cout << "Phuong trinh vo nghiem." << endl;}
        }
    }
	
	else {
    double x1, x2;
	double delta = (b*b-4*a*c);
    
	if (delta >0){
		x1 = (-b+sqrt(delta))/(2*a);
		x2 = (-b-sqrt(delta))/(2*a);
		cout<<"Phuong trinh co 2 nghiem"<<endl;
		if (x1> x2) swap (x1,x2);
		cout<<fixed << setprecision(2)<<x1<<" "<< fixed<<setprecision(2) <<x2;}
		
		
		
	else if (delta ==0){
		x1= -b/(2*a);
		cout<<"Phuong trinh co nghiem 1 nghiem "<<endl<< fixed<<setprecision(2) <<x1;}
		
	else if (delta <0){
		cout<<"Phuong trinh vo nghiem";}	
	}
	
 return 0;
}

