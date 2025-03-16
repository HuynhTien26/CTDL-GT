#include <iostream>
#define Max_DS 100
#include <cstring>
using namespace std;
struct TTDT {
	char MaDT[11];
	char NhanHieu[21];
	int Gia;
};

struct DanhSachDT {
	TTDT ds[Max_DS];
	int SoLuongDT = 0;
};
DanhSachDT ds;
int TimMaDT(const char *MaDT ){ //ktr ma dien thoai da ton tai chua
	for(int i=0; i< ds.SoLuongDT ;i++){
		if (ds.ds[i].MaDT==MaDT){
			return i;
		}
	}
	return -1;
}

void ThemDT(){   // a)them dien thoai vao danh sach
	if (ds.SoLuongDT >= Max_DS){
		cout<<"Danh sach day"<<endl;
	}
	TTDT ttdt;
	cout<<"Nhap ma dt";
	cin>>ttdt.MaDT;
	
	if (TimMaDT(ttdt.MaDT)!= -1){
		cout<<"Ma DT da ton tai"<<endl;
	}
	cout<<"Nhap Nhan Hieu";
	cin.ignore();
	cin.getline(ttdt.NhanHieu,21);
	cout<<"Nhap Gia";
	cin>>ttdt.Gia;
	
	ds.ds[ds.SoLuongDT++] =ttdt;
	cout<<"Da them dien thoai vao danh sach"<<endl;
}
 
 void hienthiTTDT(){                   //b) hien thi ttdt
 	char MaDT[11];
 	cout<<"Nhap Ma Dien Thoai can tim";
 	cin>>MaDT;
 	
 	int timVitri = TimMaDT(MaDT);
 	if (timVitri ==-1){
 		cout<<"Dien thoai khong co";
	 }
	else{
		cout<<"Nhan Hieu: "<<ds.ds[timVitri].NhanHieu<<" "<<"Gia: "<<ds.ds[timVitri].Gia<<endl;
	}
 }
 
 void capnhatGia (){   //c)cap nhat gia
 	char MaDT[11];
 	cout<<"Nhap ma dt can cap nhat gia";
 	cin>>MaDT;
 	
 	int timVitri = TimMaDT(MaDT);
 	if (timVitri ==-1){
 		cout<<"Dien thoai khong co";}
 	else{
 		cout<<"Nhap gia moi";
 		cin>>ds.ds[timVitri].Gia;
 		cout<<"Da cap nhat"<<endl;
	 }
 }
 
 void xoaDT(){     //d)xoa Dien Thoai
 	char MaDT[11];
 	cout<<"Nhap ma dien thoai can xoa";
 	cin>>MaDT;
 	
 	int timVitri =  TimMaDT(MaDT);
 	if (timVitri ==-1){
 		cout<<"DT khong ton tai";
	 }
	 else {
	 for (int i=timVitri; i<ds.SoLuongDT;i++){
	 	ds.ds[i]=ds.ds[i+1];
	 }
	 ds.SoLuongDT--;
	 cout<<"Da xoa dien thoai";
	 }
 }
 
 void XuatdsDT (){      //e)xuat ds dien thoai
 	for(int i=0; i<ds.SoLuongDT;i++){
 		cout<<"Ma Dien Thoai: "<<ds.ds[i].MaDT<<endl;
 		cout<<"Nhan Hieu: "<<ds.ds[i].NhanHieu<<endl;
 		cout<<"Gia: "<<ds.ds[i].Gia<<endl;
	 }
 }

void menuctr(){
	int LuaChon;
	do{
		cout<<"Danh Sach Dien Thoai"<<endl;
		cout<<"Them Dien Thoai"<<endl;
		cout<<"Hien thi thong tin dien thoai theo ma"<<endl;
		cout<<"Cap nhat gia dien thoai"<<endl;
		cout<<"Xoa dien thoai"<<endl;
		cout<<"Xuat danh sach dien thoai"<<endl;
		cout<<"Nhap lua chon";
		cin>>LuaChon;
		
		switch(LuaChon){
			case 1:ThemDT(); break;
			case 2:hienthiTTDT(); break;
			case 3:capnhatGia(); break;
			case 4:xoaDT(); break;
			case 5:XuatdsDT(); break;
		}
	}while (LuaChon!=0);
}

int main(){
	menuctr();
	return 0;
}
