#include <iostream>
#include <cmath>
#include <iomanip>
#include <algorithm>
using namespace std; 
int GiaiPt(double a, double b, double c, double &x1, double &x2) {
	double delta = (b*b-4*a*c);
	
	if (delta >0){
		x1 = (-b+sqrt(delta))/(2*a);
		x2 = (-b-sqrt(delta))/(2*a);
	return 2;}//2 nghiem pb
			
	else if (delta ==0){
		x1= -b/(2*a);
		return 1;} //1 nghiem kep
		
	else if (delta <0){
	return 0; //khong co nghiem
}
}
int main (){
	double a, b,c;
	double x1, x2;

	cin>>a>>b>>c;
	
	if (a == 0) {
        if (b != 0) {
            cout << "Phuong trinh co 1 nghiem: " << -c / b << endl;
        } else {
            if (c == 0) {
                cout << "Phuong trinh co vo so nghiem." << endl;
            } else {
                cout << "Phuong trinh vo nghiem." << endl;}
        }
    }
    
else{
if(GiaiPt (a, b,c, x1, x2) == 0){
cout<<"Phuong trinh vo nghiem";}

else if( GiaiPt(a, b, c, x1, x2) == 1 )	{
	if (x1 < 0)
	cout << "Phuong trinh vo nghiem";
	if (x1==0)
	cout<<"Phuong trinh co mot nghiem"<<endl<<"0";
	else{
	cout<<"Phuong trinh co hai nghiem"<<endl;
	double values[] ={sqrt(x1), -sqrt(x1)};
	sort (values, values+2); 
    cout<< fixed << setprecision(2) << values[0] <<" "<< fixed << setprecision(2) <<values[1];
	}
}

else {
	if (x1<0){
	 if (x2<0){
	 	cout<<"Phuong trinh vo nghiem"; }
	 if (x2>0) {
	 	cout<<"Phuong trinh co hai nghiem"<<endl;
	 	double values[] ={sqrt(x1), -sqrt(x1)};
	 	sort (values, values+2); 
        cout<< fixed << setprecision(2) << values[0] <<" "<< fixed << setprecision(2) <<values[1];
	 }
	 if (x1>0){
	    if (x2>0){
	 	cout<<"Phuong trinh co 4 nghiem"<<endl;
	 	double values[] ={sqrt(x1), -sqrt(x1), sqrt(x2), -sqrt(x2)};
        sort (values, values+4); 
	 	cout<< fixed<<setprecision(2) <<values[0]<<" "<< fixed<<setprecision(2) << values[1]<<" "<< fixed<<setprecision(2) <<values[2]<<" "<< fixed<<setprecision(2) <<values[3];
	 }
}
	 
	if (x1=0){
		if (x2>0){
			cout<<"Phuong trinh co ba nghiem"<<endl;	
			double values[] ={sqrt(x2), -sqrt(x2), 0};
            sort (values, values+3);
            for (int i = 0; i < 3; i++) {
            cout << values[i] << " ";}
			cout<<fixed<<setprecision(2) <<sqrt(x2)<<" "<< fixed<<setprecision(2) <<-sqrt(x2)<<" "<<0;}
	    if (x2<0){
	    	cout<<"Phuong trinh co mot nghiem"<<endl;
	        cout<<0;}
	} 
}
}
}
}
