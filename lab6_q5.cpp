#include<iostream>
using namespace std;
//writing a program with a fucn thattake two int parameter,add together return sum
	int fucn1(int a,int b){
		int sum=a+b;
		return sum;
		}
//writing a program with a fucn thattake two int parameter,find maxm return maxm
	int fucn2(int a,int b){
		int max;
		if(a>b){ max = a;}
		else{ max = b;}
		return max;
		}
//writing a program with a fucn thattake two int parameter,find minm return minm
	int fucn3(int a,int b){
		int min;
		if(a<b){ min = a;}
		else{ min = b;}
		return min;
		}

//writing a program with a fucn thattake two int parameter,add the number should
// be void
	void fucn4(int a,int b,int &c){
				c=a+b;
				}
//writing a program with a fucn thattake two int parameter,find maxm should
// be void
	void fucn5(int a,int b,int &maxm){
				if(a>b){maxm=a;}
				else{maxm=b;}
				}
//writing a program with a fucn thattake two int parameter,find minm should
// be void
	void fucn6(int a,int b,int &min){
				if(a<b){min=a;}
				else{min=b;}
				}
//ask the user for two numbers,then call the fucn with the number as argument
 //&tell  the user the sum
	int main(){
			int a,b,y,j,k,m,n,o;
			cout<<"enter the number:";
			cin>>a>>b;
		
			cout<<"1st part1:";
			y=fucn1(a,b);
			cout<<y<<endl;

			cout<<"1st part2:";
			j=fucn2(a,b);
			cout<<j<<endl;

			cout<<"1st part3:";
			k=fucn3(a,b);
			cout<<k<<endl;

			cout<<"2nd part1:";
			fucn4(a,b,m);
			cout<<m<<endl;

			cout<<"2nd part2:";
			fucn5(a,b,n);
			cout<<n<<endl;

			cout<<"2nd part3:";
			fucn6(a,b,o);
			cout<<o<<endl;	
		return 0;

}
