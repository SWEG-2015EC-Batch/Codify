#include <iostream>

using namespace std;
int main(){

	int value = 10;
	for (int i = 0; i != 4; ++i)
	{
		for (int j = 0; j != 10; ++j)
		{
	    cout << value++ << " ";
		}
		cout << '\n';
	}
	return 0;
}
