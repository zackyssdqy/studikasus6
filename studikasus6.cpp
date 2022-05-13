#include<iostream>
using namespace std;

class Nilai{
	private:
		float nilai;
		char nama[50];
		string matkul;
		int jmlmhs;
		float tugas, uts, uas, rata, akhir, akhtugas, akhuts, akhuas;

	public:
		void input(){
			cout<<"Nama Mahasiswa : ";cin>>nama;
			cout<<"Mata Kuliah : ";cin>>matkul;
			cout<<"Nilai Tugas : ";cin>>tugas;
			cout<<"Nilai UTS : ";cin>>uts;
			cout<<"Nilai UAS : ";cin>>uas;
			}
		
		void proses(){
			rata=(tugas+uts+uas)/3;	
			akhtugas=tugas*0.2;
			akhuts=uts*0.35;
			akhuas=uas*0.45;
			akhir=akhtugas+akhuts+akhuas;
		}
		void output(){
			cout<<endl;
			cout<<"Nama : "<<nama<<endl;
			cout<<"Mata Kuliah : "<<matkul<<endl;
			cout<<"Nilai Tugas : "<<tugas<<endl;
			cout<<"Nilai UTS : "<<uts<<endl;
			cout<<"Nilai UAS : "<<uas<<endl;
			cout<<"Nilai rata-rata : "<<rata<<endl;
			cout<<"Nilai Akhir : "<<akhir<<endl;
		}
};
main(){
	Nilai mhs;
	mhs.input();
	mhs.proses();
	mhs.output();
	return 0;
}
