#include <vector>
#include <iostream>
using namespace std;

vector<int>* create_vector() {
	vector<int> *vec = new vector<int>;
	return vec;
}

void insert_vector(vector<int>* vec) {
	int i;
	while (cin >> i) {
		vec->push_back(i);
	}
}

void print_vector(vector<int>* vec) {
	for (int i : *vec) {
		cout << i << " ";
	}
	cout << endl;
}

int main() {
	vector<int>* vec = create_vector();
	insert_vector(vec);
	print_vector(vec);
	delete vec;
}
