#include<iostream>
#include"D:\visual studio\скобки\stack.h"
using namespace std;
int main()
{
	setlocale(0, "");
	string n="{[(())]}";
	DynamicStack<char,10> DS;
	bool isScobki;
	for (size_t i = 0; i < n.length(); i++)
	{
		if (n[i] == '{' or n[i] == '[' or n[i] == '(')
		{
			DS.push(n[i]);
		}
	}
	for (size_t i = 0; i < n.length(); i++)
	{
		

		if (n[i] != '{' and n[i] != '[' and n[i] != '(')
		{


			if (n[i] == DS.pick() + 1 or n[i] == DS.pick() + 2)
			{
				DS.pop();

			}
			else
			{
				if (n[i] != DS.pick())
				{
					cout << n[i];
					cout << DS.pick();
					break;
				}

			}
		}
		
	}
	if (DS.isEmpty())
	{
		isScobki = 1;
		cout << "скобки выставленны  правильно";
	}
	else
	{
		isScobki = 0;
		cout << "скобки выставленны не правильно";

	}


}
