#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	int odd=0;
	int even;
	for(int i=1;i<=n;i++)
	{
	    for(int j=1;j<=5;j++)
	    {
	        if(i%2!=0)
	        {    
	            odd=odd+1;
	            cout<<odd<<" ";
	        }
	        else
	        {
	            cout<<even<<" ";
	            even--;
	        }
	       
	    }
         cout<<endl;

         if((i+1)%2==0)
         {
             even=odd+5;
         }
         else
         {
            odd=even+5;
         }
	        
	        
	}
	return 0;
}