#include<iostream>
using namespace std;

class matrix{
	private:
		int**arr;
	public:
		int i,j;
		matrix(int m,int n)     //dynamic allocation of memory
		{
			arr= new int*[m];
			for(i=0;i<m;i++)
			arr[i]=new int[n];
		}
		void input( int m,int n)    //taking input of array
		{
		
			cout<<"enter the elements of matrix ";
			for(i=0;i<m;i++){
				for(j=0;j<n;j++){
					cin>>arr[i][j];
				}
			}
		}
		void output(int m,int n)  //printing output
		{
			for(i=0;i<m;i++){
				for(j=0;j<n;j++){
					cout<<arr[i][j];
					cout<<"\t";
		}cout<<endl;}

}};
int main(){
	int m,n;
	cout<<"enter the size of matrix  ";
	cin>>m;
	cin>>n;
	matrix mat(m,n);
	mat.input(m,n);
	mat.output(m,n);
	return 0;
}