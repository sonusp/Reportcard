//Program to print the report card of a student.....
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<dos.h>

/* this act as blue print for the fields to be included in the report card*/

struct report
 {
    char name[50];
    int roll;
    int admn;
    int english;                 // these variables act as fields
    int physics;
    int chemistry;
    int math;
    int computer;
    float cgpa;
 };
int n=0,delcounter=0;           // declaring global variables
report r[50];		    // declaring global structural variable

void teachers();

void wait()   //function to make program wait
{
  clrscr();
  for(int i=0;i<2;i++)
   {clrscr();
    gotoxy(30,10);
    cout<<"P";
    delay(50);
    cout<<"\b";
    delay(100);
    cout<<"P";
    delay(50);
    cout<<"L";
    delay(50);
    cout<<"\b";
    delay(100);
    cout<<"L";
    delay(50);
    cout<<"E";
    delay(50);
    cout<<"\b";
    delay(100);
    cout<<"E";
    delay(50);
    cout<<"A";
    delay(50);
    cout<<"\b";
    delay(100);
    cout<<"A";
    delay(50);
    cout<<"S";
    delay(50);
    cout<<"\b";
    delay(100);
    cout<<"S";
    delay(50);
    cout<<"E";
    delay(50);
    cout<<"\b";
    delay(100);
    cout<<"E";
    delay(50);
    cout<<" ";
    delay(50);
    cout<<"\b";
    delay(100);
    cout<<" ";
    delay(50);
    cout<<"W";
    delay(50);
    cout<<"\b";
    delay(100);
    cout<<"W";
    delay(50);
    cout<<"A";
    delay(50);
    cout<<"\b";
    delay(100);
    cout<<"A";
    delay(50);
    cout<<"I";
    delay(50);
    cout<<"\b";
    delay(100);
    cout<<"I";
    delay(50);
    cout<<"T";
    delay(50);
    cout<<"\b";
    delay(100);
    cout<<"T";
    delay(50);
    cout<<"\b\b\b\b\b\b\b\b\b\b\b\b";
    }
  gotoxy(1,1);
  clrscr();
}
void loading()                  // function to create load effect
  {
    clrscr();
    cout<<"\n\n\n\n\n\n";
    cout<<"\n                                                                      ";
    cout<<"\n             LOADING NECESSARY INFORMATIONS ON THE REPORT CARD.          ";
    cout<<"\n                                                                      ";
    cout<<"\n                                PLEASE WAIT !!!!                        ";
    cout<<"\n                                                                      ";
    cout<<"\n\n\n  ";
      for(int i=0;i<76;i++)
	 {
	    for(long int i=0;i<999999;i++);   // creating blank loop for time gap
	    cout<<"I";
	 }
    cout<<"\n\n\n             ALL INFORMATIONS LOADED IN THE REPORT CARD.             ";
 }

 /* function to advice user to be cautious while giving inputs */


    void warning()
     {
       cout<<"________________________________________________________________________";
       cout<<"\n|                                                                       |";
       cout<<"\n|           WARNING !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!         |";
       cout<<"\n|                                                                       |";
       cout<<"\n|YOUR REST OF INPUTS MUST BE IN NUMBERS,OTHERWISE THE PROGRAM WILL HANG.|";
       cout<<"\n|                                                                       |";
       cout<<"\n|                                                                       |";
       cout<<"\n|______________________________________________________________________ |";
     }


void comment(float cgpa)       // function to give comments
   {
     randomize();
     if(cgpa>=8)
       cout<<"EXCELLENT";
     else
     {
       switch(random(5))
	{             // switch...case statement initialised
	  case 0:cout<<"Needs Improvement!";
		break;
	  case 1:cout<<"Very Notorious!!!";
		break;
	  case 2:cout<<"Very Insincere!";
		break;
	  case 3:cout<<"Can Do Better!!!";
		break;
	  default:cout<<"Work Hard!!!";
		break;
	}
     }
}


float gp(int marks)  // function to create grade points of a subject
   {
     float gp;
      if(marks>90)
	 gp=10;
      else if(marks>80)
	 gp=9;
      else if(marks>70)
	 gp=8;
      else if(marks>60)
	 gp=7;
      else if(marks>50)
	 gp=6;
      else if(marks>40)
	 gp=5;
      else if(marks>30)
	 gp=4;
      else if(marks>20)
	 gp=3;
      else if(marks>10)
	 gp=2;
      else
	 gp=1;
  return gp;
}

 /* function to calculate cgpa of the student */

 float cgpa(int phy,int chem,int math,int comp,int eng)
  {
    float cgpa;
    cgpa=(gp(phy)+gp(chem)+gp(math)+gp(comp)+gp(eng))/5;
    return cgpa;
  }


