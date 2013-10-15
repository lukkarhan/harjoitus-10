/*
Teht„v„: Harjoitus 10
Tekij„: Hanna Lukkarinen, IIO13S1
Pvm: 15.10.2013

Tee ohjelma, joka laskee sy”tetyist„ kokonaisluvuista sek„ positiivisten
ett„ negatiivisten kokonaislukujen osuuden. Lukujen sy”tt„ lopetetaan
sy”tt„m„ll„ luku 0.

Tulostus:
Sy”tit kokonaislukuja seuraavasti:
----------------------------------
Negatiiviset 7 kpl 70.00%
Positiiviset 3 kpl 30.00%
Yhteens„ 10 kpl 100.00%

 */

#include <iostream>
using namespace std;

int main()
{

	int luku, positiivinen = 0, negatiivinen = 0, yhteensa = 0;
	
	cout<<"Sy”t„ kokonaislukuja. Sy”t„ 0, kun haluat lopettaa";
	cin>>luku;

	while(luku !=0)
	{
		if(luku > 0)
		{
			positiivinen++;
			yhteensa++;
		}
		else if (luku < 0)
		{
			negatiivinen++;
			yhteensa++;
		}
		cin >>luku;
	}
	
	cout<<
		"Sy”tit kokonaislukuja seuraavasti:\n"
		"-----------------------------------\n"
		"Negatiiviset "<<negatiivinen<<" kpl "<<float(negatiivinen) / float(yhteensa) * 100.00 <<"%\n"
		"Positiiviset "<<positiivinen<<" kpl "<<float(positiivinen) / float(yhteensa) * 100.00 <<"%\n"
		"Yhteens„ "<<yhteensa<<" kpl 100%"<<endl;

	return 0;
}