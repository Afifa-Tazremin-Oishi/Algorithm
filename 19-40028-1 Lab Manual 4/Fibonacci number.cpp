
#include <iostream>
using namespace std;
int com = -1;
int fib(int x) {
   if((x==1)||(x==0))

        {
        com = com+1;
      return(x);
   }
   else {
       com = com+1;
      return(fib(x-1)+fib(x-2));
   }
}
int main()
{


     int x , i=0;


   cout << "Enter the number of terms of series : ";
   cin >> x;
   cout << "Fibonnaci Series : ";
   while(i < x) {
      cout << " " << fib(i);
      i++;
   }
   int F[x+1];
    F[0]=0;
    F[1]=1;
    for(int i=2;i<=x;i++)F[i]=-1;


   cout<<endl;
   cout<<"Time complexity :"<<com;
   return 0;
}




