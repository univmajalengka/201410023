#include<iostream>
#include<string>
using namespace std;
const float persentunjangan = 0.2;
const float persenpajak = 0.15;
int main()
{
	
	string namakaryawan;
	float gajibersih, gajipokok, pajak, tunjangan;
	cout<<"Menghitung Gaji Bersih"<<endl;
	cout<<"Nama Karyawan : ";
	getline (cin, namakaryawan);
	cout<<"Gaji Pokok = ";cin>>gajipokok;
	//perhitungan
	tunjangan=gajipokok*0.2;
	pajak=gajipokok*0.15;
	gajibersih=gajipokok+tunjangan-pajak;
	//tampilan akhir
	cout<<"Gaji Bersih Bulanan "<<namakaryawan<<endl;
	cout<<"Sebesar = Rp."<<gajibersih;
	return 0; 
}
