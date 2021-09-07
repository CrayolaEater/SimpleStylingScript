#include<iostream>
#include<fstream>
#include<string>
#include<string.h>
using namespace std;
int main(uint16_t argc, char ** argv)
{
	string filename;
	switch (argc)
	{
	case 1:
		cout << "you need to specify file path\n";
		break;
	case 2:
		filename = string(strdup(argv[1]));
		break;
	}

	ifstream fin(filename);
	//ofstream fout(filename);

	string fContent((istreambuf_iterator<char>(fin)),
		istreambuf_iterator<char>());

	cout << fContent;

	fin.close();

	return 0;
}