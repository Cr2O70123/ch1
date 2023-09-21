//3-4
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int rad = 10;
	const float pi =3.14159f;
	float perimeter ,c_area;
	
	perimeter = 2*pi*rad;
	
	c_area = rad*rad*pi;
	
	cout << "rad is" <<""<< rad << "cm\n";
	cout << "perimeter is"<<"" <<  perimeter << "cm\n";
	cout << "circle is" << c_area << "cm2\n";
	cout << endl;
	system("Pause");
}
