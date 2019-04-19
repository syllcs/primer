#include <iostream>
#include <tuple>
#include <vector>
#include <list>

using namespace std;

int main() {
    tuple<size_t, size_t, size_t> threeD;
    tuple<string, vector<double>, int, list<int>> someVal("constants", {3.14, 2.718}, 42, {0, 1, 2, 3, 4});

    tuple<size_t, size_t, size_t> threeD2 = {1,2,3};
    tuple<size_t, size_t, size_t> threeD3{1,2,3};
    auto item = make_tuple("0-999-x", 2, 20.00);
    auto book = get<0>(item);
    auto cnt = get<1>(item);
    auto price = get<2>(item)/cnt;
    get<2>(item) *= 0.8;
    typedef decltype(item) trans;
    size_t sz = tuple_size<trans>::value;
    cout << sz << endl;
    tuple_element<1, trans>::type cnt2 = get<1>(item);
    cout << cnt2 << endl;

    // compare
    tuple<string, string> duo("1", "2");
    tuple<size_t, size_t> twoD(1, 2);
    // bool b = (duo == twoD); cannot compare.
    tuple<size_t, size_t, size_t> threeD4(1,2,3);
    // bool b = (twoD < threeD); cannot compare.
    tuple<size_t, size_t> origin(0, 0);
    bool b = (origin < twoD);
    cout << b << endl;
}