void getval(report &s)     // function to accept input by the user
  {
    cout<<"\nEnter the name of student:";
    gets(s.name);
    clrscr();
    warning();
    cout<<"\n\n\nEnter the admission number:";
    cin>>s.admn;
    cout<<"\nEnter the roll number:";
    cin>>s.roll;
    cout<<"\nEnter the marks in English:";
    cin>>s.english;
    cout<<"\nEnter the marks in Math:";
    cin>>s.math;
    cout<<"\nEnter the marks in Physics:";
    cin>>s.physics;
    cout<<"\nEnter the marks in Chemistry:";
    cin>>s.chemistry;
    cout<<"\nEnter the marks in Computer:";
    cin>>s.computer;
    s.cgpa=cgpa(s.physics,s.chemistry,s.math,s.computer,s.english);
    cout<<"\n\n\n\n";
  }


void result(float cgpa)    // function to declare PASS or FAIL
 {
   if(cgpa>=4)
     cout<<"PASS";
   else
     cout<<"FAIL!";
 }


void reportcard(report r)      // function to create report card
{
  clrscr();
  cout<<"___________________________________________________________________________";
  cout<<"\n|                                     |                                    |";
  cout<<"\n|  <<<<<<< STUDENT DETAILS >>>>>>>>>  |	            <<<RESUME>>>           |";
  cout<<"\n|                                     |                                    |";
  cout<<"\n|                                                                           ";
  cout<<"\n| NAME:"<<r.name<<"      CLASS:XI                                           ";
  cout<<"\n|                                               CGPA: "<<r.cgpa<<"            ";
  cout<<"\n|                                                                           ";
  cout<<"\n| ROLL:"<<r.roll<<"      ADMN:"<<r.admn<<"                                  ";
  cout<<"\n|                                     |                                    |";
  cout<<"\n|                                     |                                    |";
  cout<<"\n|-------------------------------------|------------------------------------|";
  cout<<"\n|..........ACADEMIC REPORT............|            TEACHERS' VIEWS         |";
  cout<<"\n|                                     |                                    |";
  cout<<"\n|                                                                           ";
  cout<<"\n| ENGLISH  :"<<r.english<<"                                  COMMENTS:";
  comment(r.cgpa);
  cout<<"\n|                                                                           ";
  cout<<"\n|  MATHS   :"<<r.math<<"                                                    ";
  cout<<"\n|                                             RESULT:";
  result(r.cgpa);
  cout<<"\n| CHEMISTRY:"<<r.chemistry<<"                                               ";
  cout<<"\n|                                                                           ";
  cout<<"\n| PHYSICS  :"<<r.physics<<"                                                 ";
  cout<<"\n|                                     |                                    |";
  cout<<"\n| COMPUTER :"<<r.computer<<"                       |         BEST OF LUCK..........     |";
  cout<<"\n|_____________________________________|____________________________________| ";
}


void show(report s)     // function to show a particular record
 {
   clrscr();
   loading();          // calling loading function
   clrscr();
   reportcard(s);
 }


void create()         // function to create fresh records
 {
   ///n=n+delcounter;
   char choice;
   do{
       cout<<"\nThis is the details of student no."<<(n+1);
       getval(r[n]);
       clrscr();
       n++;
       cout<<"\n Do you want to cont....[y/n]";
       cin>>choice;
      }while(choice=='y' || choice=='Y');
 }


void displaym(int &n)     // function to show the modified records
  {
    clrscr();
    loading();
    clrscr();
    for(int p=0;p<n;p++)
      {
       clrscr();
       reportcard(r[p]);     // calling reportcard function
       getch();
      }
  }


void display()              // function to show existing records
  {
    clrscr();
    loading();
    clrscr();
    for(int p=0;p<n;p++)
      {
       clrscr();
       reportcard(r[p]);
       getch();
      }
  }


void del(report r[],int &n)     // function to delete records
   {
     int sk;
     report temp;
     char found,choice;
     cout<<"Enter the admission number:";
     cin>>sk;
     cout<<"Are you sure???[y/n]...";
     cin>>choice;
     tolower(choice);
     if(choice=='y')
      { for(int m=0;m<n;m++)
       if(r[m].admn==sk)
	 {
	   found='t';
	   temp=r[m];
	   r[m]=r[m+1];
	   r[m+1]=temp;
	 }
       else
	   found='f';
       if(found=='t')
	 {
	   n=n-1;
	   delcounter=delcounter+1;
	   cout<<"RECORD DELETED.";
	   }
       else
	   cout<<"Records not found!!!!!";
       }
     else
	cout<<"Record not deleted.";
      getch();
  }


