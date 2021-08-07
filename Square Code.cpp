#include<iostream>
#include<cstring>
#include<vector>
#include<cmath>
using namespace std;
int main()
{
				string input;
				size_t i,len,side,j;
				double temp;
				while (cin >> input)
				{
								len = input.length();
								side=ceil(sqrt(len));
								for (i = 0; i < side; i++)
								{
												for (j = i; j < len; j += side)
												{
																cout << input[j];
												}
												cout << endl;
								}
				}
}