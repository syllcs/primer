#include <tuple>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    tuple<int, int, int> t(10, 20, 30);
    auto t2 = make_tuple(10, 20, 30);
    auto t3 = make_tuple(string(), vector<string>(), pair<string, int>());

}