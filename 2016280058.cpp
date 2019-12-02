#include <iostream>
#include <string>

using namespace std; 
 class romanTipi{
public:
    romanTipi();
    romanTipi(string s);
    ~romanTipi();

        void RomanYap(string); //Girdi alýyoruz
        int RomandanSayiya(); //Roma rakamýndan sayýya dönüþtürme
        void printDecimal(); //Decimal sayýyý yazdýracak.
        void RomanYazdir(); //Roma rakamýný yazdrýýyor.
private:
    string RomanSayi;
    int DecimalSayi = 0;

};

romanTipi::romanTipi()
{
    RomanSayi = 1;
}

romanTipi::~romanTipi()
{
}

void romanTipi::RomanYap(string troll)
{
    RomanSayi = troll;
}

int romanTipi::RomandanSayiya()  //if li iþlemler
{
    for (int i = 0; i < RomanSayi.length(); i++)
    {
        if (RomanSayi[i] == 'I')
            DecimalSayi++;
        if (RomanSayi[i] == 'V')
        {
            if (i > 0 && RomanSayi[i - 1] == 'I')
                DecimalSayi -= 2;
            DecimalSayi += 5;
        }
        if (RomanSayi[i] == 'X')
        {
            if (i > 0 && RomanSayi[i - 1] == 'I')
                DecimalSayi -= 2;
            DecimalSayi += 10;
        }
        if (RomanSayi[i] == 'L')
        {
            if (i > 0 && RomanSayi[i - 1] == 'X')
                DecimalSayi -= 20;
            DecimalSayi += 50;
        		}
        if (RomanSayi[i] == 'C'){
		
            if (i > 0 && RomanSayi[i - 1] == 'L')
                DecimalSayi -=  20;
            DecimalSayi += 100;
        }
        if (RomanSayi[i] == 'D'){
			if(i > 0 && RomanSayi[i - 1] == 'C')
				DecimalSayi -= 20;
			DecimalSayi += 500;
	}
		if (RomanSayi[i] == 'M'){
			if(i > 0 && RomanSayi[i - 1] == 'D')
				DecimalSayi -= 20;
			DecimalSayi +=1000;
		
		
		}
		}
    
    cout << DecimalSayi << endl;
    return DecimalSayi;
}
   
     
     // Roma rakamlarýný yazdýran kýsým
int RomanYazdir(int sayii) 
{ 
    int say[] = {1,4,5,9,10,40,50,90,100,400,500,900,1000}; 
    string sem[] = {"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"}; 
    int i=12;     
    while(sayii>0) 
    { 
      int bol = sayii/say[i]; 
      sayii = sayii%say[i]; 
      while(bol--) 
      { 
        cout<<sem[i]; 
      } 
      i--; 
    } 
} 

// ÇALIÞAN KISIM
int main()
{
	int secilendeger=0;
	int sayii;
	string Girdim;
	int degerim;

	cout << "Yapilacak islemi secin" << endl;
	cout << "Sayiyi Roman rakamina cevirmek icin 1" <<endl;
	cout << "Roman rakamini sayiya cevirmek icin 2" <<endl;
	cin >> secilendeger;
	
	switch(secilendeger)
	{
		case 1:
			printf("Onluk tabandaki sayiyi girin: ");
			cin >> sayii;
			if(sayii<1 || sayii>3999)
			{
				cout << "Lutfen 1 ile 3999 arasi sayi giriniz " <<endl;
				break;
			}
			else
			{
				cout << "Degerin donusturulmus hali : " <<endl; 
				RomanYazdir(sayii);
				break;
			}
		 case 2:
		string sayisal;
    do{
        cout << "Lutfen I ve MMMCMXCIX arasinda bir Roma rakami giriniz : ";
        cin >> sayisal;
        romanTipi Rom;
        Rom.RomanYap(sayisal);
        Rom.RomandanSayiya();

    } while (true);
    system("DURDUR");

}
	return 0;
}

