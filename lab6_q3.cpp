#include<iostream>
using namespace std;
//writing a program with a fucn thattake two int parameter,find maxm return maxm
	int fucn1(int a,int b){
		int max;
		if(a>b){ max = a;}
		else{ max = b;}
		return max;
		}

//writing a program with a fucn thattake two int parameter,find maxm should
// be void
	void fucn2(int a,int b,int &maxm){
				if(a>b){maxm=a;}
				else{maxm=b;}
				}
//ask the user for two numbers,then call the fucn with the number as argument
 //&tell  the user the maxm
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
