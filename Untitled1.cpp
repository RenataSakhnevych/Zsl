#include <iostream>

using namespace std;

class Pole{
	public:
	int wallA;
	int wallB;
	
	void poleProstokata(){
	cout << "Pole prodtok¹ta: " << wallA*wallB << endl;
};
void obetosc(){
cout << "Obwód prostok¹ta: " << (wallA+wallB)*2 <<endl;
};
};

int main(int argc, char** argv){
	setlocale(LC_CTYPE,"polish");
	Pole why;
	why.wallA = 10;
	why.wallB = 25;
	why.obetosc();
	why.poleProstokata();
};
