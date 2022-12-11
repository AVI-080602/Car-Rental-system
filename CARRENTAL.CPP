#include <iostream>
#include<fstream>
#include<conio.h>
#include<stdlib.h>
#include<unistd.h>
#include<dos.h>
#include<iomanip>
using namespace std;
class customer

{

    private:
    public:
    string customername;
    string carmodel;
    string carnumber;
    string id;
    char data;
    int driver, ch1;
};
 class rent : public customer
    public:
    int days=0, rental_fee=0;
    public:
    void data();
    void calculate();
    void showrent();
};
     void rent::data()
     {
         int login();
         login();
         cout << "\t\t\t\t\tPlease Enter Your Name: ";
         cin >> customername;
         cout <<"\t\t\t\t National ID:";
         cin >>id;
         cout<<endl;
         do
         {
             cout <<"\t\t\t\tPlease Select a Car"<<endl;
             cout <<"\t\t\tA: Maruti suzuki (Swift) 2016 model."<<endl;
             cout <<"\t\t\tB: Honda city 2015 model."<<endl;
             cout <<"\t\t\tC: Renault Duster 2017 model."<<endl;
             cout <<"\t\t\tD: Mahindra Scorpio 2015 model."<<endl;
             cout <<"\t\t\tE: Toyota Fortuner 2018 model."<<endl;
             cout <<"\t\t\tF: Mahinra Thar 2014 model."<<endl;
             cout <<"\t\t\tG: Tata Indica Vista 2018 model."<<endl;
             cout <<endl;
             cout <<"\t\t\tChoose a car from the above option:";
             cin>>carmodel;
             cout<<endl;
       cout<<"-----------------------------------------------------------------------------"<<endl;
       if(carmodel=="A")
       {
           system("CLS");

           cout<<"You have choosed Maruti suzuki (Swift) 2016 model."<<endl;
           ifstream inA("A1.txt");
           char str[200];
           while(inA)   {
           inA.getline(str, 200);
           if(inA) cout<<str<<endl;
           }
           sleep(2);
       }
         if(carmodel=="B")
       {
           system("CLS");

           cout<<"You have choosed Honda city 2015 model."<<endl;
           ifstream inB("B1.txt");
           char str[200];
           while(inB)   {
           inB.getline(str, 200);
           if(inB) cout<<str<<endl;
           }
           sleep(2);
       }
           if(carmodel=="C")
       {
           system("CLS");

           cout<<"You have choosed Renault Duster 2017 model."<<endl;
           ifstream inC("C1.txt");
           char str[200];
           while(inC)   {
           inC.getline(str, 200);
           if(inC) cout<<str<<endl;
           }
           sleep(2);
       }
           if(carmodel=="D")
       {
           system("CLS");

           cout<<"You have choosed Mahindra Scorpio 2015 model."<<endl;
           ifstream inD("D1.txt");
           char str[200];
           while(inD)   {
           inD.getline(str, 200);
           if(inD) cout<<str<<endl;
           }
           sleep(2);
       }
           if(carmodel=="E")
       {
           system("CLS");

           cout<<"You have choosed Toyoya Fortuner 2017 model."<<endl;
           ifstream inE("E1.txt");
           char str[200];
           while(inE)   {
           inE.getline(str, 200);
           if(inE) cout<<str<<endl;
           }
           sleep(2);
       }
           if(carmodel=="F")
       {
           system("CLS");

           cout<<"You have choosed Mahindra Thar 2014 model."<<endl;
           ifstream inF("F1.txt");
           char str[200];
           while(inF)   {
           inF.getline(str, 200);
           if(inF) cout<<str<<endl;
           }
           sleep(2);
       }
               if(carmodel=="G")
       {
           system("CLS");

           cout<<"You have choosed Tata Indica Vista 2013 model."<<endl;
           ifstream inG("G1.txt");
           char str[200];
           while(inG)   {
           inG.getline(str, 200);
           if(inG) cout<<str<<endl;
           }
           sleep(2);
   }

if(carmodel !="A" && carmodel !="B" && carmodel !="C" && carmodel !="D" && carmodel !="E" && carmodel !="F" && carmodel !="G")

    cout<<"Invalid Car Model.Please Try Again"<<endl;
    }
while(carmodel !="A" && carmodel !="B" && carmodel !="C" && carmodel !="D" && carmodel !="E" && carmodel !="F" && carmodel !="G");
    cout<<"------------------------------------------------------------------------------------------------------------"<<endl;
    cout<<"Please provide following information: "<<endl;
    cout<<"Please give the Car No. : ";
    cin >> carnumber;
    cout <<"Number of days you wish to rent the car : ";
    cin >> days;
    cout<<endl;

    cout<<"Do you want a car driver? \n Print \t 1:Yes \t2:No\t\t\t=> ";
    cin >> ch1;

    switch(ch1)
    {

    case 1:
        {
            cout<<"For driver there will extre 500Rs charge per Day !"<<endl;
            cout<<"The Driver Full details will be provided to you later."<<endl;
            driver=days*500;
            sleep(5);
        }
        break;

    case 2:
        {
            cout<<"\n"<<endl;
            cout<<endl;
            driver=0;
        }
        break;
    }
}
void rent::calculate ()
{
    sleep(1);
    system("CLS");
    cout<<"Calculating rent. Please wait........"<<endl;
    sleep(2);
    if(carmodel == "A" || carmodel== "a")
     rental_fee=((days*110)+(driver));
    if(carmodel == "B" || carmodel== "b")
     rental_fee=((days*120)+(driver));
    if(carmodel == "C" || carmodel== "c")
      rental_fee=((days*102)+(driver));
    if(carmodel == "D" || carmodel== "d")
      rental_fee=((days*130)+(driver));
    if(carmodel == "E" || carmodel== "e")
      rental_fee=((days*120)+(driver));
    if(carmodel == "F" || carmodel== "f")
      rental_fee=((days*140)+(driver));
    if(carmodel == "G" || carmodel== "g")
      rental_fee=((days*125)+(driver));

}
void rent::showrent()
{
    ofstream fout("DATA.text");
    cout <<"\n\t\t\t             Car Rental - Customer Invoice          "<<endl;
    fout <<"\n\t\t\t             Car Rental - Customer Invoice          "<<endl;
    cout<<"\t\t\t |Invoice No.:"<<"---------------------------------|"<<setw(10)<<"#Cnb81353"<<" |"<<endl;
    fout<<"\t\t\t |Invoice No.:"<<"---------------------------------|"<<setw(10)<<"#Cnb81353"<<" |"<<endl;
    cout<<"\t\t\t |Customer Name:"<<"-------------------------------|"<<setw(10)<<customername<<" |"<<endl;
    fout<<"\t\t\t |Customer Name:"<<"-------------------------------|"<<setw(10)<<customername<<" |"<<endl;
    cout<<"\t\t\t |National id no.:"<<"-----------------------------|"<<setw(10)<<id<<" |"<<endl;
    fout<<"\t\t\t |National id no.:"<<"-----------------------------|"<<setw(10)<<id<<" |"<<endl;
    cout<<"\t\t\t |Car model:"<<"-----------------------------------|"<<setw(10)<<carmodel<<" |"<<endl;
    fout<<"\t\t\t |Car model:"<<"-----------------------------------|"<<setw(10)<<carmodel<<" |"<<endl;
    cout<<"\t\t\t |Car no. :"<<"------------------------------------|"<<setw(10)<<carnumber<<" |"<<endl;
    fout<<"\t\t\t |Car no. :"<<"------------------------------------|"<<setw(10)<<carnumber<<" |"<<endl;
    cout<<"\t\t\t |Number of days :"<<"-----------------------------|"<<setw(10)<<days<<" |"<<endl;
    fout<<"\t\t\t |Number of days :"<<"-----------------------------|"<<setw(10)<<days<<" |"<<endl;
    cout<<"\t\t\t |Your Rental Amount is :"<<"----------------------|"<<setw(10)<<rental_fee<<" |"<<endl;
    fout<<"\t\t\t |Your Rental Amount is :"<<"----------------------|"<<setw(10)<<rental_fee<<" |"<<endl;
    cout<<"\t\t\t |Caution Money :"<<"------------------------------|"<<setw(10)<<"0"<<" |"<<endl;
    fout<<"\t\t\t |Caution Money :"<<"------------------------------|"<<setw(10)<<"0"<<" |"<<endl;
    cout<<"\t\t\t |Advanced :"<<"-----------------------------------|"<<setw(10)<<"0"<<" |"<<endl;
    fout<<"\t\t\t |Advanced :"<<"-----------------------------------|"<<setw(10)<<"0"<<" |"<<endl;
    cout<<"\t\t\t  _______________________________________________________________________"<<endl;
    fout<<"\t\t\t  _______________________________________________________________________"<<endl;
    cout<<"\n";
    fout<<"\n";
    cout<<"\t\t\t |Total Rental Amount is :"<<"---------------------|"<<setw(10)<<rental_fee<<" |"<<endl;
    fout<<"\t\t\t |Total Rental Amount is :"<<"---------------------|"<<setw(10)<<rental_fee<<" |"<<endl;
    cout<<"\t\t\t  _______________________________________________________________________"<<endl;
    fout<<"\t\t\t  _______________________________________________________________________"<<endl;
    cout<<"\t\t\t  # This is a computer generated invoice and it does not reguired an   "<<endl;
    cout<<"\t\t\t   authorized signature#"<<endl;
    fout<<"\t\t\t  # This is a computer generated invoice and it does not reguired an   "<<endl;
    fout<<"\t\t\t   authorized signature#"<<endl;
    cout<<" "<<endl;
    fout<<"\n\n\n"<<endl;
    fout.close();

    cout <<"\t\t\t   //////////////////////////////////////////////////////////////////////////"<<endl;
    cout <<"\t\t\t   You are advised to pay up the amount before due date>"<<endl;
    cout <<"\t\t\t   Otherwise penelty fee will be applied"<<endl;
    cout <<"\t\t\t   //////////////////////////////////////////////////////////////////////////"<<endl;
    int f;
    system("PAUSE");
    system("CLS");
    ifstream inf("thanks1.txt");
  char str[300];
  while(inf){
    inf.getline(str, 300);
    if(inf)
        cout<< str <<endl;
        }
        inf.close();
}

