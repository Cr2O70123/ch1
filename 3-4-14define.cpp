//3-4-1 define
#include <iostream>
#include <iomanip>
#define PI 3.14159
using namespace std;

int main()
{
	int rad = 10;
    float perimeter ,c_area;
	
	perimeter = 2*PI*rad;
	
	c_area = rad*rad*PI;
	
	cout << "rad is" <<""<< rad << "cm\n";
	cout << "perimeter is"<<"" <<  perimeter << "cm\n";
	cout << "circle is" << c_area << "cm2\n";
	cout << endl;
	system("Pause");
}
