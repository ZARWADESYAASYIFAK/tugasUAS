#include <iostream>
#include <cmath>
using namespace std;


int main() {
	 char input = 0;
	
	cout <<"=============MENU==============\n";
	cout <<"1.Luas Persegi Panjang\n";
	cout <<"2.Keliling Persegi Panjang\n";
	cout <<"3.Panjang Diagonal Persegi Panjang\n";
	cout <<"4.Keluar Program";
	cout <<"====================================\n";
	cout <<"\n";
	int x;
	cout <<"Pilihan Anda :";
	
	while (1) {
		cin >> input; 
	      if(input=='l'){
		       int p, l;
			   int sum;
			   cout<<"Panjang :";
			   cin >> p;
			   cout << "Lebar :";
			   cin >> l;
			   sum = p*1;
			   cout << "Luas Persegi :"<< sum <<"\n\n";
			   int x;
			   cout << "Pilihan Anda :";
		}
		else if (input == '2') {
		 int sum;
		 int p, l;
		     cout << "panjang :";
		     cin >> p;
		     cout << "lebar :";
			 cin >> l;
			 sum = 2*p + 2*1;
			 cout << "Keliling Persegi Panjang :" << sum << "\n\n";
			 int x;
			 cout << "Pilihan Anda :";
		} 
		else if (input == '3') {
			int p, l;
			int sum;
			cout << "Panjang :";
			cin >> p;
			cout << "Lebar :";
			cin  >> l;
			sum = sqrt(p*p + l*l);
			cout << "Panjang Diagonal ;" << sum;
		}
		else if (input == '4') {
		     cout << "\n\n\n";
		     cout << "           program selesai         ";
		     exit(0);
		}
		else if (input !='\n') {
		    cout << "maaf ' " << "'tidak  ada di menu \n\n";
		    int x;
		    cout << "Pilihan anda :";
		}
	}
	return 0;
	}

