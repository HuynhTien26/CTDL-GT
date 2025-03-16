#include <iostream>
using namespace std;

const int MAXROWS =100;
const int MAXCOLS =100;

//TEST CASE
//INPUT:
//   {1 2 3 
//	4 5 6
//	7 8 9}
//OUTPUT:
//	Dong co tong lon nhat: dong 3
//	Ma tran sau khi sap xep:
//		{7 8 9
//		 4 5 6
//		 1 2 3}

//tinh tong hang
int SUMROWS(int n, int m,int row, int matrix[][MAXCOLS]){
	int sum =0;
	for (int j=0; j<n; j++){
		sum +=matrix[row][j]; //cong phan tu trong hang
	}
	return sum;
}

//tim hang co tong lon nhat
int MAXSUMROWS (int n,int m, int matrix [][MAXCOLS]){
	int maxsum =0; int maxrow=0;
	for (int i=0; i<m; i++){
		int sum= SUMROWS(n,m,i, matrix);
	if (sum>maxsum)
		maxsum=sum;
		maxrow=i;
	}
	return maxrow;
}
	
//sap xep theo tong giam dan
void SORTROWSBYSUM (int matrix[][MAXCOLS], int n, int m){
		for (int i=0; i<m-1; i++){
			for(int j=i+1; j<m; j++){
		    if (SUMROWS(n, m, i, matrix) < SUMROWS(n, m, j, matrix)) 
				for (int k = 0; k < n; k++) {
                    swap(matrix[i][k], matrix[j][k]);
}
}
}}

int main(){
int n, m;
int matrix[MAXROWS][MAXCOLS];

	//NHAP MA TRAN
	cout<<"Nhap so hang: ";cin>>m;
	
	if(m<0) {
	cout<<"khong hop le";
	return 1;}
	
	cout<<"Nhap so cot: ";cin>>n;
	
		if(n<0) {
	cout<<"khong hop le";
	return 1;}
		
for (int i=0; i<m; i++){
	for (int j=0;j<n;j++){
		cin>>matrix[i][j];
	}
}

int maxrow =MAXSUMROWS (m,n,matrix);
cout<<"Hang co tong lon nhat:"<<maxrow+1<<endl;

SORTROWSBYSUM(matrix, n, m);
cout << "Ma tran sau khi sap xep theo tong giam dan:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
return 0;
}
