#include<iostream>
using namespace std;
int totaldetik(int j, int m, int d);
int function_waktu (int td);
void tampil (int show);
int main()
{
	cout<<"Function Konversi Total Detik"<<endl;
	int td, waktu, a, b, c, d;
	td=totaldetik(a, b, c);
	tampil(td);
	waktu=function_waktu(td);
	return 0;
}
//function mencari total detik
int totaldetik(int j, int m, int d){
	int td;
	cout<<"Konversi Jam Menit Detik Ke Total Detik"<<endl;
	cout<<"Masukan waktu"<<endl;
	cout<<"jam = ";cin>>j;
	cout<<"menit = ";cin>>m;
	cout<<"detik = ";cin>>d;
	td=(j*3600)+(m*60)+d;
	cout<<"total detik =";
	return td;
}
//function konversi total detik
int function_waktu(int td)
{
	int j, m, sm, d;
	cout<<endl;
	cout<<"Konversi total detik ke jam, menit, detik"<<endl;
	cout<<"masukan total detik :";
	cin>>td;
	j=td/3600;
	sm=td%3600;
	m=sm/60;
	d=sm%60;
	cout<<"waktu awal ="<<j<<";"<<m<<";"<<d;
	return 0;
}
void tampil (int show)
{
	cout<<show;
}
