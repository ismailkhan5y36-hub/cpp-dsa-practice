#include <iostream>
using namespace std;

int main() {
   int num = 10;
   int i = 1 ;
   int sum = 0 ;
   
   for( i = 1 ; i <= num ; i++  )
    {
    sum += i;	
    if(i ==3 ){
    	break;
	}
    	
	}
   cout<<sum;
   
    return 0;
}