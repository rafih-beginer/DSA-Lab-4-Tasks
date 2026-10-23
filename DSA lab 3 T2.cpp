#include<iostream>
using namespace std;
struct distance{
	int feet;
	float inch;
};

int main()
{
	struct distance d;
	struct distance *ptr=&d;
	cout<<"Enter Feet:";
	cin>>ptr->feet;
	cout<<"Enter inch:";
	cin>>ptr->inch;
	cout<<"Displaying information"<<endl;
	cout<<"Distance:"<<endl<<ptr->feet<<"feet"<<endl<<ptr->inch<<"inches";
	return 0;
}