#include<iostream>
using namespace std;
main()
{
	int p,r,t;
	
	cout<<"I am Shyamal Bharadava "<<endl;
	cout<<"En_no    220130318069 "<<endl;
	cout<<"---------------------"<<endl;
	cout<<"Enter the amount : ";
	cin>>p;
	cout<<"Enter the Rate   : ";
	cin>>r;
	cout<<"Enter the time   : ";
	cin>>t;
	
	
	ci = p*((1+r/100)^t);
	cout<<"Compund Interest : "<<ci;
	
	return 0;
	
	
	
}
