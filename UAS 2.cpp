//Muvidha Fatmawati Putri
//21091397011
//UAS 2 
#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
int main()
{
    char kotaA[20],kotaB[20],kotaC[20],kotaD[20],kotaE[20];
    int jumlah,panjang,hasil1,hasil2,hasil3,hasil4,hasil5,hasil6,hasil7;
    //input jumlah kota
    cout<<"Jumlah kota yang berada di kerajaan Britan:"<<endl;
    cin>>jumlah;
    //input nama kota
    cout<<"Kota 1 : ";
    cin>>kotaA;
    cout<<"Kota 2 : ";
    cin>>kotaB;
    cout<<"Kota 3 : ";
    cin>>kotaC;
    cout<<"Kota 4 : ";
    cin>>kotaD;
	cout<<"Kota 5 : ";
	cin>>kotaE;
	cout<<endl;
	//deklarasi graph                                            
	//menampilkan graph yang terjadi
	cout<<"Tepinya adalah:"<<endl<<endl;
    cout<<kotaA<<kotaB<<",";
    cout<<kotaA<<kotaD<<",";
    cout<<kotaA<<kotaE<<",";
    cout<<kotaB<<kotaC<<",";
    cout<<kotaC<<kotaE<<",";
    cout<<kotaC<<kotaD<<",";
    cout<<kotaD<<kotaE<<endl<<endl;
	//deklarasi edge
	//menampilkan panjang jalan yang menghubungkan vertex
	cout<<"Panjang jalan antar kota:"<<endl;
	cout<<"panjang "<<kotaA<<" ke "<<kotaB<<" : ";cin>>hasil1;
	cout<<"panjang "<<kotaA<<" ke "<<kotaD<<" : ";cin>>hasil2;
	cout<<"panjang "<<kotaA<<" ke "<<kotaE<<" : ";cin>>hasil3;
	cout<<"panjang "<<kotaB<<" ke "<<kotaC<<" : ";cin>>hasil4;
	cout<<"panjang "<<kotaC<<" ke "<<kotaE<<" : ";cin>>hasil5;
	cout<<"panjang "<<kotaC<<" ke "<<kotaD<<" : ";cin>>hasil6;
	cout<<"panjang "<<kotaD<<" ke "<<kotaE<<" : ";cin>>hasil7;
	cout<<endl;
	//deklarasi adjacency
	//menampilkan jalan yang menghubungkan kedua simpul (x,y,z)
	cout<<"semua jalan dan panjangnya yang ada dikerajaan Britan:"<<endl;
	cout<<"("<<kotaA<<","<<kotaB<<","<<hasil1<<")";
	cout<<"("<<kotaA<<","<<kotaD<<","<<hasil2<<")";
	cout<<"("<<kotaA<<","<<kotaE<<","<<hasil3<<")";
	cout<<"("<<kotaB<<","<<kotaC<<","<<hasil4<<")";
	cout<<"("<<kotaC<<","<<kotaE<<","<<hasil5<<")";
	cout<<"("<<kotaC<<","<<kotaD<<","<<hasil6<<")";
	cout<<"("<<kotaD<<","<<kotaE<<","<<hasil7<<")";
	cout<<endl<<endl;
	//hasil
	//menampilkan tempat pedagang berada
	cout<<"pedagang sekarang berada dikota : "<<endl<<endl;
	cout<<kotaA;
	cout<<endl<<endl;
	//menampilkan kota yang diserang naga
	cout<<"kota yang diserang naga : "<<endl<<endl;
	cout<<kotaC; 
	cout<<endl<<endl;
	//menampilkan kota yang terdapat kastil
	cout<<"kota yang memiliki kastil : "<<endl<<endl;
	cout<<kotaE;
	cout<<endl<<endl;
	//menampilkan vertex tercepat untuk selamat	
	cout<<"jalur yang paling cepat : "<<endl<<endl;
	cout<<kotaA<<"->"<<kotaD<<"->"<<kotaE<<endl;
	cout<<endl<<endl;
	//total edge yang harus ditempuh
	cout<< "dengan jarak : "<<endl<<endl;
	cout<<hasil2+hasil7<<endl<<endl;
	getch();
	return 0;
}
