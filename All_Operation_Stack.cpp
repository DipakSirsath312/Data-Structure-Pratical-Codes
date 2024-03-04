#include<iostream>
using namespace std;
#define max 5
int STACK[max],TOP;
	void Initstack(){
		TOP=-1;
	}
	int IsEmpty(){
		if(TOP == -1)
			return 1;
		else
			return 0;
	}
	int isfull(){
		if(TOP == max-1)
			return 1;
		else
			return 0;
	}
	void Push(int num){
		if( isfull() ){
			cout<<"Stack Is Full"<<endl;
			return;
		}
		++TOP;
		STACK [TOP]=num;
		cout<<"Has Been Inserted"<<endl;
	}
	void Display(){
		int i;
		if(IsEmpty()){
			cout<<"Stack Is Empty"<<endl;
		}
		else{
			for(i=TOP;i>=0;i--){
				cout<<STACK[i]<<" ";
				cout<<"\n";
			}
			cout<<endl;
		}
	}
	void Pop(){
		int temp;
		if(IsEmpty()){
			cout<<"Stack Is Empty"<<endl;
			return;
		}
		else{
			temp = STACK[TOP];
			TOP--;
			cout<<temp<<"Has Been Deleted In Stack"<<endl;
		}
	}
	void Peep(){
		int i;
		if( IsEmpty() ){
			cout<<"Stack Is Empty"<<endl;
			return;
		}
			cout<<"Enter Location To Find Element In Stack:-"<<endl;
			cin>>i;
			cout<<"At\t"<<i<<"\t Location Element Is:-"<<STACK[TOP-i+1]<<endl;
	}
	void Change(){
		int i;
		
		if(IsEmpty()){
			cout<<"Stack Is Empty"<<endl;
			return;
		}
		else{
			cout<<"Enter Location To Find Element In Stack:-"<<endl;
			cin>>i;
			
			cout<<"At\t""\tLocation Element Is:-\t"<<STACK[TOP-i+1]<<endl;
			int Value;
			cout<<"Enter The Value To Assign This Element:-"<<endl;
			cin>>Value;
			
			STACK[TOP-i+1]=Value;
			cout<<"Value Is Assigned For This Element In Stack"<<endl;
		}
}
int main(){
	int num;
	Initstack();
	char ch;
	do{
		int a;
		cout<<"Choose Your Choice:-"<<endl;
		cout<<"1.Push"<<endl;
		cout<<"2.Pop"<<endl;
		cout<<"3.Display"<<endl;
		cout<<"4.Peep"<<endl;
		cout<<"5.Change"<<endl;
		
		cout<<"Please Enter Your Choice:-"<<endl;
		cin>>a;
		switch(a){
			case 1:
				cout<<"Enter An Integer Number:-";
				cin>>num;
				Push(num);
				break;
			case 2:
				Pop();
				break;
			case 3:
				Display();
				break;
			case 4:
				Peep();
				break;
			case 5:
				Change();
				break;
			default:
				cout<<" An Invailid Choice"<<endl;
				break;
		}	
		cout<<"Do You Want To Continue?"<<endl;
		cin>>ch;
	}while(ch == 'Y' || ch == 'y');
	return 0;
}