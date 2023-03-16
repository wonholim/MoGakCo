#include <string>
#include <iostream>
#include <vector>
#include <fcntl.h>

using namespace std;

int main()
{
	int a, b;
	int rd_size;
	while (!(cin >> a >> b).eof())
		cout << a + b << endl;
	return (0);
}