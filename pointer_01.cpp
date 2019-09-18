#include <iostream>
#include <iomanip>

using namespace std;

int main() {

	int grade1 = 0, grade2 = 0, grade3 = 0;
	int* pgrade1 = &grade1;
	int* pgrade2 = &grade2;
	int* pgrade3 = &grade3;

	cin >> grade1 >> grade2 >> grade3;
	
	cout.setf(10);

	cout << "Value :"<<setw(10)<<" grade1 = " << setw(10) << grade1 << setw(10) << " *pgrade1 = " << setw(10) << *pgrade1 << setw(10) << " *&grade1 = " << setw(10) << *&grade1 << endl;
	cout << "Addr : "<<setw(10)<<" &grade1 = " << setw(10) << &grade1 << setw(10) << " pgrade1 = " << setw(10) << pgrade1 << setw(10) << " &grade1 = " << setw(10) << &grade1 << endl;

	cout << "Value : "<<setw(10)<<"grade2 = " << setw(10) << grade2 << setw(10) << " *pgrade2 = " << setw(10) << *pgrade2 << setw(10) << " *&grade2 = " << setw(10) << *&grade2 << endl;
	cout << "Addr : "<<setw(10)<<" &grade2 = " << setw(10) << &grade1 << setw(10) << " pgrade2 = " << setw(10) << pgrade2 << setw(10) << " &grade2 = " << setw(10) << &grade2 << endl;

	cout << "Value :"<<setw(10)<<" grade3 = " << setw(10) << grade3 << setw(10) << " *pgrade3 = " << setw(10) << *pgrade3 << setw(10) << " *&grade3 = " << setw(10) << *&grade3 << endl;
	cout << "Addr : "<<setw(10)<<" &grade3 = " << setw(10) << &grade3 << setw(10) << " pgrade3 = " << setw(10) << pgrade3 << setw(10) << " &grade1 = " << setw(10) << &grade3 << endl;
	
	//Use of pointer & its properties 
	
	return 0;
}
