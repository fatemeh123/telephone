//============================================================================
// Name        : telephone.cpp
// Author      : FatemehAbdi
// Version     :
// Copyright   : Dast Nazan Bache Boro Oonvar :)
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;
class telephone {
	string name;
	string l_name;
	string email;
	int phone_number;
public:
	int input();
	void search ();

};
int telephone :: input()
{
	cout<<"enter name:"<<endl;
	cin>>name;
	cout<<endl<<"enter l_name:"<<endl;
	cin>>l_name;
	cout<<endl<<"enter email:"<<endl;
	cin>>email;
	cout<<endl<<"enter phone_number:"<<endl;
	cin>>phone_number;

}
//void telephone :: search ()
//{
//	for(int i=0;i<n;i++)
//	if ()
//}

int main() {

	fstream myfile("contact.txt");
	string name,l_name;
	telephone *contact,contact1;
	int number;
	cout<<"how  many contacts do you wanna have?";
	cin>>number;
	contact=new telephone [number];
	for(int i=0;i<number;i++)
	{
		cin>>contact[i];
		contact[i].input();

	}
	myfile.open ("contact.txt");
	if(! myfile)
	{
		cout<<"File cannot be opened"<<endl;
		exit(1);

	}
	for(int j=0;j<number;j++)
	{
		contact[j] >>myfile;
	}

//	cout<<"enter the name which you wanna serch into a list then press enter and l_name: ";
//	cin>>contact1.name;
//	cin>>contact1.l_name;
//	contact1.search (n);

	return 0;
}
