#include <iostream>
#include <windows.h>
#include <cmath>
#include <conio.h>
#include <ctime>
#include<process.h>
#include <stdlib.h>
using namespace std;
int main()
{int pi;
lookatmenow:
system("color 2") ;// start block
 cout<< "                      NEXTECH  Calc             " <<endl<<"1.Calculate no. of days\n2.Arithmetic progression and GP\n3.Simple interest and compound interest\n4.Grade Calculator\n5.Money/Amount gradient\n6.Illuminati\n7.A simple arithmetic calculator\n8.The matrix\n9.Coordinate geometry" ;
 cout<< "\n \n  Enter what you want to calculate:";
 cin>>  pi;
 cout<<"\n\n";

                  // for calender
if(pi==1){ system("color 1");
         int ch , yr;
         visa:                                                    
         cout << "Enter year: \n";
         cin >> yr;
         cout << "Enter the number of month(1 - 12): \n";
         cin >> ch;
   switch(ch)
   {     case 1: cout <<  "January has 31 days";
                  break;
  	     case 3:cout<<  "March month has 31 days";
		         break;
  		 case 5:cout<<  "May month has 31 days";
		          break;
  		 case 7:cout<<  "July month has 31 days";
		         break;
		 case 8:cout<<  "August month has 31 days";
		         break;
		 case 10:cout<<  "October month has 31 days";
		         break;
		 case 12: cout<<  "December month has 31 days";
		         break;
		 case 4:cout<< "April month has 30 days";
		         break;
		 case 6:cout<< "June month has 30 days";
		         break;
		 case 9:cout<< "September month has 30 days";
		         break;
		 case 11: cout<< "November month has 30 days";
		         break;
	     case 2: if(yr % 4 == 0)cout<< "February has 29 days in a leap year";
	    		else cout << "February has 28 days";
	            break;
	     default:cout<< char(7); 
                 system("color 4");
                 cout<< "Enter a valid month number";
                 getch();
                 system("cls");
                 goto visa;	    		
  }}
else if(pi==2){char pr;               // Ap and Gp
               int  nu ,ra ;
               double at, di;
               system("color 7");
 
   placeholder:
  
   cout << "\nEnter progression (G-geometric progression & A-arithmetic progresson):"; 
   cin >> pr;

  switch(pr){ 
     case 'A': system("color 3");
               cout << "Enter First term:";
               cin  >> at;
               cout << "Enter common diff:";
               cin >> di;

               cout << "Enter no. of terms:";
               cin>> nu;
               for(int i= 1 ; i < nu + 1; i++)
               {
               cout << at + (i-1)*di<< " \t";}

                       break;
     case 'G': system("color B");
	           cout<< "Enter First term: ";
               cin>> at;
	           cout<< "Enter common ratio:" ;
	           cin>> ra;
	           cout<< "Enter no. of terms:" ;
	           cin>> nu;
	           for( int i=1 ; i< nu +1; i++)
	           {
	           cout<< at*pow(ra,(i-1))<< "\t";} 
	           break;
	  default : cout<< char(7);
                cout << "*ERROR* Enter correct sequence!\n";
	            getch();
                system("cls");
                goto placeholder;
               }} 
         
else if(pi==3){string sup; 
               amilli:                                                       // simple interest
               system("color 5");
          cout<<"Do you want to calculate SIMPLE interest or COMPOUND interest?";
          cin>>sup;
          if(sup=="SIMPLE"){ float me, ru;      //simple interest
                            int y; 
                            system("color C");
                            cout << "\nEnter Amount for simple interest: ";
                            cin>> me;
                            cout << "Enter rate(%): ";
                            cin>> ru;
                            cout << "Enter no. of years: ";
                            cin >> y;
                            cout << " Interest is "<<  (me*ru*y)/100 << endl;
                            cout << " Total amount is " << me +( (me*ru*y)/100);
                            }
          else if(sup=="COMPOUND"){  float me, ru;      //compound interest
                                 int y; 
                                 system("color B");
                                 cout << "\nEnter Amount for compound interest: ";
                                 cin>> me;
                                 cout << "Enter rate(%): ";
                                 cin>> ru;
                                 cout << "Enter no. of years: ";
                                 cin >> y;
                                 cout << " Interest is "<< pow(me*(ru/100),y);
                                 cout << " Total amount is " <<(me+pow(me*(ru/100),y));}
          else  { system("color 4");
                  cout<< char(7);
                  cout<<"Enter correctly!";
                  getch();
                  system("cls");
                  goto amilli;}}                     
          
          

else if(pi==4){int lo;                           // Grade 
        
        float suma = 0, aveg = 0;
        float ka, tots;
                    system("color 6");
                    cout<<"Enter number of students: ";
                    cin>>lo; 
                    cout<<"Enter total marks(out of): ";
                    cin>> ka;
         int mark[lo][3];	 
         for(int s=0; s<lo; s++){
	     for(int m=0; m<3;m++){
	     cout<< "Enter Student "<<s+1<<" marks in subject " << m+1<< " : ";
         cin>> mark[s][m]; 
         suma += mark[s][m];}
         cout<<endl;}
         system("color E");
         system("cls");

         cout<<endl<<"         Subject1 "<<"  Subject2"<<"   Subject3"<<endl;
               for(int s=0; s<lo; s++){
	               cout<<"Student"<<s+1;
               for(int m=0; m<3;m++){
               cout<<"       "<<mark[s][m];}
               cout<<"\n";}
          aveg= suma/(lo*3);
          tots= (aveg/ka)*100;
          cout<< endl<< "Total average is "<< aveg<<" and grade is ";
          tots>85?(cout<<"A-Excellent!"):((tots>75?cout<<"B-Good":(tots>60?cout<<"C-Improve":cout<<"D-FAIL!")));
          getch();}

else if(pi==5){int amt;
         system("color F");                        // Amount
         cout<<"Enter Amount:";
         cin>>amt;
         int mod1 = amt%2000;
         int mod2 = mod1%500;
         int mod3 = mod2%100;
         int mod4 = mod3%50;
         int mod5 = mod4%10;
         int mod6 = mod5%5;
         int mod7 = mod6%2;
              cout<< endl << "number of 2 thousand rupee notes are="<<amt/2000<<endl;
              cout<< "number of 500 rupee notes are="<<mod1/500<<endl;
              cout<< "Number of 100 rupee notes are="<<mod2/100<<endl;
              cout<< "Number of 50 rupee notes are="<<mod3/50<<endl;
              cout<< "Number of 10 rupee notes are="<<mod4/10<<endl;
              cout<< "Number of 5 rupee coins are="<<mod5/5<<endl;
              cout<< "Number of 2 rupee coins are="<<mod6/2<<endl;
              cout<< "Number of 1 rupee coins are="<<mod7;
              getch();
              goto imill;}

else if(pi==7){float  a , b;            // Calc
               string che;
               system("color 8");
               cout << "Enter operation (add+,subs-,mult x,div %): \n";
                cin >> che;

                if(che=="add"||che=="+") {cout<< "Enter 2 no.:";
                cin>> a >> b;
                cout<<" The Answer is "<< a+b;}
						
                else if(che=="subs"||che=="-"){cout << "Enter 2 no.:";
                cin >> a >> b;
				cout<<" The Answer is "<< a-b;}
				
                else if(che=="mult"||che=="x"){cout << "Enter 2 no.:";
                cin >> a >> b ;
			    cout<<" The Answer is "<< a*b;}			 
		 	
                 else if(che=="div"||che=="%"){cout<< "Enter 2 no.:";
                 cin >> a >> b;
			     cout<<" The Answer is "<< float(a/b);}				
				
                 else{ cout<< char(7);
                 system("color 4");
				 cout<< "Enter a valid operation!"; 
                 goto imill;}}
else if(pi==6){ system("color A");             //Triangle
                int n,c;
                char illu;
                cout<< "Enter character: ";
                cin>> illu;
                cout<< "Enter no. of rows: ";
                cin>> c;
                n=c-1;
	           for (int x=0;x<=n;x++){
	           cout<<"\n";
               for(int y=0;y<=n-x;y++){
	           cout<<" ";}
               for (int z=0;z<=x;z++){
	           cout<< illu<<" ";}}}

else if(pi==8){ srand (time(0));                 //Matrix
	           system ("color 2");
            	for (int a = 0;a < 2; a--) {
	  	        if (a < 2) {
			      cout << rand()%2<< "   " ;	}
		        else {a = 0;}}
				getch();
				exit(0);}

else if(pi==9){ int x,y;                 //graph
    char yut;
    system("color C");
	cout<<"enter x coordinate: ";
    cin>> x;
    cout<<"enter y coordinate: ";
    cin>> y;
    cout<< "Enter ASCII character: ";
    cin>> yut;
    cout<<"\n\n";
    system("cls");
    system("color 3");
    for(int i=0;i<=x;i++){ if(i<10){cout<<"  "<<"0"<<i;}
                       else{cout<<"  "<<i;}}
       cout<< "\n  ";
       for(int i=0;i<=x;i++){ cout<<"_ _ ";}
       cout<<"\n00|";
       for(int j=1;j<=y;j++){ if(j<y){if(j<10){cout<<"\n  |\n0"<<j<<"|";}
                               else{cout<<"\n  |\n"<<j<<"|\n";}}
                       else if(j==y){if(j<10){cout<<"\n  |\n0"<<j<<"|";}
                                     else{cout<<"\n  |\n"<<j<<"|";}}}
                                     
	                   for(int i=0;i<=x;i++){ if(i<x){cout<<"    ";}
                                              else if(i==x){cout<<yut<<"\n\n";}}}
	



else   { cout<< char(7);
         system("color 4");
         cout << " Enter correctly!";
         getch();
         system("cls");
         goto imill;}
 imill:
 string boo;
 cout<< "\n\nDo you wish to continue?(Y/N): ";
 cin>> boo;
 if(boo=="Y"){
	   system("cls");
       goto lookatmenow;}
 else if(boo=="N"){
	   exit(0);}
 else{ cout<< char(7);
       system("color 4");
       cout<<"Enter correctly!";
       getch();
       system("cls");
       goto imill;}
return 0;


}
