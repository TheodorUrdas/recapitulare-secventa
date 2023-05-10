#pragma once
#include <iostream>
#include <fstream>
using namespace std;
#include "functii.h"

//Fie un număr natural s și un șir de n numere naturale nenule. Să se determine suma maximă posibilă, mai mică sau egală cu s ce se poate obține 
//dintr-un subșir al șirului.
void pb1() {

	int v[1000], n;
	citire(v, n);
	secvMin(v, n);
}

//Se citește din fișierul lowmem1.in de pe prima linie un număr k, iar de pe a doua linie un șir de cel mult 1.000.000 numere întregi, de cel mult 
//9 cifre fiecare. Să se determine valoarea maximă S, care se poate obține prin însumarea a k numere consecutive și secvența de numere care formează 
//această sumă maximă.
void pb2() {

	int v[1000], n, k;
	citire(v, n);
	cout << "k=";
	cin >> k;
	secvK(v, n, k);
}