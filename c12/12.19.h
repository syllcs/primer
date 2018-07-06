#ifndef EX1219H
#define EX1219H
#include <iostream>
#include <vector>
#include <memory>
#include <string>
#include <exception>
using std::out_of_range;
using std::string;
using std::shared_ptr;
using std::make_shared;
using std::vector;
using std::weak_ptr;

class StrBlobPtr;
 
class StrBlob {
	
public:
	friend class StrBlobPtr;
	typedef vector<string>::size_type size_type;
	StrBlobPtr begin();
	StrBlobPtr end();
	StrBlob();
	StrBlob(std::initializer_list<string> il);
	size_type size() const {return data->size();}
	bool empty() const {return data->empty();}
	void push_back(const string& t) {data->push_back(t);}
	void pop_back();
	
	string& front();
	string& back();
	const string& front() const;
	const string& back() const;

private:
	shared_ptr<vector<string>> data;
	void check(size_type i, const string &msg) const;
};

StrBlob::StrBlob() : data(make_shared<vector<string>>()) { }
StrBlob::StrBlob(std::initializer_list<string> il) : data(make_shared<vector<string>>(il)) { }

void StrBlob::check(size_type i, const string &msg) const {
	if (i >= data->size()) 
		throw out_of_range(msg);
}

void StrBlob::pop_back() {
	check(0, "pop_back on empty StrBlob");
	data->pop_back();
}

string& StrBlob::front() {
	check(0, "front on empty StrBlob");
	return data->front();
}

string& StrBlob::back() {
	check(0, "back on empty StrBlob");
	return data->back();
}

const string& StrBlob::front() const {
	check(0, "front on empty StrBlob");
	return data->front();
}

const string& StrBlob::back() const {
	check(0, "back on empty StrBlob");
	return data->back();
}



class StrBlobPtr{
public:
	StrBlobPtr(): curr(0) {};
	StrBlobPtr(StrBlob& a, size_t pos = 0) : wptr(a.data), curr(pos) {}
	string& deref() const;
	StrBlobPtr& incr();
	
private:
	shared_ptr<vector<string>> check(std::size_t, const std::string&) const;
	std::size_t curr;
	weak_ptr<vector<string>> wptr;
};

shared_ptr<vector<string>> StrBlobPtr::check(std::size_t i, const std::string& msg) const {
	auto ret = wptr.lock();
	if (!ret) {
		throw std::runtime_error("unbound StrBlobPtr");
	}
	if (i >= ret->size()) {
		throw std::out_of_range(msg);
	}
	return ret;
}


string& StrBlobPtr::deref() const {
	auto p = check(curr, "dereference past end");
	return (*p)[curr];
}

StrBlobPtr& StrBlobPtr::incr() {
	check(curr, "increment past end of StrBlobPtr");
	curr++;
	return *this;
}

StrBlobPtr StrBlob::begin()  { return StrBlobPtr(*this);}

StrBlobPtr StrBlob::end() {return StrBlobPtr(*this, data->size());}
#endif
