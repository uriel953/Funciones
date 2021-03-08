#include <iostream>
using namespace std;

void max (int a, int b)

int main()
{
	int n1, n2;
	cout<<"introduce el primer numero:";
	cin>>n1;
	cout<<"introduce el segundo numero:";
	cin>>n2;
	max (n1, n2);
	return 0; 
}

void max (int a, int b)
{
	if (a>b)
	{
		cout<<"a es mayor" <<a<<endl<<endl;
	}
	else if (a<b)
	{
	    cout<<"b es mayor" <<b<<endl<<endl;
	}
	else
	    cout<<"error";
}


