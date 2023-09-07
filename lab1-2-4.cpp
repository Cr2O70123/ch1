//lab 1-2-4
#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	int v1=12, v2=36 , temp;
	cout << "before swap: v1 = " << v1 <<" ,v2 = " << v2 << endl;
	temp = v1;
	v1 = v2;
	v2 = temp;
	cout << "after swap: v1 = " << v1 <<" ,v2 = " << v2 << endl;
	return 0;
}
