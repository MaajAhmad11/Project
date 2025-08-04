#include <iostream>
using namespace std;
class Player{
	private:
		int age;
		string name, team;
	public:
			Player(){
		cout<<"Enter the Name"<<endl;
		cin>>name;
		cout<<"Enter player team"<<endl;
		cin>>team;
		cout<<"Enter player age"<<endl;
		cin>>age;
    }
			void input(){
		cout<<"Enter the Name"<<endl;
		cin>>name;
		cout<<"Enter player team"<<endl;
		cin>>team;
		cout<<"Enter player age"<<endl;
		cin>>age;
	}
			void display(){
		cout<<"Enter the Player Name:"<<name<<endl;
		cout<<"Enter the Player Team:"<<team<<endl;
		cout<<"Enter the Player Age:"<<age<<endl;				
	}
			void change(string n, string t, int a){
				name=n;
				team=t;
				age=a;
	}
};
		int main(){
		int choice;
			Player p;
	do{
	cout<<"-----------Main Menu-----------:"<<endl;
	cout<<"1:-Input Player Data"<<endl;
	cout<<"2:-Display Player Data"<<endl;
	cout<<"3:-Change Player Data"<<endl;
	cout<<"4:-Exit"<<endl;
	cout<<"Enter any Choice"<<endl;
	cin>>choice;
		switch(choice){
			case 1:
			p.input();
				break;
			case 2:
			p.display();
				break;
			case 3:
			p.change("Amaj","Pakistan" , 25);
				break;
			case 4:
			exit(1);
				break;
			default:
	cout<<"The value is Invalide"<<endl;
	}
	}while(1);

}