void search()             // function to search a record
{
  int admno;
  char found='f';int st;
  cout<<"\nBy which critertia do you like to search?  [1-name/2-admn]";
  do{
  cin>>st;
  if(st==2)
    {
      cout<<"Enter the admission number:";
      cin>>admno;
      for(int k=0;k<n;k++)
	if(r[k].admn==admno)
	  {
	    show(r[k]);
	    getch();
	    found='t';
	    break;
	  }
	if(found=='f')
	  {
	    cout<<"Record not found!!!!!!!";
	    getch();
	  }
   }

else if(st==1)
   {
     char stname[20];
     cout<<"Enter the name of the student:";
     gets(stname);
     for(int x=0;x<n;x++)
       {
	 if(!strcmpi(r[x].name,stname))
	   {
	     show(r[x]);
	     getch();
	     found='t';
	     break;
	   }
       }
	 if(found=='f')
	   {
	     cout<<"Record not found!!!";
	     getch();
	   }
   }
     else
	     cout<<"INVALID INPUT TRY AGAIN";
    if(st==2)
	 break;
  }while(st!=1);
}

void modify()       // function to make changes in the records
  {
    char found='f',choice;
    int sk;
    cout<<"Enter the admission number:";
    cin>>sk;
    for(int z=0;z<n;z++)
      if(r[z].admn==sk)
	{
	 show(r[z]);
	 found='t';
	 break;
       } if(found=='t')
	  { cout<<"\n Do you want to modify?[y/n]";
	    cin>>choice;
	    if(choice=='y' || choice=='Y')
	     { report temp;
	       temp.admn=r[z].admn;
	       cout<<"Enter the name [o to skip]:";
	       gets(temp.name);
	       if(strcmpi(temp.name,"o")==0)
		   strcpy(temp.name,r[z].name);
	       cout<<"\n Enter the roll number: [0 to skip]";
	       cin>>temp.roll;
	       if(temp.roll==0)
		   temp.roll=r[z].roll;
	       cout<<"\nEnter the marks in Math: [0 to skip]";
	       cin>>temp.math;
	       if(temp.math==0)
		   temp.math=r[z].math;
	       cout<<"\nEnter the marks in Computer: [0 to skip]";
	       cin>>temp.computer;
	       if(temp.computer==0)
		   temp.computer=r[z].computer;
	       cout<<"\nEnter the marks in Physics: [0 to skip]";
	       cin>>temp.physics;
	       if(temp.physics==0)
		   temp.physics=r[z].physics;
	       cout<<"\nEnter the marks in Chemistry: [0 to skip]";
	       cin>>temp.chemistry;
	       if(temp.chemistry==0)
		   temp.chemistry=r[z].chemistry;
	       cout<<"\nEnter the marks in English: [0 to skip]";
	       cin>>temp.english;
	       if(temp.english==0)
		   temp.english=r[z].english;
	       temp.cgpa=cgpa(temp.physics,temp.chemistry,temp.math,temp.computer,temp.english);
	       r[z]=temp;
	       clrscr();
	       cout<<"\n\n\n\n\n			 YOUR RECORDS HAVE BEEN SUCCESSFULLY MODIFIED";
	}
      else
	cout<<"\n\n\n\n		RECORD NOT MODIFIED";
   }
     if(found=='f')
	{
	  cout<<"Record not found!!!!";
	  cout<<"\n No modification made..";
	  getch();
	}
 }



 void arrange(report r[],int n)         // function to arrange records rank wise
   {
     int a=1;
     report temp;
     for(int i=0;i<n;i++)
       for(int j=n-1;j>=i;j--)         // nesting of loops
	 if(r[j].cgpa<r[j-1].cgpa)
	   {
	     temp=r[j];
	     r[j]=r[j-1];
	     r[j-1]=temp;
	   }
     cout<<"\n                   NAME          CGPA";
     for(int k=n-1;k>=0;k--)
	cout<<"\n               "<<a++<<". "<<r[k].name<<"          "<<r[k].cgpa;
	getch();
   }



