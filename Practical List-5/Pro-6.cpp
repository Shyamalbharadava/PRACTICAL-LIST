#include<iostream>
using namespace std;
class animal
{
	public:
	eat()
	{
		cout<<"Eating ..... :)";
	}
};
class dog : public animal
{
	public:
	eat()
	{
		cout<<"Dog Eating Bread :)";
	}
};
int main()
{
		cout<<"Shyamal Bharadava"<<endl;
	cout<<"220130318069"<<endl;
	dog d=dog();
	d.eat();
	
	return 0;
}
