#include <iostream>
using namespace std; 

void TestFunc1()
{
	cout << "TestFunc1() BEGIN" << endl; 
	cout << "TestFunc1() END" << endl; 
}

void TestFunc2()
{
	cout << "TestFunc2() BEGIN" << endl;
//	TestFunc1(); 
	throw 0;
	cout << "TestFunc2() END" << endl;
}

void TestFunc3() 
{
	cout << "TestFunc3() BEGIN" << endl; 
	TestFunc2();
	cout << "TestFunc3() END" << endl;
}

int main()
{
	try
	{
		TestFunc3();
	}
	catch (...)
	{
		cout << "Exception Handling" << endl; 
	}

	TestFunc1(); 

	return 0; 
}