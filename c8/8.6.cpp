int main(int argc, char** argv) {
	Sales_data total;
	ifstream ifs(argv[1]);
	ofstream ofs(argv[2]), ofstream::app);
	if (read(ifs, total)) {
		Sales_data trans;
		while (read(ifs, trans)) {
			if (total.isbn() == trans.isbn())
				total.combine(trans);
			else {
				print(ofs, total) << endl;
				total = trans;
			}
		}
		print(ofs, total) << endl;
	} else {
		cerr << "No data?" << endl;
	}
}
