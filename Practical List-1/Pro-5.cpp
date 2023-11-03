#include <iostream>
using namespace std;

int main()
{
    int a = 5, b = 10, temp;

    cout<<"I am Shyamal Bharadava "<<endl;
	cout<<"En_no    220130318069 "<<endl;
	cout<<"---------------------"<<endl;
    cout << "Before swapping." << endl;
    cout << "a = " << a << ", b = " << b << endl;

    temp = a;
    a = b;
    b = temp;

    cout << "\nAfter swapping." << endl;
    cout << "a = " << a << ", b = " << b << endl;

    return 0;
}
