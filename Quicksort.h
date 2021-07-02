#pragma once

#include <iostream>
#include<vector>

using namespace std;

// last element is taken as pivot
int Partition(vector<double>& v, int start, int end) {

	int pivot = end;
	int j = start;
	for (int i = start; i < end; ++i) {
		if (v[i] < v[pivot]) {
			swap(v[i], v[j]);
			++j;
		}
	}
	swap(v[j], v[pivot]);
	return j;

}

int Quicksort(vector<double>& v, int start, int end) {
	int p = 0;
	if (start < end) {
		p = Partition(v, start, end);
		Quicksort(v, start, p - 1);
		Quicksort(v, p + 1, end);
	}

	//system("pause");
	return p;

	
}




/*
int main()
{

	vector<int> A = { 1,1,1,1,1,1,1,2,13,4,15,6,17,8,9,10 };
	int p;
	int tam = A.size();
	PrintVector(A);

	p = Quicksort(A, 6, A.size() - 1);

	PrintVector(A);

	cout << endl << tam << endl;
	cout << endl << p << endl;

	return 0;


}*/
