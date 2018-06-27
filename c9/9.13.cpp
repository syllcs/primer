#include <list>
#include <vector>
using namespace std;

list<int> li;

list<int>::iterator li_begin = li.begin();
list<int>::iterator li_end = li.end();

vector<double> vi(li_begin, li_end);


