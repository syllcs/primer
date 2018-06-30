using compareType = bool (*)compareIsbn(Sales_data&, Sales_data&);

multiset<Sales_data, compareType> bookstore(compareIsbn); 

//multiset<Sales_data, *(Sales_data&, Sales_data) -> bool)> bookstore(compareIsbn);
