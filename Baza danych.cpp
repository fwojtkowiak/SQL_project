#include <iostream>
#include <fstream>
#include <cstdlib>
#include <time.h>   
#include <cstdio>
#include <sstream> 
using namespace std;




string imie(){
	string s=" ";
	int r=rand()%40;
	switch(r){
		case 0: {	
			s="Grupa 1;Dzial 3;Izydor Patryk";
			break;}
		case 1:{

		s="Grupa 1;Dzial 2;Tanya Bridges ";
		break;}
		case 2:{
		
		s="Grupa 1;Dzial 1;Luther Ramsey ";
		break;}
		case 3:{
		
		s="Grupa 0;Dzial 2;Jenna Dean";
		break;}
		case 4:{
		
		s="Grupa 2;Dzial 2;Guy Moran ";
		break;}
		case 5:{
		
		s="Grupa 2;Dzial 1;Diana Pierce ";
		break;}
		case 6:{
		
		s="Grupa 0;Dzial 1;Frederick Mclaughlin";
		break;}
		case 7:{
		
		s="Grupa 2;Dzial 1;Marta Clarke";
		break;}
		case 8:{
		
		s="Grupa 2;Dzial 3;Shawn Santos ";
		break;}
		case 9:{
		
		s="Grupa 0;Dzial 3;Paulette Mcdaniel ";
		break;}
		case 10:{
		
		s="Grupa 0;Dzial 3;Jose Gilbert ";
		break;}
		case 11:{
		
		s="Grupa 0;Dzial 2;Bernard Ellis ";
		break;}
		case 12:{
		
		s="Grupa 1;Dzial 0;Rogelio Tucker";
		break;}
		case 13:{
		
		s="Grupa 2;Dzial 1;Ramiro Thompson";
		break;}
		case 14:{
		
		s="Grupa 2;Dzial 2;Christina Nguyen";
		break;}
		case 15:{
		
		s="Grupa 0;Dzial 3;Dennis Kelley ";
		break;}
		case 16:{
		
		s="Grupa 0;Dzial 3;Naomi Shelton";
		break;}
		case 17:{
		
		s="Grupa 1;Dzial 1;Orlando Delgado";
		break;}
		case 18:{
		
		s="Grupa 1;Dzial 3;Rex Casey ";
		break;}
		case 19:{
		
		s="Grupa 0;Dzial 3;Janie Grant";
		break;}
		case 20:{
		
		s="Grupa 0;Dzial 3;Lorraine Cortez ";
		break;}
		case 21:{
		
		s="Grupa 0;Dzial 2;Irene Sandoval";
		break;}
		case 22:{
		
		s="Grupa 2;Dzial 1;Alan Underwood ";
		break;}
		case 23:{
		
		s="Grupa 1;Dzial 1;Ernestine Mathis ";
		break;}
		case 24:{
		
		s="Grupa 1;Dzial 1;Brett Swanson ";
		break;}
		case 25:{
		
		s="Grupa 2;Dzial 3;Corey Mccormick ";
		break;}
		case 26:{
		
		s="Grupa 0;Dzial 2;Al Welch ";
		break;}
		case 27:{
		
		s="Grupa 1;Dzial 1;Elizabeth Conner";
		break;}
		case 28:{
		
		s="Grupa 0;Dzial 3;Salvador Reese ";
		break;}
		case 29:{
		
		s="Grupa 1;Dzial 1;Angelica Hale";
		break;}
		case 30:{
		
		s="Grupa 2;Dzial 0;Phil Briggs";
		break;}
		case 31:{
		
		s="Grupa 0;Dzial 2;Noah Barnes ";
		break;}
		case 32:{
		
		s="Grupa 1;Dzial 0;Elsie Alvarez";
		break;}
		case 33:{
		
		s="Grupa 2;Dzial 0;Cecelia Joseph";
		break;}
		case 34:{
		
		s="Grupa 1;Dzial 0;Alison Lyons";
		break;}
		case 35:{
		
		s="Grupa 0;Dzial 2;Nora Roberts";
		break;}
		case 36:{
		
		s="Grupa 0;Dzial 2;Cora Moody ";
		break;}
		case 37:{
		
		s="Grupa 2;Dzial 2;Alberto Allison ";
		break;}
		case 38:{
		
		s="Grupa 0;Dzial 2;Allen Thompson";
		break;}
		case 39:{
		
		s="Grupa 2;Dzial 1;Roy Weaver ";
		break;}

		default:
			cout<<s;
			break;
}
			return s;
}


