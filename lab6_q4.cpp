#include<iostream>
using namespace std;
//writing a program with a fucn thattake two int parameter,find minm return minm
	int fucn1(int a,int b){
		int min;
		if(a<b){ min = a;}
		else{ min = b;}
		return min;
		}

//writing a program with a fucn thattake two int parameter,find minm should
// be void
	void fucn2(int a,int b,int &min){
				if(a<b){min=a;}
				else{min=b;}
				}
//ask the user for two numbers,then call the fucn with the number as argument
 //&tell  the user the minm
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
