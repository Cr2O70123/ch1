//3-3in c
#include <iostream>
#include <iomanip>
#include <cmath>
#include <stdio.h>

using namespace std;

int main ()
{
	int v1 = pow(2,31)-1; //宣告int型態即為long型態 
	char v3 = 'A';
	bool v4 = true ;
	float v5 = exp(1);
	double v6 = exp(1);
	
	printf("(v1)int = %d\n",v1);
	printf("(v3)char = %c\n",v3);
	printf("(v4)bool = %d\n",v4);
	printf("(v5)float = %f\n",v5);
	printf("(v6)double = %.15f\n",v6);
	system("Pause");
}

