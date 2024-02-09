// CPP program without virtual destructor 
// causing undefined behavior
#include <iostream>

using namespace std;

class base {
public:
	base()	 
	{ cout << "Constructing base\n"; }
	 ~base()
	{ cout<< "Destructing base\n"; }	 
};

class derived: public base {
public:
	derived()	 
	{ cout << "Constructing derived\n"; }
	~derived()
	{ cout << "Destructing derived\n"; }
};

int main()
{
    base* ptr1 = new derived();
    base* ptr2 = new derived();
    //getchar();
    delete ptr1;
    delete ptr2;
    return 0;
}
