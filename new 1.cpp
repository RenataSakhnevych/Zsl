#include <iostream>

using namespace std;

class Worker{
	public:
string name;
string surname;
string nationality="Polska";

//definicja metody showName
void showName(){
	cout << "Twoje imi�" << name << endl;
};

//deklaracja (protatyp) showSurname
void showSurename();
};

//definicja metody showSurename
void Worker::showSurename(){
	cout << "test metody showSurename" << endl;
};

void Worker:: showAllDate(){

	cout << "Imi� i nazwisko: " << name << " "
	<< surname << *\
	
};

int main(int argc, char** argv){
	setlocale(LC_CTYPE,"polish");
	
	
Worker pracownik;
pracownik.name="Krystyna";
cout << "Narodowo��: "<< pracownik.nationality << endl;
pracownik.nationality="USA";
cout << "Narodowo��: "<< pracownik.nationality << endl;
pracownik.showName();
pracownik.showSurename();

return 0;
};


