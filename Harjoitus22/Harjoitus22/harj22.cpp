#include <iostream>
using namespace std;

struct HKL
{
	char etunimi[20];
	float matka;
	int hattu;
};

int Valikko();
void TulostaKaikkiHenkilot(HKL henkilo[], int lkm);
void LisaaHenkilo(HKL henkilo[], int *lkm);

void main()
{
	int valinta = 1, lkm = 0, i = 0;
	HKL henkilo[10];

	while (valinta != 0)
	{
		valinta = Valikko();
		switch (valinta)
		{
		case 0: valinta = 0; break;
		case 1: LisaaHenkilo(henkilo, &lkm); break; // cout << "Etunimi: "; cin >> henkilo[i].etunimi; cout << "Koulumatka: "; cin >> henkilo[i].matka; cout << "Hatun koko: "; cin >> henkilo[i].hattu; i++; lkm++; break;
		case 2: TulostaKaikkiHenkilot(henkilo, lkm);
				break;
		}
	}
}

int Valikko()
{
	int valinta;
	cout << "VALIKKO" << endl << "0 Lopeta" << endl << "1 Lisaa henkilo" << endl << "2 Nayta kaikki henkilot" << endl;
	cin >> valinta;
	return valinta;
}

void TulostaKaikkiHenkilot(HKL henkilo[], int lkm)
{
	for (int i = 0; i < lkm; i++)
	{
		cout << henkilo[i].etunimi << " " << henkilo[i].matka << " " << henkilo[i].hattu << endl;
	}
}

void LisaaHenkilo(HKL henkilo[], int *lkm)
{
	*lkm++; cout << "Etunimi: "; cin >> henkilo[*lkm].etunimi; cout << "Koulumatka: "; cin >> henkilo[*lkm].matka; cout << "Hatun koko: "; cin >> henkilo[*lkm].hattu;
}

/*for (i = 0; i < lkm; i++){//TulostaHenkilo(henkilo[i]);	}*/
//void TulostaHenkilo(HKL henkilo);
/*
void TulostaHenkilo(HKL henkilo)
{
	cout << henkilo.etunimi << " " << henkilo.matka << " " << henkilo.hattu << endl;
}
*/

/*
cout << henkilo[i].etunimi << " " << henkilo[i].matka << " " << henkilo[i].hattu << endl;
*/