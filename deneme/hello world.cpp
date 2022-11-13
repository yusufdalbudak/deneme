/*  #include  <iostream>

using namespace std;

int main() {

	string isim = "ahmet kaya";
	int yas = 20;
	char notOrtalamasi = 'A';
	float sayýsalNotOrtalamasi = 3.25;
	bool SinavaGirdimi = true;



	cout << "merhaba sevgilim" << endl << endl << "ogrenci adi - soyadi : " << isim << endl;
	cout << "ogrenci yasi : "<< yas << endl;
	cout << "Not Ortalamasi: " << notOrtalamasi << endl;
	cout << "Ogrenci Sayisal not ort :" << sayýsalNotOrtalamasi << endl;
	cout << "Ogrenci Sinava Girdi Mi:" << SinavaGirdimi << endl;

	cout << endl;

	return 0;
	
}*/









//ARÝTMETÝK OPERATÖRLER
/*using namespace std;

int main() {

	string isim = "ahmet kaya";
	int yas = 20;
	char notOrtalamasi = 'A';
	float sayýsalNotOrtalamasi = 3.25;
	int not1 = 70;
	int not2 = 80;
	bool SinavaGirdimi = true;

	int sinavlarOrtalamasi = (not1 + not2) / 2;


	cout << "merhaba sevgilim" << endl << endl << "ogrenci adi - soyadi : " << isim << endl;
	cout << "ogrenci yasi : " << yas << endl;
	cout << "Not Ortalamasi: " << notOrtalamasi << endl;
	cout << "Ogrenci Sayisal not ort :" << sayýsalNotOrtalamasi << endl;
	cout << "Ogrenci Sinava Girdi Mi:" << SinavaGirdimi << endl;
	cout << "sýnavlar not ortalamasý: " << sinavlarOrtalamasi << endl;

	cout << endl;

	return 0;

}*/
	
	/*using namespace std;

	int main() {

		int x = 20;
		int y = 4;
		int z = x - y;
		cout << z;

		cout << endl;

		return 0;
	} */

	/*using namespace std;

int main() {
	int x;


	cout << "bir sayi giriniz: "; 

	cin >> x;
	cout << "girdiginiz sayi: " << x << endl;
	*/

	/*int a, b, c;
	
	cout << "birinci sayi: ";
	cin >> a;

	cout << "ikinci sayi: ";
	cin >> b;

	cout << "üçüncü sayi: ";
	cin >> c;

	cout << "toplamlarý : " << a + b + c << endl;



	return 0;
	



	string str1 = "bu bir stringdir";
	string str2 = "bu da bir stringdir.";

	string str3 = str1 + str2;


	cout << "str1: " << str1 << endl;
	cout << "str2: " << str2 << endl;
	cout << "str3: " << str3 << endl;


	return 0;



}*/


#include <iostream>
using namespace std;

int main() {
	/*string password = "yazilimbilimi";

	string input;

	cout << "lutfen parolanizi giriniz:";

	cin >> input;

	if (password == input) {

		cout << "parolanizi dogru girdiniz... ";
	}
	else{
		cout << "parolanizi yanlis girdiniz.";
	}*/


	/*
	int a;
	int b;

	string islem;

	cout << "hesap makinesi programýna hosgeldiniz" << endl;

	cout << "1. islem : toplama islemi" << endl;
	cout << "2. islem : cikarma islemi" << endl;
	cout << "3. islem : carpma islemi" << endl;
	cout << "4. islem : bolme islemi" << endl;


	cout << "islemi giriniz: ";
	cin >> islem;

	if (islem == "1") {
		cout << "a:";
		cin >> a;
		cout << "b:";
		cin >> b;

		cout << "toplamlarý :" << a + b << endl;



	}
	else if (islem == "2"){

		cout << "a:";
		cin >> a;
		cout << "b:";
		cin >> b;

		cout << "toplamlarý :" << a + b << endl;

	}
	else if (islem == "3"){

		cout << "a:";
		cin >> a;
		cout << "b:";
		cin >> b;

		cout << "toplamlarý :" << a + b << endl;

	}
	else if (islem == "4") {

		cout << "a:";
		cin >> a;
		cout << "b:";
		cin >> b;

		cout << "toplamlari :" << a + b << endl;

	}
	else {

	}
	*/

	/*string sys_username = "yusuf_dalbudak";
	string sys_password = "123456";
	
	string username;
	string password;

	cout << "kullanici adini girin:";
	
	cin >> username;

	cout << "parola:";

	cin >> password;

	if (sys_username == username && sys_password == password ) {
		cout << "hosgeldin" << endl;

	}

	else if (sys_username !=username && sys_password == password)
	{
		cout << "kullanici adý hatali." << endl;
	}

	else if (sys_username != username && sys_password == password)
	{
		cout << "parola hatali." << endl;
	}
	else
	{
		cout << "kullanici adi ve parola hatali." << endl;
    
	}
	return 0;
	*/
/*
int i = 1;
int j = 1;

while (i < 10 || j < 5 )
{
	cout << "i : " << i << "j: " << j << endl;
	i ++;
	j++;
}
*/

/*
string parola = "123456";
string input;

do
{
	cout << "parolanizi girin: ";
	cin >> input;
	if (input != parola)
	{
		cout << "parolayi yanlis girdiniz.." << endl;
	}

} while (input != parola);

cout << "parolayi dogru girdiniz..." << endl;
*/


/*
for ( int i = 1; i < 10; i = i + 2 )
{
	cout << "i : " << i << endl;
		 
}
*/

/*int sayi;
cout << "sayi :";
cin >> sayi;

int faktoriyel = 1;
for (int i = 1; i <= sayi; i++) {
	faktoriyel *= i;
	
	cout << faktoriyel << endl;

}

cout << "faktoriyel : " << faktoriyel << endl;
*/

/*int i = 0;
while (i < 10) {
	if ( i == 5){
	
		break;

	}

    cout << "i : " << i << endl;
    i++;

      

}
*/


for (int i = 0; i < 10; i++) {
	if (i == 3 || i == 5) {
		continue;
	}
	cout << "i : " << i << endl;


	}


return 0;

} 

	 