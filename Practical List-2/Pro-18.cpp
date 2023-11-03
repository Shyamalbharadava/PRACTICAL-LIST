#include <iostream>
using namespace std;
#define PI 3.14
class area{
private:
    float r;

public:
    void Area (double r)
    {
        cout<<"Shyamal Bharadava "<<endl;
		cout<<"220130318069"<<endl;
		cout <<"area of Square is ::"<<PI*r*r<<endl;
    }
};
int main()
{
    area a;
    a.Area( 6.0);
}
