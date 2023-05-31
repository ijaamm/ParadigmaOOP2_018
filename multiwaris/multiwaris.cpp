#include <iostream> 
#include <string> 
using namespace std;

class orang {
public:
	string nama;

	orang(string pNama) :
		nama(pNama) {
		cout << "orang dihapus\n" << endl;
	}
	~orang() {
		cout << "orang dihapus\n" << endl;
	}
};

