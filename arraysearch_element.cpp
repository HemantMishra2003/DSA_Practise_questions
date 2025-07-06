#include <iostream>         // ← Yeh part "template ke upar" hota hai
using namespace std;
int main() 
{
  
  int arr[] = { 8 , 10 ,25 ,35 ,45 ,46 };
  int x =  35 ;
  int i ;
  for( i = 0 ; i <= 6 ; i++)
  {
     if (x == arr[i])
     {
     cout<<"1";
     break;
  }
} 
 if (i ==  6)
 {
     cout<<"-1";
 }
  return 0 ;
  }
