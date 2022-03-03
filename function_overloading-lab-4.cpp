#include <iostream>

using namespace std;
 class power{
     private:
     int q,i;
     int result=1;
     public:
     int getpower(int p,int q){
        
             for(i=0;i<q;i++){
            result=result*p;
       
         }
          return result; 
     }
     int getpower(int p){
     	result=1;
         q=2;
         for(i=0;i<q;i++){
            result=result*p;
        
     }
	  return result;}
 };

int main()
{
    int res1,res2;
    power p;
    res1= p.getpower(3,4);
    cout<<"the result of  power function with 2 variables as input  "<<res1<<endl;
   res2=p.getpower(3);
    cout<<"the result of  power function with 1 variables as input 1 as default  "<<res2<<endl;
    
    
    return 0;
}