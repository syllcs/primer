class NoDefault {
public:
	NoDefault(int i);
};

class C { 
public:
	NoDefault nd;
	C(): nd(0) {}
};
