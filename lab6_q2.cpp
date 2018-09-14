#include<iostream>
using namespace std;
//writing a program with a fucn thattake two int parameter,add together return sum
	int fucn1(int a,int b){
		int sum=a+b;
		return sum;
		}

//writing a program with a fucn thattake two int parameter,add the number should
// be void
	void fucn2(int a,int b,int &c){
				c=a+b;
				}

//ask the user for two numbers,then call the fucn with the number as argument
 //&tell  the user the sum
	int main(){
			int a,b,y,m;
			cout<<"enter the number:";
			cin>>a>>b;
		
			cout<<"1st part";
			y=fucn1(a,b);
			cout<<y<<endl;
			cout<<"2nd part";
			fucn2(a,b,m);
			cout<<m<<endl;	
		return 0;

}
