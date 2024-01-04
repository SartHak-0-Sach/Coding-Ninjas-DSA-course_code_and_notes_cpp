#include <iostream>
using namespace std;

int countWords(string str) {
	int count = 1;
	for(int i = 0; i<str.size(); i++)
	{
		if(str[i]==' ')
		{
			count++;
		}
	}
	return count;
}

int main(int argc, char const *argv[])
{
  string str;
  cin>>str;
  cout<<"Number of words in the given sentence is: "<<countWords(str)<<endl;
  return 0;
}
