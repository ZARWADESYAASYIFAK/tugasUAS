#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int masuk,keluar,jumlah,biaya;
	cout<<"Menghitung biaya parkiran kendaraan roda empat"<<endl;
	cout <<endl;
	cout<<"masukan jam masuk kendaraan anda :";
	cin>>masuk;
	cout<<"masukan jam keluar kendaraan anda :";
	cin>>keluar;
	jumlah = keluar - masuk;
	
	biaya=jumlah*3000;
    cout<<"Biaya Parkir Kendaraan Anda Adalah Rp :"<< biaya;

return 0;

}
