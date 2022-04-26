#include<iostream>
// iostream is input output header file

#include<stdlib.h>
// stdlib is standard library

using namespace std;

// Declared base class

class LANode

{

    // in public

public :

    // string is datatype

string student_id;

string fast_name;

string last_name;

int Marks;

LANode *nextNode;



LANode()

{

student_id="";

fast_name="";

last_name="";

Marks=0;

}



LANode(string id, string fast_nm, string last_nm, int mrk)

{

student_id=id;

fast_name=fast_nm;

last_name=last_nm;

Marks=mrk;

}

// function setId

void setID(string id)

{

student_id=id;

}

// function

// void mean 0 is it return type

void setMarks(int m)

{

Marks=m;

}

// function

void setFastName(string fast_n)

{

fast_name=fast_n;

}

// function

void set_LastName(string last_n)

{

last_name=last_n;

}

// int datatype

int getMarks() 

{ 

return Marks; 

}

string getSTID()

{

return student_id;

}

string getFastName()

{

return fast_name;

}

string getLastName()

{

return last_name;

}

};

// declared drived class

class Student_List

{

private :

LANode * headNode; 

public :

Student_List()

{

headNode = NULL;

}



void add_student(LANode **head, LANode* newNode)

{

LANode* currentNode;

// if else statement

if(*head == NULL || (*head)->Marks <= newNode->Marks)

{

newNode->nextNode = *head;

*head=newNode;

}

else

{

currentNode = *head;

// while loop

while(currentNode->nextNode
 != NULL && currentNode->nextNode->Marks > newNode->Marks)

{

currentNode=currentNode->nextNode;

}

newNode->nextNode=currentNode->nextNode;

currentNode->nextNode=newNode;

}

}



void new_LANode()

{

string id;

string fast_name;

string last_name;

int marks;

cout<<"Please enter  your  ID : ";

cin>>id;

cout<<"Please enter your Marks: ";

cin>>marks;

cout<<"Please enter your First Name : ";

cin>>fast_name;

cout<<"Please enter your Last Name : ";

cin>>last_name;



LANode* newNode= new LANode(id,fast_name,last_name,marks);



newNode->nextNode=NULL;

add_student(&headNode, newNode);

}



void display_Student()

{

LANode* node1 = headNode;

if(node1==NULL)

{

cout<<"Not Entered Yet "<<endl; 

}

else

{

while(node1!=NULL)

{

cout<<"\n  ID : "<<node1->getSTID();

cout<<"\nMarks: "<<node1->getMarks();

cout<<"\nFirst name : "<<node1->getFastName();

cout<<"\nLast name : "<<node1->getLastName()<<endl;

node1=node1->nextNode;

}

}

}

};





main()

{



Student_List * list = new Student_List();

//boolean expression 

bool close=1;

int cher=0;

//do while loop

do

{

cout<<"\n1) open New student in ranking";

cout<<"\n2) open Display ranking";

cout<<"\n3) close";

cout<<"\nEnter your choice (1, 2 or 3) : ";

cin>>cher;



if(cher==1)

{

list->new_LANode();

}

else if(cher==2)

{

cout<<"\nYour Ranking Chart\n";

list->display_Student();

}

if(cher==3)

{

close=0;

cout<<"\nClose";

}



}while(close);

}