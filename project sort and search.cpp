//Kode By Riyan Adi
//Search and Sort C++
#include <iostream>
#include <string.h>
#define maks 100
using namespace std;

class Warung{
	public :
		void input();
		void sort();
		void search();
		void output();
		
		
	private:
		int n, cari;
		bool cek;
		typedef struct barang{
			int kd_brg;
			char nama[maks];
			int stok;
		}barang;
		barang brg[10];
		barang t;
};
void Warung::sort(){
	cout<<"hai"<<endl;
	for(int i=0; i<n; i++){
		for(int j=0; j<(n-1); j++){
			if(brg[j].stok > brg[j+1].stok){
				t.kd_brg=brg[j].kd_brg;
    			brg[j].kd_brg=brg[j+1].kd_brg;
    			brg[j+1].kd_brg=t.kd_brg;
    			
    			strcpy(t.nama, brg[j].nama);
    			strcpy(brg[j].nama, brg[j+1].nama);
        		strcpy(brg[j+1].nama, t.nama);
    			
    			t.stok=brg[j].stok;
    			brg[j].stok=brg[j+1].stok;
    			brg[j+1].stok=t.stok;
			}
		}
	}
	
	
}
void Warung::input(){
	cout << "Masukkan banyak barang : ";
	cin >> n;
	for (int i=0; i<n; i++){
		cout<<"Masukkan kode produk : ";
		cin>>brg[i].kd_brg;
		cout<<"Masukkan nama produk : ";
		cin>>brg[i].nama;
		cout<<"Masukkan stok produk : ";
		cin>>brg[i].stok;
		cout<<endl;
	}
}

void Warung::search(){
	cout<<"Masukkan kode barang yang dicari : ";
	cin>>cari;
	cout<<"\t+-------------------------------------------------------------+"<<endl;
	cout<<"\t|              Nama Barang               |     Stok Barang    |"<<endl;
	for(int i=0; i<n; i++){
		if(brg[i].kd_brg == cari){
			cek = true;
			cout<<"\t|\t  "<<brg[i].nama << "\t\t\t "<<brg[i].stok<<"    |"<<endl;
		}
	}
	cout<<"\t+-------------------------------------------------------------+"<<endl;
	if(cek!=true){
		cout<<"==Data Tidak Ditemukan=="<<endl;
	}
}

void Warung::output(){
	cout<<"Daftar Barang : "<<endl;
	cout<<"\t+-------------------------------------------------------------+"<<endl;
	cout<<"\t| Id Barang\t|\tNama Barang\t|\tStok Barang\t|"<<endl;
	for (int i=0; i<n; i++){
		cout<<"\t|\t"<<brg[i].kd_brg;
		cout<<"\t\t"<<brg[i].nama;
		cout<<"\t\t\t"<<brg[i].stok<<"\t|"<<endl;
	}
	cout<<"\t+-------------------------------------------------------------+"<<endl;
}


int main(){
	Warung Riyan;
	Riyan.input();
	Riyan.sort();
	Riyan.search();
	Riyan.output();
	
	return 0;
}