int main (){
	int j;
int s[500];
string napis;

	srand (time(NULL));
	ofstream outfile("baza_al.txt", ofstream::out);
	ofstream outfile2("baza_pe.txt", ofstream::out);

	outfile<<"Numer"<<";"<<"Komentarz;"<< "Grupa"<<";"<<"Dzial"<<";"<<"Osoba"<<";"<<"Odpowiedz na"<<endl;
	outfile2<<"Numer"<<";"<<"Komentarz;"<< "Grupa"<<";"<<"Dzial"<<";"<<"Osoba"<<";"<<"Sciezka"<<endl;
	for (int i=0;i<25;i++){

		
		if (i<9){
		outfile<<i+1<<";";
			outfile2<<i+1<<";";
			outfile<<"Komentarz"<<rand()%1000<<";";
			outfile2<<"Komentarz"<<rand()%1000<<";";
			napis=imie();
			outfile<<napis<<";";
			outfile2<<napis<<";";}
		else if(i<=99){
			outfile<<i+1<<";";
			outfile2<<i+1<<";";
			napis=imie();
				outfile<<"Komentarz"<<rand()%1000<<";"<<napis<<";";
				outfile2<<"Komentarz"<<rand()%1000<<";"<<napis<<";";
		}else {
			outfile<<i+1<<";";
			outfile2<<i+1<<";";
			napis=imie();
			outfile<<"Komentarz"<<rand()%1000<<";"<<napis<<";";
			outfile2<<"Komentarz"<<rand()%1000<<";"<<napis<<";";
		}
		outfile<<"NULL"<<endl;
		outfile2<<i+1<<endl;				

		
	
	}
	for (int i=26; i<=100;i++){

		
	if (i<9){
		outfile<<i<<";";
			outfile<<"Komentarz"<<rand()%1000<<";";
			outfile2<<"Komentarz"<<rand()%1000<<";";
			napis=imie();
			outfile<<napis<<";";
			outfile2<<napis<<";";}
		else if(i<=99){
			outfile<<i<<";";
			outfile2<<i<<";";
			napis=imie();
				outfile<<"Komentarz"<<rand()%1000<<";"<<napis<<";";
				outfile2<<"Komentarz"<<rand()%1000<<";"<<napis<<";";
		}else {
			outfile<<i<<";";
			outfile2<<i<<";";
			napis=imie();
			outfile<<"Komentarz"<<rand()%1000<<";"<<napis<<";";
			outfile2<<"Komentarz"<<rand()%1000<<";"<<napis<<";";
		}
		j= rand()%25+1;
		outfile<<j<<endl;
		outfile2<<j<<"/"<<i<<endl;
		s[i]=j;
		cout<<s[i];
	}
	
	
	for (int i=101; i<=325;i++){
		
	if (i<9){
		outfile<<i+1<<";";
			outfile<<"Komentarz"<<rand()%1000<<";";
			outfile2<<"Komentarz"<<rand()%1000<<";";
			napis=imie();
			outfile<<napis<<";";
			outfile2<<napis<<";";}
		else if(i<=99){
			outfile<<i+1<<";";
			outfile2<<i+1<<";";
			napis=imie();
				outfile<<"Komentarz"<<rand()%1000<<";"<<napis<<";";
				outfile2<<"Komentarz"<<rand()%1000<<";"<<napis<<";";
		}else {
			outfile<<i<<";";
			outfile2<<i<<";";
			napis=imie();
			outfile<<"Komentarz"<<rand()%1000<<";"<<napis<<";";
			outfile2<<"Komentarz"<<rand()%1000<<";"<<napis<<";";
		}
		j=rand()%75+26;
		outfile<<j<<endl;
		outfile2<<s[j]<<"/"<<j<<"/"<<i<<endl;
		s[i]=j;
		cout<<s[j];
	}
	for (int i=326; i<=1000;i++){
		
	if (i<9){
		outfile<<i+1<<";";
			outfile<<"Komentarz"<<rand()%1000<<";";
			outfile2<<"Komentarz"<<rand()%1000<<";";
			napis=imie();
			outfile<<napis<<";";
			outfile2<<napis<<";";}
		else if(i<=99){
			outfile<<i+1<<";";
			outfile2<<i+1<<";";
			napis=imie();
				outfile<<"Komentarz"<<rand()%1000<<";"<<napis<<";";
				outfile2<<"Komentarz"<<rand()%1000<<";"<<napis<<";";
		}else {
			outfile<<i<<";";
			outfile2<<i<<";";
			napis=imie();
			outfile<<"Komentarz"<<rand()%1000<<";"<<napis<<";";
			outfile2<<"Komentarz"<<rand()%1000<<";"<<napis<<";";
		}
		j= rand()%225+100;
		outfile<<j<<endl;
		outfile2<<s[s[j]]<<"/"<<s[j]<<"/"<<j<<"/"<<i<<endl;
	}
	

	return 0;
}
