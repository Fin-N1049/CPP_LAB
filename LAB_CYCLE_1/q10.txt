#include<iostream>
#include<iomanip>
using namespace std;

class shop
{
	private:
		int item_code[15];
		char name[15];
		float price[15];
		float quantity[15];
		static int count;
		int sum=0,code;
		std::string item_name[15];
	public:
		void add_item();
		void delete_item();
		void print();	
};

int shop::count=0;
void shop::add_item()
{
	count++;
	cout<<"enter the item code: ";
	cin>>item_code[count];
	cout<<"enter the item name: ";
	cin>>name;
	item_name[count]=name;
	cout<<"enter the price of item: ";
	cin>>price[count];
        cout<<"enter the quantity: ";
	cin>>quantity[count];
}

void shop::delete_item()
{
	cout<<"Enter the item code to remove the item: ";
	cin>>code;
	int j=0;
	for(int i=0;i<=count;i++)
	{
		if(code==item_code[i])
		{
			price[i]=0;
			item_name[i]='0';
			quantity[i]=0;
			j=1;
		}
		if (j=!1)
			cout<<"enterd item not in the cart"<<endl;
	}
}

void shop::print()
{
	cout<<"      **********######LIST######************"<<endl;
	cout<<setw(13)<<"code";
	cout<<setw(13)<<"name";
	cout<<setw(13)<<"price";
	cout<<setw(13)<<"quantity";
	cout<<setw(13)<<"amount"<<endl;

	for(int i=1;i<=count;i++)
	{
		cout<<setw(13)<<item_code[i];
	        cout<<setw(13)<<item_name[i];
		cout<<setw(13)<<price[i];
		cout<<setw(13)<<quantity[i];
		cout<<setw(13)<<price[i]*quantity[i]<<endl;
	}
	
	for(int i=1;i<=count;i++)
	{
		sum=sum+price[i]*quantity[i];
	}
	cout<<"total amount= "<<sum<<endl;
}

int main()
{
	int option;
	int choise;

	shop s1;

	do
	{
		cout<<"******#### MAIN MENU ####******"<<endl;
	        cout<<"enter 1 for add item"<<endl<<"enter 2 for delete item"<<endl<<"enter 3 to print the list"<<endl;
		cin>>option;
		switch(option)
		{
			case 1:
				s1.add_item();
				break;
			case 2:
				s1.delete_item();
				break;
			case 3:
				s1.print();
				break;
		}
		cout<<"Do you want to continue(1 for yes,2 for no): ";
		cin>>choise;
	}while(choise==1);

	return 0;
}



