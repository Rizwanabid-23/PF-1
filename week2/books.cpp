#include<iostream>
using namespace std;
main(){
cout<<"enter the number of books puchased"<<endl;
float books;
cin>>books;
float price=100;
if(books<=10){
	cout<<"the amount payable is "<<price<<endl;
	}
if(books>10){
	cout<<"the amount payable is "<<(price-(10/books))*10<<endl;
	}
}