class welcome
{
public:
    int welcum()
    {
        ifstream in("welcome1.txt");

        if(!in){
            cout<<"Cannot open input file.\n";
        }
        char str[1000];
        while(in){
            in.getline(str, 1000);
            if(in) cout<<str<<endl;
        }
        in.close();
        sleep(1);
        cout <<"\n Starting the program PLease wait......"<<endl;
        sleep (1);
        cout<<"\n Loading files......"<<endl;
        sleep(1);
        system ("CLS");
    }
};

int main()
{

    welcome obj1;
    obj1.welcum();
    rent obj2;
    obj2.data();
    obj2.calculate();
    obj2.showrent();

    return 0;
}

int login()
{
    string hope ="";
    char ch;
    cout <<"\n\n\n\n\n\n\n\n\t\t\t\t\t\t    CAR RENTAL SYSTEM \n\n";
    cout <<"\t\t\t\t\t------------------------------------";
    cout <<"\n\t\t\t\t\t\t\t     LOGIN\n";
    cout <<"\t\t\t\t\t------------------------------------\n\n";
    cout <<"\t\t\t\t\t\tENTER PASSWORD:   ";
    ch =_getch();
    while(ch !=13)
    {
        hope.push_back(ch);
        cout <<'*';
        ch =_getch();
    }
    if(hope == "hope"){
        cout <<"\n\n\n\t\t\t\t ACCESS GRANTED!\n";
        system("PAUSE");
        system("CLS");
    }
    else{
        cout <<"\n\n\t\t\t\t\t ACCESS ABORTED....\n\t\t\t\t\t\t\t PLEASE TRY AGAIN\n\n";
        system("PAUSE");
        system("CLS");
        login();
    }
}
