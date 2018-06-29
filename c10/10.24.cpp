string s;
vector<int> vi;
auto iter = find_if(vi.begin(), vi.end(), bind(check_size, _1, s.size()));
