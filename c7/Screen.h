#include <iostream>
#include <string>

#ifndef SCREEN_H
#define SCREEN_H
using namespace std;

// not necessary
//class Window_mgr;
 
class Screen {
	friend class Window_mgr;
public:
	//using pos = string::size_type;
	//this line must be at first!
	typedef string::size_type pos;
	
	Screen& set(pos, pos, char);
	Screen& set(char);
	
	Screen() = default;
	Screen(pos ht, pos wd):height(ht), width(wd), contents(ht*wd, ' ') {}
	Screen(pos ht, pos wd, char c): height(ht), width(wd), contents(ht*wd, c) {}
	
	char get() const {return contents[cursor];}
	inline char get(pos ht, pos wd) const;
	
	Screen& move(pos r, pos c);
	
	void some_member() const;
	
	Screen& display(ostream& os) { do_display(os); return *this;}
	const Screen& display(ostream& os) const { do_display(os); return *this;}
private:
	pos cursor = 0;
	pos height = 0, width = 0;
	string contents;
	mutable size_t access_str;
	void do_display(ostream& os) const { os << contents; }
};

inline Screen& Screen::move(pos r, pos c) {
	cursor = r * width + c;
	return *this;
}

char Screen::get(pos ht, pos wd) const {
	return contents[ht * width + wd];
}

void Screen::some_member() const {
	access_str++;
}

inline Screen& Screen::set(char c) {
	contents[cursor] = c;
	return *this;
}

inline Screen& Screen::set(pos ht, pos wd, char c) {
	contents[ht * width + wd] = c;
	return *this;
}

#endif
