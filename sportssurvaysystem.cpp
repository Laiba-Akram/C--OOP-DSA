#include <iostream>

#include <fstream>

using namespace std;
class sports
{
private :
string playername;
string game_name;
int total_wins;
public :
sports()
{
playername="";
game_name="";
total_wins=0;
        }
void input_file()
        {
cout<<"\nWriting in the file";
cout<<"\nEnter the name of the player : ";
cin>>playername;
cout<<"Enter the sportorts name of the player : ";
cin>>game_name;
cout<<"Enter the number of wins for the current season : ";
cin>>total_wins;

ofstream outFile;
char FileName[] = "Sample.txt";
outFile.open(FileName, ios::out);
if (!outFile)
            {
cout << "Can't open input file named Sample.txt"<< endl;
exit(1);
            }
outFile<<playername<<"\n";
outFile<<game_name<<"\n";
outFile<<total_wins;
outFile.close();    
cout<<"\nData have been entered in the file";       
        }
void read_file()
        {
char FileName[] = "Sample.txt";
ifstream inFile;
inFile.open(FileName, ios::in); 
if (inFile)
            {   
string dt;
while(getline(inFile, dt))
                { 
 cout << dt << "\n"; 
                }
inFile.close(); 
            }
else
            {
cout << "Can't open input file named "
 << FileName << endl;
exit(1);
            }
        }
void notstartingwithA()
        {

char FileName[] = "Sample.txt";
ifstream inFile;
inFile.open(FileName, ios::in); 
int count=0;
char c;
if (inFile)
            {   
string dt;
while(getline(inFile, dt))
                {
c=dt.at(0);
if(c!='A')
                    {
    count++;    
                    }
                }
inFile.close(); 
cout<<"\nThe number of lines not started with'A' including empty lines : "<<count<<endl;
            }
            else
            {
cout << "Can't open input file named " 
<< FileName << endl;
    exit(1);
            }
        }
void lower()
        {
char FileName[] = "Sample.txt";
ifstream inFile;
inFile.open(FileName, ios::in); 
int count=0;
char c;
if (inFile)
            {   
  string dt;
while(getline(inFile, dt))
                {
c=dt.at(0);
if(islower(c))
                    {
    count++;    
                    }
                }
    inFile.close(); 
cout<<"\nThe number of lines started with lower character are :"<<count<<endl;
            }
            else
            {
cout << "Can't open input file named " 
<< FileName << endl;
    exit(1);
            }
        }
void upper()
        {
    char FileName[] = "Sample.txt";
ifstream inFile;
inFile.open(FileName, ios::in); 
int count=0;
char c;
if (inFile)
            {   
    string dt;
    while(getline(inFile, dt))
                {
    c=dt.at(0);
    if(isupper(c))
                    {
    count++;    
                    }
                }
    inFile.close(); 
    cout<<"\nThe number of lines started with upper character are:"<<count<<endl;
            }
else
            {
    cout << "Can't open input file named "
 << FileName << endl;
    exit(1);
            }
        }
void digit()
        {
char FileName[] = "Sample.txt";
ifstream inFile;
    inFile.open(FileName, ios::in); 
int count=0;
char c;
    if (inFile)
            {   
    string dt;
    while(getline(inFile, dt))
                {
c=dt.at(0);
    if(isdigit(c))
                    {
    count++;    
                    }
                }
 inFile.close(); 
    cout<<"\nThe number of lines started with digit are : "<<count<<endl;
            }
            else
            {
    cout << "Can't open input file named "
 << FileName << endl;
        exit(1);
            }
        }
};
main()
{
    int option;
    sports sp;
    char iter;
    do
    {       
cout<<"\n\n************ WELCOME TO THE UNIVERSITY SPORTS SURVEY SYSTEM *************";
cout<<"\n\n************Press 1 for entering record of player ************************";
cout<<"\n**************Press 2 for reading data from the file ***********************";
cout<<"\n************** Press 3 for checking line not started with A *****************";
cout<<"\n**************Press 4 for checking line started with lower characters**";
cout<<"\n*************Press 5 for checking line started with upper characters**";
cout<<"\n************** Press 6 for checking line started with digits ************\n\n";
cin>>option;
   switch(option)
        {
    case 1 :
    sp.input_file();
    break;
    case 2 :
        sp.read_file();
        break;
        case 3 : 
        sp.notstartingwithA();
    break;
        case 4 :
        sp.lower();
    break;  
        case 5 :
    sp.upper();
        break;
    case 6 :
        sp.digit();
    break;
    default :
        cout<<"\nInvalid choice entere";
        break; 
        }
cout<<"\nDo you want to continue: ";
    cin>>iter;
    }
while(iter=='y'|| iter=='Y');
}