void menu()                     // function to create task menu information
{
clrscr();
cout<<"  ______________________________________________________________________";
cout<<"\n  VVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVV";
cout<<"\n(|                                                                      |)";
cout<<"\n(|                                                                      |)";
cout<<"\n(|     <<<<<<<<<      XXX XYZ PUBLIC SCHOOL,WBC     >>>>>>>>>          |)";
cout<<"\n(|                        Ghatotand,Ramgarh                             |)";
cout<<"\n(|                                                                      |)";
cout<<"\n(|                                                                      |)";
cout<<"\n(|                 ACEDEMIC PERFORMANCE REPORT FILE                     |)";
cout<<"\n(|                        SESSION=>2016-2017                            |)";
cout<<"\n(|                                                                      |)";
cout<<"\n(|                                                                      |)";
cout<<"\n(|                                                                      |)";
cout<<"\n(|    CLASS TEACHER:Mr. X.Y xxxxx                 CLASS- XII \"A\"[sc]    |)";
cout<<"\n(|                                                                      |)";
cout<<"\n(|                                                                      |)";
cout<<"\n(|                         TOTAL STRENGTH:"<<n<<"                             |)";
cout<<"\n(|                                                                      |)";
cout<<"\n(|                      Principal:-Mr. x x                              |)";
cout<<"\n(|______________________________________________________________________|)";
cout<<"\n  VVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVV";

cout<<"\n\n              PRESS ENTER TO ACCESS IN THE ACADEMIC FILE.";
getch();
}
void students() //for students
{clrscr();
 cout<<"\n			 --------------------";
 cout<<"\n		       	|SEE YOUR REPORT CARD|";
 cout<<"\n			 -------------------- ";
 search();
 clrscr();
  }
void askpin()       //function for privacy
{int pin;
 do{
  clrscr();
  wait();
  cout<<"\n			-----------";
  cout<<"\n		       	|ENTER PIN|";
  cout<<"\n			----------- ";
  cout<<"\n			";
  cin>>pin;
   if(pin==3306)
       teachers();
   else
    cout<<"\n			WRONG PIN TRY AGAIN";
  getch();
  }while(pin!=8110);
}
void mainpage()            // function  for next page
{ clrscr();
  int choice;
  do{
  wait();
  cout<<"    ____________________________________________________________________";
  cout<<"\n  VVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVV";
  cout<<"\n(|		xxxx xxx PUBLIC SCHOOL, WBC, GHATOTAND		        |)";
  cout<<"\n(|		WHO ARE YOU??..					        |)";
  cout<<"\n(|			1.TEACHERS				        |)";
  cout<<"\n(|			2.STUDENTS				        |)";
  cout<<"\n(|			3.EXIT					        |)";
  cout<<"\n(|______________________________________________________________________|)";
  cout<<"\n  VVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVV";
  cout<<"\n		       ENTER YOUR CHOICE[1...3]..	";
  cin>>choice;
  if(choice==1)
     askpin();
  else if(choice==2)
     students();
       else if(choice==3)
	   { wait();
	     cout<<"\n			THANKS FOR USING THE PROGRAM";
	     cout<<"\n			THE PROGRAM WILL NOW EXIT";
	     cout<<"\n			PRESS ANY KEY";
	     getch();
	     exit(1);
	   }
	   else
	     cout<<"INVALID INPUT TRY AGAIN";
  }while(choice!=3);
}
void teachers()
{ clrscr();
  int ans;
  wait();
  do
   {
    clrscr();
    cout<<"\n\t\t\t\t  ---------";
    cout<<"\n\t\t\t\t| MAIN MENU |";
    cout<<"\n\t\t\t\t  ---------";
    cout<<"\n___________________________________________________________________";
    cout<<"\n|1.CREATE report card.                                              |";
    cout<<"\n|-------------------------------------------------------------------|";
    cout<<"\n|2.SEE a particular report card                                     |";
    cout<<"\n|-------------------------------------------------------------------|";
    cout<<"\n|3.MODIFY a particular report card                                  |";
    cout<<"\n|-------------------------------------------------------------------|";
    cout<<"\n|4.DISPLAY all report card                                          |";
    cout<<"\n|-------------------------------------------------------------------|";
    cout<<"\n|5.DELETE a particular report card                                  |";
    cout<<"\n|-------------------------------------------------------------------|";
    cout<<"\n|6.see report RANK WISE                                             |";
    cout<<"\n|-------------------------------------------------------------------|";
    cout<<"\n|7.EXIT from result menu.                                           |";
    cout<<"\n_____________________________________________________________________";
    cout<<"\n\n ENETR CHOICE  [1...7]:"; cin>>ans;
    clrscr();
	   switch(ans)
	    {
	      case 1:wait();
		     create();
		     break;
	      case 2:wait();
		     search();
		     break;
	      case 3:wait();
		     modify();
		     break;
	      case 4:wait();
		     display();
		     break;
	      case 5:wait();
		     del(r,n);
		     break;
	      case 6:wait();
		     arrange(r,n);
		     break;
	      case 7:mainpage();
		     break;
	      default:wait();
		      cout<<"Invalid Input,Try Again!!!!!!";
		      getch();
	    }
  }while(ans!=7);
    getch();
}


void main()                    // main section
  {
     clrscr();
     textcolor(100);
     textbackground(7);
     menu();
     mainpage();
  }
