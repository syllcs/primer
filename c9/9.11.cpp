#include <vector>

vector<int> v1;

vector<int> v2(v1);
vector<int> v3 = v2;

vector<int> v4{1,2,3};
vector<int> v5 = {1,2,3};

vector<int>::iterator b = v5.begin();
auto e = v5.end();
vector<int> v6(b, e);

vector<int> v7(3);
vector<int> v8(3,1);
