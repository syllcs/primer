#include <vector>
#include <iostream>
#include <memory>
using namespace std;

shared_ptr<vector<int>> create_vector() {
	shared_ptr<vector<int>> vec = make_shared<vector<int>>();
	return vec;
}

void insert_vector(shared_ptr<vector<int>> vec) {
	int i;
	while (cin >> i) {
		vec->push_back(i);
	}
}

void print_vector(shared_ptr<vector<int>> vec) {
	for (int i : *vec) {
		cout << i << " ";
	}
	cout << endl;
}

int main() {
	auto vec = create_vector();
	insert_vector(vec);
	print_vector(vec);
}
