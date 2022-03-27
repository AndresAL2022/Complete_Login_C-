#include<iostream>
#include<windows.h>

using namespace std;

//Funciones Básicas

//Funciones del LOGIN

string getuser();
string getpassword();
bool accessUser(string user);
bool accessPassword(string password);
bool accessGranted();
void basicloadingbar();


int main(){
	
	cout<<"==================== LOGIN ===================="<<endl;
	cout<<endl;
	
	accessGranted();
	
}

string getuser(){
	
	string user;
	
	cout<<"User -> "; cin>>user;
	cout<<endl;
	
	return user;
	
}

string getpassword(){
	
	string password;
	
	cout<<"Password -> "; cin>>password;
	cout<<endl;
	
	return password;
	
}

bool accessUser(string user){
	
	if(user == "admin"){
		
		return true;
		
	}
	
	else{
		
		return false;
	}
	
}

bool accessPassword(string password){
	
	if(password == "root"){
				
		return true;
		
	}
	
	else{
		
		return false;
		
	}
	
}

bool accessGranted(){
	
	string user, password;
	bool userval = false;
	bool passval = false;
	
	user = getuser();
	
	password = getpassword();
	
	userval = accessUser(user);
	passval = accessPassword(password);
	
	if(userval == true && passval == true){
		
		cout<<"Access Granted"<<endl;
		cout<<"\nLogin up with user -> "<<user<<endl;
		cout<<endl;
		cout<<"LOADING |"; basicloadingbar(); cout<< "|"; 
		cout<<" COMPLETE"<<endl;
		
	}
	
    else if(userval == true && passval == false){
    	
    	cout<<"Wrong Password"<<endl<<endl;
    	
    	accessGranted();
    	
	}
	
	else{
		
		cout<<"User "<<user<<" Does Not Exist"<<endl<<endl;
		
		accessGranted();
		
	}
	
}

void basicloadingbar(){
	
	for(int i=0; i<50; i++){
		
		cout<<"/";
		Sleep(20);
		
	}
	
}
	
	


