#include<iostream>
using namespace std;

class math{
    public:
    double power(double m,int n=2)// power caliculation function
    {
        double result=1;
        for(int i=0;i<n;i++){
            result*=m;
        }
        return result;
    }
};
int main(){
    
    math math;
    double m;
    int n;
    cout<<"enter the m,n in m^n  ";
  cin>>m;
    cin>>n;
    cout<<"the result is  " <<math.power(m,n);
    return 0;
}
