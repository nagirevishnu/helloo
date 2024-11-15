#include"header.h"
int main(int argc,char *argv[])
{
	/*if(argc!=4)
	{
		cout<<argv[0]<<"source file"<<"destination file"<<endl;
		return 1;
	}*/
	ifstream src;
	ofstream des;
        src.open(argv[1]);
	des.open(argv[2]);
        int max_num = 100;  
        int numbers[max_num];
    	int count = 0,low=0;
    	char buffer[256];
    	while (src >> buffer && count<max_num)
		numbers[count++] = atoi(buffer);
	merge obj(numbers,low,count-1);
    	for (int i = 0; i < count; i++)
		des<< numbers[i] << " ";
	src.close();
	des.close();
}

