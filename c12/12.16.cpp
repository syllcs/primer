#include <iostream>
#include <memory>
using namespace std;

int main() {
	unique_ptr<int> p(new int(9));
	
	int* p1 = p;
}
	
