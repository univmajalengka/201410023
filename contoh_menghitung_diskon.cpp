#include<iostream>
using namespace std;
int main()
{
	//deklarasi
	int total_beli, total_harga, diskon;
	cout<<"Program Menghitung Diskon"<<endl;
	cout<<"Jumlah Total Beli : ";
	cin>>total_beli;
	
	// total beli 0 - 25000 = 0% diskon
	if ((total_beli>=0) && (total_beli<25000)){
		diskon=total_beli*0.0;
		total_harga=total_beli-diskon;
		cout<<endl<<"Diskon 0%"<<endl;
	}
	
	//total beli 25000 - 50000 = 10% diskon
	else if ((total_beli>=25000) && (total_beli<50000)){
		diskon=total_beli*0.10;
		total_harga=total_beli-diskon;
		cout<<endl<<"Diskon 10%"<<endl;
	}
	
	//total beli 50000 - 100000 = 12.5% diskon
	else if ((total_beli>=50000) && (total_beli<100000)){
		diskon=total_beli*0.125;
		total_harga=total_beli-diskon;
		cout<<endl<<"Diskon 12,5%"<<endl;
	}
	
	//total beli lebih dari 100000 = 15% diskon
	else if (total_beli>=100000){
		diskon=total_beli*0.15;
		total_harga=total_beli-diskon;
		cout<<endl<<"Diskon 15%"<<endl;
	}
	else {
		total_harga=total_beli;
	}
	cout<<endl<<"Jumlah Harga = Rp. "<<total_harga<<endl;
	return 0;
}
