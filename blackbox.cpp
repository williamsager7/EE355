#include <iostream>
#include <cstdlib>

using namespace std;

int main(float x,float y, float d)
{  
   //write equation for z
   double z = (x*x) +  (y*y);
   double e;
   int temp1, temp2;
   temp1 = rand();
   temp2 = (temp1 - 1073741823) / 1073741823;
   
   e = d * temp2;  
  
   //Write final equation for Z with noise e incorporated.        
   float zd = (x*x) +  (y*y) + e;
   cout << zd;
   return 0;
}

