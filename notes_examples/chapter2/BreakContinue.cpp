 
#include<iostream>
using namespace std;
 
int main()
{
  	for(int i=0; i<10; ++i)
  	{
	    if (i==5) { continue; }
	    if (i==7) { break; }
  	    cout << "Loop number:" << i << endl; 
  	}
}
