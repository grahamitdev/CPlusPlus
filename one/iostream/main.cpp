#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main(void)
{
	//以只写方式创建一个文件，并打开
//	fstream fs;
//	fs.open();
	fstream fs("demo2.txt",fstream::out | fstream::in);
	if(!fs.is_open())
	{
		cerr << "error" << endl;
		return 1;
	}
	if(fs.is_open())
	{
		cerr << "success" << endl; ;
	}
	fs << "helloworld"<< flush;

	char buff[40] = {'\0'};
	//fs.seekg(0,fs.beg);
	fs.seekg(0);
	fs.read(buff,40);
	cout << buff << endl;

	fs.close();



	return 0;
}
