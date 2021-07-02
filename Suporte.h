#pragma once
#include<array>
#include "Quicksort.h"

void printvector(std::vector<double> V) {
	for (int i = 0; i < V.size(); i++) {
		std::cout << V[i] << " ";
	}

}


//Media
double mean(const std::vector<double>& data) {

	
	double soma = 0;
	int n = data.size();
	
	for (int i = 0; i < n; i++) {
		soma = soma + data[i];
	}

	return soma / data.size();
}


//Moda
double mode(const std::vector<double>& data) {
	
	float moda;
	int cont = 0;
	int max = 0;
	std::vector<double> Freq;

	for (int i = 0; i < data.size(); i++) {
		for (int j = i + 1; j < data.size(); j++) {
			if (data[i] == data[j]) {
				cont += 1;
			}
		}

		if (cont > max) {
			max = cont;
			moda = data[i];
			
		}

		}
	return moda;
	}

//Percentil

double percentile(std::vector<double>& data, int p){

	int n = data.size();
	int k = (p * (n + 1)) / 100;

	int a = Quicksort(data, 0, n-1);

	double A = data[k];

	

	return A;
	}


//Mediana
double median(std::vector<double>& data) {
	return percentile(data, 50);
}



