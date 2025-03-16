#include <iostream>
#include <algorithm>
using namespace std;

////test case
//	//TEST CASE 1
//input:
//	{100, 'A', 12},
//	{50, 'A', 65},
//	{120, 'B', 200},
//	{150, 'B', 90},
//	};
//output:
//	DS phong thi theo kha nang chua:
//    120 B 200
//    150 B 90
//    50 A 65
//    100 A 12
//DS phong thi theo nha tang dan va so phong tang neu cung nha:
//	50 A 65
//	100 A 12
//	120 B 200
//	150 B 90
//DS phong theo nha tang va KN chua giam neu cung nha:
//	50 A 65
//	100 A 12
//	120 B 200
//	150 B 90

//dinh nghia cau truc du lieu phong thi 
struct PHONGTHI {
	int SOPHONG; //1->200
	char NHA; //A->Z
	int KHANANGCHUA; //tu 10 ->250
};

//so sanh kha nang chua (giam)
bool compareKHANANGCHUA(const PHONGTHI&p1, const PHONGTHI&p2){
	return p1.KHANANGCHUA >p2.KHANANGCHUA; //tra ve true
}

//so sanh nha (tang dan) , neu cung nha thi` so sanh so phong (tang)
bool compareNHATHEOSOPHONG (const PHONGTHI&p1, const PHONGTHI&p2){
	if(p1.NHA == p2.NHA)
	return p1.SOPHONG<p2.SOPHONG; //tra ve false
	else
	return p1.NHA<p2.NHA;
}

//so sanh nha(tang), neu cung nha` so sanh kha nang chua (giam)
bool compareNHATHEOKHANANGCHUA (const PHONGTHI&p1, const PHONGTHI&p2){
	if(p1.NHA==p2.NHA)
	return p1.KHANANGCHUA>p2.KHANANGCHUA;
    else
    return p1.NHA<p2.NHA;
}

int main(){
	 
    int n;
    cout<<"Nhap so luong phan tu n";cin>>n;
	//khai bao mang phong thi
	PHONGTHI phongthi[n];
	
	for(int i=0; i<n;i++){
		cout<<"Nhap thong tin phong thi "<<i+1<<" SO PHONG, NHA, KHA NANG CHUA ";
		cin>>phongthi[i].SOPHONG>>phongthi[i].NHA>>phongthi[i].KHANANGCHUA;
	}
	
	//SAP XEP VA IN DANH SACH PHONG THI THEO THU TU GIAM DAN VE KHA NANG CHUA
	sort (phongthi, phongthi+n, compareKHANANGCHUA);
	cout<<"DANH SACH PHONG THI THEO KHA NANG CHUA GIAM DAN: ";
	for(int i=0;i<n;i++){
		cout<<"Phong: "<<phongthi[i].SOPHONG<<"_ NHA: "<<phongthi[i].NHA<<"_ KHA NANG CHUA: "<<phongthi[i].KHANANGCHUA<<endl;
	}
	
	//SAO XEP VA IN DANH SACH THEO THU TU TANG DAN CUA NHA, CUNG NHA THI TANG DAN THEO SO PHONG
	sort (phongthi, phongthi+n, compareNHATHEOSOPHONG);
	cout<<"DANH SACH PHONG THI THEO NHA TANG DAN VA` SO PHONG TANG DAN NEU CUNG NHA"<<endl;
	for(int i=0;i<n;i++){
		cout<<"PHONG: "<<phongthi[i].SOPHONG<<"_ NHA: "<<phongthi[i].NHA<<"_ KHA NANG CHUA: "<<phongthi[i].KHANANGCHUA<<endl;
	}
	
	//SAO XEP VA IN DANH SACH THEO THU TU TANG DAN CUA NHA,CUNG NHA THI GIAM DAN THEO KHA NANG CHUA
	sort (phongthi, phongthi+n, compareNHATHEOKHANANGCHUA);
	cout<<"DANH SACH PHONG THI THEO NHA TANG DAN VA` KHA NANG CHUA GIAM DAN NEU CUNG NHA"<<endl;
	for(int i=0;i<n;i++){
		cout<<"PHONG: "<<phongthi[i].SOPHONG<<"_ NHA: "<<phongthi[i].NHA<<"_ KHA NANG CHUA: "<<phongthi[i].KHANANGCHUA<<endl;
	}
	
return 0;
}

