#include <iostream>
using namespace std;

int main() {

	int a = 1;
	{	int a = 2;
		{	int a = 3;
			{	int a = 4;
				{	int a = 5;
					{	int a = 6;
						{
						cout << a;
						cout << ::a;	//failed
						cout << a;
						cout << a;
						cout << a;
						cout << a;

					}
				}
			}
		}
	}
	}





}