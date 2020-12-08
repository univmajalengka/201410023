#include<iostream>
using namespace std;
int main()
{
int j1,m1,d1,j2,m2,d2,d3,td1,td2,td3,sm,m3,j3;
cout<<"Jam Pertama:" ;
cin>>j1;
cout<<"Menit Pertama:" ;
cin>>m1;
cout<<"Detik Pertama:" ;
cin>>d1;
cout<<"Jam Kedua:" ;
cin>>j2;
cout<<"Menit Kedua:" ;
cin>>m2;
cout<<"Detik Kedua:" ;
cin>>d2;
td1=(j1*3600)+(m1*60)+d1;
td2=(j2*3600)+(m2*60)+d2;
td3=td2-td1;
j3=td3/3600;
sm=td3%3600;
m3=sm/60;
d3=sm%60;

cout<<j3<<":"<<m3<<":"<<d3;
return 0;

}

 
