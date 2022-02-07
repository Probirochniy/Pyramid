#include <iostream>
using namespace std;
void print_pyramid(int height){
	int spaces = height-1;
	int symbols = 1;
	for(int i = height; i>0; i--){
		for(int j = spaces; j>0; j--){
			cout<<" ";
		}
		spaces--;
		for(int j = symbols; j>0; j--){
			cout<<"*";
		}
		symbols+=2;
		cout<<endl;
	}
}
main(){
	int height;
	cin>>height;
	print_pyramid(height);
}
