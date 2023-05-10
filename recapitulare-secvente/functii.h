#pragma once
#include <iostream>
#include <fstream>
using namespace std;

void citire(int v[], int& n) {

	ifstream f("numere.txt");
	f >> n;
	for (int i = 0; i < n; i++) {
		f >> v[i];
	}
}

void afisare(int v[], int n) {

	for (int i = 0; i < n; i++) {
		cout << "v[" << i << "]=";
		cout << v[i];
	}
}

int sumaIJ(int v[], int n, int i, int s) {
	
	int suma = s + v[i];
	return suma;
}

void secvMin(int v[], int n) {

	int suma, s=0, smax=0;
	cout << "suma=";
	cin >> suma;
	for (int i = 0; i < n; i++) {

		int j = i;
		while(sumaIJ(v,n,i,s)<suma){
			s = sumaIJ(v, n, i, s);
			
		}
		if (s >= smax) {
			smax = s;
		}
		s = 0;
		
	}
	
	cout << smax;
}

int sumaIK(int v[], int n, int i, int ik) {

	int suma = 0;
	for (i; i < ik; i++) {
		suma = suma + v[i];
	}
	return suma;
}

void afisareIJ(int v[], int n, int i, int j) {

	for (j; j <= i; j++) {
		cout << v[i] << " ";
	}
}

void secvK(int v[], int n, int k) {

	int smax = 0;
	int sMax = 0;
	int dMax = 0;
	for (int i = 0; i < n-k; i++) {

		int j = i;
		if (sumaIK(v, n, i, i + k) >= smax) {
			smax = sumaIK(v, n, i, i + k);
			sMax = j;
			dMax = i;
		}
	}
	cout << smax << endl;
	afisareIJ(v, n, dMax, sMax);
}