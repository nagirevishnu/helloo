#include<iostream>
#include<fstream>
#include<ctime>
using namespace std;
int main(int argc,char *argv[])
{
	if(argc>3)
	{
		cout<<argv[0]<<"source file"<<"destination file"<<endl;
		return 1;
	}
	ofstream src;
	src.open(argv[1]);
	int i=-30;
	srand(time(0));
	while(i<100)
	{
		int f=rand()%100;
		src<<f<<" ";
		i++;
	}
	src.close();
	/*ofstream des;
        //src.open(argv[1]);
	des.open(argv[2]);
	int number;
	while(src>>number)
	{
		//cout<<number<<endl;
		des<<number<<",";
	}
	src.close();
	des.close();
	cout<<"program completed"<<endl;*/
}

