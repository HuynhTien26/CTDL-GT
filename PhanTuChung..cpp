#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int nx,ny,nz;

	cin>>nx;
	int x[1000];
	for (int i = 0; i < nx; i++){
		cin>>x[i];}
	
	cin>>ny;
	int y[1000];
	for(int i =0; i < ny; i++){
		cin>>y[i];}
	
	cin>>nz;
	int z[1000];
	for(int i=0; i < nz; i++){
		cin>>z[i];}
		
		sort (x, x + nx);
		sort (y, y + ny);
		sort (z, z + nz);
		
	int result [1000];	//chua ketqua
	int count = 0; // bien luu so luong phan tu chung 3 day
	int ix=0, iy=0, iz=0;
	
	while (ix < nx && iy < ny && iz < nz){
		int Vmin = min(x[ix], min (y[iy], z[iz]));
		
		if (Vmin == x[ix] && Vmin == y[iy] && Vmin == z[iz]){
			if (ix ==0 || x[ix] != x[ix-1]){ //ktr phan tu da in chua
		    result[count] = x[ix];
		    count++;
			}
			ix++;
			iy++;
			iz++;
		}else {
		if (Vmin == x[ix]){ix++;}
		if (Vmin == y[iy]){iy++;}
		if (Vmin == z[iz]){iz++;}
	}
}
	cout<<count<<endl;
	for (int i=0; i < count; i++){
		cout <<result [i] <<" ";
	}
	return 0;
}
