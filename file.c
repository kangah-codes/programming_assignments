#include<stdlib.h>
#include<stdio.h>

struct addr
{
	int houseno;
	char street[30];
	char city[20];
	char state[20];
};
struct emp
{
	int empno;
	char name[20];
	char desig[20];
	addr address;
	float basic;
}worker;

void main()
{
	clrscr();

	emp evar[5];
	int i;
	char ch;

	for(i=0; i<5; i++)
	{
		cout<<"Employee No: ";
		cin>>evar[i].empno;
		cout<<"Employee Name: ";
		gets(evar[i].name);
		cout<<"Designation: ";
		gets(evar[i].desig);
		cout<<"House No: ";
		cin>>evar[i].address.houseno;
		cout<<"Street: ";
		gets(evar[i].address.street);
		cout<<"City: ";
		gets(evar[i].address.city);
		cout<<"State: ";
		gets(evar[i].address.state);
		cout<<"Basic Pay: ";
		cin>>evar[i].basic;
		cout<<"\n";
	}

	clrscr();

	do
	{
		cout<<"Enter employee no. whose information is to be displayed:\n";
		int eno;
		cin>>eno;
		int flag=0;
		for(i=0; i<5; i++)
		{
			if(evar[i].empno == eno)
			{
				flag = 1;
				cout<<"\nEmployee Data:\n";
				cout<<"Employee No: "<<evar[i].empno;
				cout<<"\nName: "<<evar[i].name;
				cout<<"\nDesignation: "<<evar[i].desig;
				cout<<"\nAddress: "<<evar[i].address.houseno<<", ";
				cout<<evar[i].address.street<<", ";
				cout<<evar[i].address.city<<", ";
				cout<<evar[i].address.state<<endl;
				cout<<"Basic Pay: "<<evar[i].basic;
				cout<<"\n";
				break;
			}
		}
		if(!flag)
		{
			cout<<"\nSorry..!!..No such employee exists..!!\n";
			cout<<"Exiting.....Press a key...\n";
			getch();
			exit(1);
		}
		cout<<"Want to display more ? (y/n).. ";
		cin>>ch;
	}while(ch=='y' || ch=='Y');
	getch();
}
