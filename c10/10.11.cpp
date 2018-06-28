bool compareIsbn(const Sales_data& sd1, const Sales_data& sd2) {
	return sd1.isbn() > sd2.isbn();
}

void sd_sort(vector<Sales_data>& vsd) {
	sort(vsd.begin(), vsd.end(), compareIsbn);
}

