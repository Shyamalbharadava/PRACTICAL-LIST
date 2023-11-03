#include<iostream>
using namespace std;
class max
{
	private:
		int a,b,c;
	public:
		void get_data()
		{
			cout<<"Enter The A ::";
			cin>>a;
			cout<<"Enter The B ::";
			cin>>b;
			cout<<"Enter The C ::";
			cin>>c;
		}
		
		void put_data()
		{
			if(a>b && a>c)
			{
				cout<<"A is Maximum ";
			}
			else 
			{
				if(b>c)
				{
					cout<<"B is Maximum";
				}
				else
				{
					cout<<"C is Maximum";
				}
			}
		}
}m;
int main()
{
	cout<<"Shyamal Bharadava"<<endl;
	cout<<"220130318069"<<endl;
	cout<<"-------------"<<endl;
	m.get_data();		
	m.put_data();
	
	return 0;
}
