// Tech Skills/
#include <iostream>
using namespace std;
const int rows = 7;
const int cols = 4;
void showElements(int data[rows][cols])
{
cout<<"Source Data :"<<endl<<endl;
cout<<"\tCountry\tCases\tDeaths\tRecovered"<<endl<<endl;
// for loop // Declared and Initialized variable
for(int i = 0; i < rows; i++)
{
for(int j = 0; j < cols; j++)
{
cout<<"\t"<<data[i][j];
}
cout<<endl;
}
cout<<endl;
}
float PercentageDeath(int data[rows][cols], int i)
{
float deathRate = (float)100 * data[i][2] / data[i][1];
return deathRate;
}

float PercentageRecovered(int data[rows][cols], int i)
{
float recoveredRate = (float)100 * data[i][3] / data[i][1];
return recoveredRate;
}

int main(){

int choi;
bool check = true;
int sourcesData[rows][cols] = {
0,560433, 22115, 32634,
1,156363, 19899, 34211,
2,84279, 10612, 0,
3,82160, 3341, 77663,
4,71686, 4474, 43894,
5,56956, 1198, 3446,
6,5374, 93, 109
};

showElements(sourcesData);
do
{
cout<<"\nPress the country code to calculate percentage of death and recovered persons"<<endl<<endl;
cout<<"Press 0 for Pakistan "<<endl;
cout<<"Press 1 for China "<<endl;
cout<<"Press 2 for Italy "<<endl;
cout<<"Press 3 for UK "<<endl;
cout<<"Press 4 for Iran "<<endl;
cout<<"Press 5 for France "<<endl;
cout<<"Press 6 for Turkey "<<endl;
cout<<"Press 7 to Exit "<<endl<<endl;
cout<<"Please choose option from 0 to 7 : ";
cin>>choi;
switch(choi)
{
case 0 :
cout << "\nPercentage of Deaths is: "
 << PercentageDeath(sourcesData,choi) <<endl;
cout << "\nPercentage of Recoverd is: " 
<< PercentageRecovered(sourcesData,choi) <<endl;
break;
case 1 :
cout << "\nPercentage of Deaths is: " 
<< PercentageDeath(sourcesData,choi) <<endl;
cout << "\nPercentage of Recoverd is: "
 << PercentageRecovered(sourcesData,choi) <<endl;
break;
case 2 :
cout << "\nPercentage of Deaths is: "
 << PercentageDeath(sourcesData,choi) <<endl;
cout << "\nPercentage of Recoverd is: " 
<< PercentageRecovered(sourcesData,choi) <<endl;
break;
case 3 :
cout << "\nPercentage of Deaths is: "
 << PercentageDeath(sourcesData,choi) <<endl;
cout << "\nPercentage of Recoverd is: " 
<< PercentageRecovered(sourcesData,choi) <<endl;
break;
case 4 :
cout << "\nPercentage of Deaths is: "
 << PercentageDeath(sourcesData,choi) <<endl;
cout << "\nPercentage of Recoverd is: "
 << PercentageRecovered(sourcesData,choi) <<endl;
break;
case 5 :
cout << "\nPercentage of Deaths is: " 
<< PercentageDeath(sourcesData,choi) <<endl;
cout << "\nPercentage of Recoverd is: "
 << PercentageRecovered(sourcesData,choi) <<endl;
break;
case 6 :
cout << "\nPercentage of Deaths is: " 
<< PercentageDeath(sourcesData,choi) <<endl;
cout << "\nPercentage of Recoverd is: "
 << PercentageRecovered(sourcesData,choi) <<endl;
break;
case 7 :
check = false;
break;
default :
cout << "\nInvalid Choice Please choose between 0 to 7 "
<<endl;
break;
}
}while(check);
}