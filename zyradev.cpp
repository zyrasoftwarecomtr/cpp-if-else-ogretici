#include <iostream>
#include <cmath>

using namespace std;
int main() {

	
	cout << "* * * * * * * * * * * * *" << endl;
	cout << "*                       *" << endl;
	cout << "*                       *" << endl;
	cout << "*    Zyra Software      *" << endl;
	cout << "*                       *" << endl;
	cout << "*                       *" << endl;
	cout << "*************************" << endl;


	/*
	int y;
	
	cout << " Ltfen sifreinizi girin ";
	cin >> y;
	
	cout << "sirfeniz " << y << " Olarak belirlendi " << endl;

	cout << " Ltfen sifrenizi girin ";
	int girilenSifre;
	cin >> girilenSifre;

	if (girilenSifre != y)
	{
		cout << " Sifre Hatali! ";
	
	}
	else
	{
		cout << " Sifre dogru ";
	}

	return 0;

	
	*/

	cout << " Lutfen 1. sayiyi gir ";

		int y;
		cin >> y;

		cout << " Lutfen 2. sayiyi gir ";
		int x;
		cin >> x;

		cout << " Lutfen isleminizi secin " << endl;
		cout << " 1. Toplama " << endl;
		cout << " 2. Cikarma " << endl;
		cout << " 3. Carpma " << endl;
		cout << " 4. Bolme " << endl;
		
		int secilenIslem;
		cin >> secilenIslem;

		if (secilenIslem == 1)
		{
			int cıkan = y + x;
			cout << " islem sonucu: " << cıkan << endl;
		}
		else if (secilenIslem == 2) {
			int cıkan =  y - x;
			cout << " islem sonucu: " << cıkan << endl;
		}
		else if (secilenIslem == 3) {
			int cıkan = y * x;
			cout << " islem sonucu: " << cıkan << endl;
		}
		else if (secilenIslem == 4) {
			int cıkan = y / x;
				
			cout << " islem sonucu: " << cıkan << endl;
		}
		else {
			cout << " Ltfen 1-4 arası sayi gir";
}


		
	
            
		
	
		


}
