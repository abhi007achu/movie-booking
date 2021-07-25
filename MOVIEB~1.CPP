#include<fstream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
#include<iostream.h>
#include<stdio.h>
#include<process.h>
#include<dos.h>
#include<graphics.h>
  ifstream fin;
  ofstream fout;

  void getpass(char pass[])
  {
  const int ENTER=13,backsp=8;
int i=0;
	do
	{
	 pass[i] =getch();
	if(pass[i]==backsp)
     {
	   if(i!=0)
	{
	  textcolor(3);
	  cprintf("\b \b");
	  i-=2;
	  }}
	  else
	  if(pass[i]!=ENTER)
	 { textcolor(3);
	  cprintf("*");
	  }
	  }while(pass[i++]!=ENTER);
	  pass[--i]='\0';
}
class movie
{ char name[20];
  int age;
  public:
	char password[20],date[10],cinema[10],sno[10],type[10],passw[20],n[50],yname[50];
	int nseats,get,show;
	float amt;
	movie()
	{
	strcpy(name,"Sneha");
	age=17;
	strcpy(password,"ardra");
	show=0;
	nseats=0;
	amt=0;
	get=0;
	}
	void getinfo()
	{
	gotoxy(5,5);
	textcolor(7);
	cprintf("Enter Details:");
	cout<<endl;
	gotoxy(5,7 );
	textcolor(3);
	cprintf("Name:");
	gets(name);
	cout<<endl;
	gotoxy(5,9 );
	textcolor(3);
	cprintf("Age:");
	cin>>age;
	cout<<endl;
	gotoxy(5,11 );
	textcolor(3);
	cprintf("Password(create):");
	getpass(password);
	cout<<endl;
	}
	int getlang()
	{
		int ch;
clrscr();
		gotoxy(30,5);
		textcolor(7);
		cprintf("Select your language");
	cout<<endl;
	gotoxy(26,7);
	textcolor(3);
	cprintf(" 1. ENGLISH     2. HINDI     3.TAMIL ");
	cout<<endl;
	gotoxy(28,9);
	textcolor(3);
	cprintf("\n   4. MALAYALAM    5.TELENGU\n");
	cout<<endl;
	textcolor(2);
	cprintf("->");
	cin>>ch;
	cout<<endl;
	return ch;
	}
	void dispinfo()
	{clrscr();
	 gotoxy(6,6);
	 textcolor(7);
	cprintf("\t\t\t\t Account Successfully Created!! \t\t\t\t ");
	cout<<endl;
	textcolor(3);
	cprintf("Name : ");
	cout<<name<<endl;
	textcolor(3);
	cprintf("Age : ");
	cout<<age<<endl;
	}
	void calc()
  {  clrscr();
	 if(strcmpi(type,"gold")==0)
	 amt+= 300;
	 else
	 if(strcmpi(type,"silver")==0)
	 amt+=170;
	 else
	 if(strcmpi(type,"normal")==0)
	 amt+=120;

	}
}M;
		struct Seat
		{	char row;
		int col;
		};
			Seat seat[50],temp;
			int totalNoOfSeats=0;

	void display()
	{
	fout.open("movies",ios::binary);
	fout.write((char*)&M,sizeof(M));
	fout.close();
	fin.open("movies",ios::binary);
	while(fin.read((char*)&M,sizeof(M)))
       {
	M.dispinfo();
	textcolor(7);
	cprintf(" Movie Details: ");
	cout<<endl<<endl;
	textcolor(3);
	cprintf("Movie :      ");
	cout<<M.n<<endl;
	textcolor(3);
	cprintf("Show :       ");
	cout<<M.show<<endl;
	textcolor(3);
	cprintf("Date :       ");
	cout<<M.date<<endl;
	textcolor(3);
	cprintf("No: of seats :   ");
	cout<<M.nseats<<endl;
	textcolor(3);
	cprintf("Amount :     ");
	cout<<M.amt<<endl;
	textcolor(3);
	cprintf("Cinemax :    ");
	cout<<M.cinema<<endl;
	textcolor(3);
	cprintf("Type :    ");
	cout<<M.type<<endl;
	textcolor(3);
	cprintf("Seat :    ");
	for(int i=0;i<M.nseats;i++)
cout<<seat[i].row<<seat[i].col<<"\t";
	}
	fin.close();
	}
char type[20];
  int sdate(int x)
  {  clrscr();
  gotoxy(10,5);
	textcolor(7);
	cprintf("\t\t\tSELECT DATE\t\t\t");
	cout<<endl;
	int d;
	switch(x)
  {
  case 1:textcolor(3);
	cprintf("1. 5:10:2017");
	cout<<endl;
	textcolor(3);
	cprintf("2. 6:10:2017");
	cout<<endl;
	textcolor(3);
	cprintf("3. 7:10:2017");
	cout<<endl;
	textcolor(3);
	cprintf("Enter the date from the above list:");
	cout<<endl;
	cin>>d;
	switch(d)
		{
			case 1:{
				strcpy(M.date,"5:10:2017");
				return 0;
				}

			case 2:{
				strcpy(M.date,"6:10:2017");
				return 0;
				}
			case 3:{
				strcpy(M.date,"7:10:2017");
				return 0;
				}
			default:{
				textcolor(7);
cprintf("Sorry invalid date TRY AGAIN");
				delay(1000);
				return 1;
				}		}
  case 2:textcolor(3);
	cprintf("1. 8:10:2017");
	cout<<endl;
	textcolor(3);
	cprintf("2. 9:10:2017");
	cout<<endl;
	textcolor(3);
	cprintf("3. 10:10:2017");
	cout<<endl;
	textcolor(3);
	cprintf("Enter the date from the above list:");
	cout<<endl;
	cin>>d;
	switch(d)
		{
			case 1:{
				strcpy(M.date,"8:10:2017");
				return 0;
				}
			case 2:{
				strcpy(M.date,"9:10:2017");
				return 0;
				}
			case 3:{
				strcpy(M.date,"10:10:2017");
				return 0;
				}
			default:{

				textcolor(7);
				cprintf("Sorry innvalid date TRY AGAIN");
				delay(1000);
				return 1;
				}
		}
  case 3:textcolor(3);
	cprintf("1. 11:10:2017");
	cout<<endl;
	textcolor(3);
	cprintf("2. 12:10:2017");
cout<<endl;
	textcolor(3);
	cprintf("3. 13:10:2017");
	cout<<endl;
	textcolor(3);
	cprintf("Enter the date from the above list:");
	cout<<endl;
	cin>>d;
	switch(d)
		{
			case 1:{
				strcpy(M.date,"11:10:2017");
				return 0;
				}
			case 2:{
				strcpy(M.date,"12:10:2017");
				return 0;
				}
			case 3:{
				strcpy(M.date,"13:10:2017");
				return 0;
				}
			default:{
				textcolor(7);
				cprintf("Sorry invalid date TRY AGAIN");
				delay(1000);
				return 1;
				}}
  case 4:textcolor(3);
	cprintf("1. 14:10:2017");
	cout<<endl;
	textcolor(3);
	cprintf("2. 15:10:2017");
	cout<<endl;
	textcolor(3);
	cprintf("3. 16:10:2017");
	cout<<endl;
	textcolor(3);
	cprintf("Enter the date from the above list:");
	cout<<endl;
	cin>>d;
	switch(d)
		{
			case 1:{
strcpy(M.date,"14:10:2017");
				return 0;	}
			case 2:{
				strcpy(M.date,"15:10:2017");
				return 0;
				}
			case 3:{
				strcpy(M.date,"16:10:2017");
				return 0;
				 }
			default:{
				textcolor(7);
				cprintf("Sorry invalid date TRY AGAIN");
				delay(1000);
				return 1;
				}	}
  case 5:textcolor(3);
	cprintf("1. 17:10:2017");
	cout<<endl;
	textcolor(3);
	cprintf("2. 18:10:2017");
	cout<<endl;
	textcolor(3);
	cprintf("3. 19:10:2017");
	cout<<endl;
	textcolor(3);
	cprintf("Enter the date from the above list:");
	cout<<endl;
	cin>>d;
	switch(d)
		{
		case 1:{strcpy(M.date,"17:10:2017");
				return 0;
				}
			case 2:{
				strcpy(M.date,"18:10:2017");
				return 0;
				}
			case 3:{
				strcpy(M.date,"19:10:2017");
				return 0;
				}
			default:{
				textcolor(7);
cprintf("Sorry invalid date TRY AGAIN");
				delay(1000);
				return 1;
				}		}

	default:{
		textcolor(7);
		cprintf("Sorry!! No such Movie....TRY AGAIN");
		delay(1000);
		return 1;
		} } }
	int scinema()
	{clrscr();
	int c;
	 gotoxy(10,5);
	textcolor(7);
	cprintf("\t\t\tSELECT CINEMA\t\t\t");
	cout<<endl;
	textcolor(3);
	cprintf("1. PVR Cinema");
	cout<<endl;
	textcolor(3);
	cprintf("2.Q Cinema");
	cout<<endl;
	textcolor(3);
	cprintf("3.CineMax");
	cout<<endl;
	textcolor(3);
	cprintf("Enter the Theatre no. from the above list");
	cout<<endl;
	cin>>c;
	switch(c)
	{
	case 1: {strcpy(M.cinema," PVR Cinema\0");
		fout.open("movies",ios::binary);
		fout.write((char*)&M,sizeof(M));
		fout.close();
		return 0;
		}
	case 2:{strcpy(M.cinema,"Q cinema\0");
		fout.open("movies",ios::binary);
		fout.write((char*)&M,sizeof(M));
		fout.close();
		return 0;
}
	case 3:{strcpy(M.cinema,"Cinemax\0");
		fout.open("movies",ios::binary);
		fout.write((char*)&M,sizeof(M));
		fout.close();
		return 0;
		}
	default:{
		textcolor(7);
		cprintf("Invalid choice TRY AGAIN");
		cout<<endl;
		delay(1000);
		return 1;
}}}
	void sseats()
	{ clrscr();
		gotoxy(10,5);
	textcolor(7);
	cprintf("\t\t\tSELECT NO: OF SEATS \t\t\t");
	cout<<endl;
	textcolor(3);
	cprintf("Enter the no: of seats");
	cout<<endl;
	cin>>M.nseats;

	fout.open("movies",ios::binary);
	fout.write((char*)&M,sizeof(M));
	fout.close();
		 }
		 int isSeatAvailable(Seat a)
	 {
	  for(int i=0;i<totalNoOfSeats;++i)
	  if((a.row==seat[i].row)&&(a.col==seat[i].col))
	  return 0;
	 return 1;
	 }
	void bseats()
	{
	clrscr();
gotoxy(10,3);
	textcolor(7);
	cprintf("\t\t\tSELECT SEATS\t\t\t");
	cout<<endl;
	for(int i=0;i<M.nseats;i++)
{gotoxy(15,4);
	textcolor(7);
	cprintf("GOLD(NORMAL) - Rs 300");
	gotoxy(5,5);
	textcolor(3);
	cprintf("  1  2  3  4  5  6");
	cout<<endl;
	gotoxy(5,6);
	textcolor(3);
	cprintf("K [] [] [] [] [] []");
	cout<<endl;
	gotoxy(40,5);
	textcolor(3);
	cprintf(" 7  8  9 10 11 12");
	cout<<endl;
	gotoxy(40,6);
	textcolor(3);
	cprintf("[] [] [] [] [] []");
	cout<<endl;
	gotoxy(15,7);
	textcolor(7);
	cprintf("SILVER(NORMAL) - Rs 170");
	gotoxy(5,8);
	textcolor(3);
	cprintf("J [] [] [] [] [] []");
	cout<<endl;
	gotoxy(5,9);
	textcolor(3);
	cprintf("I [] [] [] [] [] []");
	cout<<endl;
	gotoxy(5,10);
	textcolor(3);
	cprintf("H [] [] [] [] [] []");
	cout<<endl;
	gotoxy(5,11);
	textcolor(3);
	cprintf("G [] [] [] [] [] []");
	cout<<endl;
	gotoxy(40,8);
	textcolor(3);
	cprintf("[] [] [] [] [] []");
	cout<<endl;
	gotoxy(40,9);
	textcolor(3);
cprintf("[] [] [] [] [] []");
	cout<<endl;
	gotoxy(40,10);
	textcolor(3);
	cprintf("[] [] [] [] [] []");
	cout<<endl;
	gotoxy(40,11);
	textcolor(3);
	cprintf("[] [] [] [] [] []");
	cout<<endl;
	gotoxy(15,12);
	textcolor(7);
	cprintf("NORMAL(NORMAL) - Rs120");
	gotoxy(5,13);
	textcolor(3);
	cprintf("F [] [] [] [] [] []");
	cout<<endl;
	gotoxy(5,14);
	textcolor(3);
	cprintf("E [] [] [] [] [] []");
	cout<<endl;
	gotoxy(5,15);
	textcolor(3);
	cprintf("D [] [] [] [] [] []");
	cout<<endl;
	gotoxy(5,16);
	textcolor(3);
	cprintf("C [] [] [] [] [] []");
	cout<<endl;
	gotoxy(5,17);
	textcolor(3);
	cprintf("B [] [] [] [] [] []");
	cout<<endl;
	gotoxy(5,18);
	textcolor(3);
	cprintf("A [] [] [] [] [] []");
	cout<<endl;
	gotoxy(40,13);
	textcolor(3);
	cprintf("[] [] [] [] [] []");
	cout<<endl;
	gotoxy(40,14);
	textcolor(3);
	cprintf("[] [] [] [] [] []");
	cout<<endl;
	gotoxy(40,15);
	textcolor(3);
	cprintf("[] [] [] [] [] []");
	cout<<endl;
	gotoxy(40,16);
	textcolor(3);
	cprintf("[] [] [] [] [] []");
	cout<<endl;
	gotoxy(40,17);
	textcolor(3);
	cprintf("[] [] [] [] [] []");
	cout<<endl;
	gotoxy(40,18);
	textcolor(3);
	cprintf("[] [] [] [] [] []");
	cout<<endl;
	textcolor(BROWN);
	again:;
	textcolor(3);
	cprintf("Enter the type:  ");
	gets(M.type);
	textcolor(3);
	cprintf("Enter the row and column ");
	cin>>temp.row>>temp.col;
	cout<<endl;
	if(!isSeatAvailable(temp))
	{
	textcolor(2);
	cprintf("Sorry this seat is already booked TRY AGAIN");
	cout<<endl;
	goto again;
	}
	M.calc();
	 seat[totalNoOfSeats++]=temp;
}       clrscr();
	textcolor(3);
	cprintf("Total amount is: ");
	cout<<M.amt;
	cout<<endl;
	fout.open("movies",ios::binary);
	fout.write((char*)&M,sizeof(M));
	fout.close();
	}
	void trans()
	{char cpass[15];
	char ch;
	char credit[20];
	gotoxy(2,8);
	textcolor(7);
	cprintf("TRANSACTION AREA");
	cout<<endl;
	textcolor(3);
	cprintf("Do you want to proceed to checkout??(y/n):");
	cin>>ch;
	cout<<endl;
	if(ch=='y'||ch=='Y')
	{
	textcolor(3);
	cprintf("Enter your credit card no:");
	gets(credit);
	cout<<endl;
	start:;
	textcolor(3);
	cprintf("Enter your password again  please:");
	getpass(cpass);
	cout<<endl;
		if(strcmp(cpass,"ardra")==0)
	{
	 textcolor(3);
	 cprintf("Total amount deducted from your account is:");
	 cout<<M.amt<<endl;
	 }
	 else
	 {
	  if(strcmp(M.password,cpass)==0)
	{
	 textcolor(3);
	 cprintf("Total amount deducted from your account is:");
	 cout<<M.amt<<endl;
	 }
	 else
	 { if(strcmp(M.password,cpass)!=0)
	  {textcolor(2);
	 cprintf("Invalid password... TRY AGAIN");
	 cout<<endl;
	 goto start;
	}	}	 }	 }
else
	 {if(ch=='n'||ch=='N')
	 {textcolor(2);
	 cprintf("exiting...");
	 cout<<endl;
	 }
	 delay(1000);
	 exit(0);
	 }	 }
void sel_1(int n)
  {clrscr();
  int x;
   do
   {
   x=sdate(n);
   }while(x==1);
   }
   void sel_2()
  {clrscr();
  int x;
   do
   {
  x=scinema();
  }while(x==1);
  }
  void sel_3()
  {clrscr();
  sseats();
  }
  void sel_4()
  {clrscr();
  bseats();
  }
  void sel_5()
  {clrscr();
  trans();
  }
 void getmovie(int n)
 {
  clrscr();
  sel_1(n);
  sel_2();
  sel_3();
  sel_4();
  sel_5();

  fout.open("movies",ios::binary);
	fout.write((char*)&M,sizeof(M));
	fout.close();

}
	int englishcheck()
	{ clrscr();
	  switch(M.show)
	  {
		case 1:{
			 if((strcmpi(M.n,"wonder women")==0)&&(M.get==1))
			  return 0;
			  else
			  if((strcmpi(M.n,"spiderman:homecomming")==0)&&(M.get==2))
			  return 0;
			  else
			  if((strcmpi(M.n,"gifted")==0)&&(M.get==5))
			  return 0;
			  else
			  if((strcmpi(M.n,"kingsman:the golden circle")==0)&&(M.get==4))
			  return 0;
			  else
			  if((strcmpi(M.n,"baywatch")==0)&&(M.get==3))
			  return 0;
			  else
			  {textcolor(2);
			  cprintf("No such movie is there in the list...try again");
			  cout<<endl;
			  return 1;
			  }
			  }

	  case 2:{
			 if((strcmpi(M.n,"wonder women")==0)&&(M.get==1))
			  return 0;
			  else
			  if((strcmpi(M.n,"spiderman:homecomming")==0)&&(M.get==2))
			  return 0;

			  else
			  if((strcmpi(M.n,"gifted")==0)&&(M.get==5))
			  return 0;

			  else
			  if((strcmpi(M.n,"kingsman:the golden circle")==0)&&(M.get==4))
			  return 0;
			  else
			  if((strcmpi(M.n,"baywatch")==0)&&(M.get==3))
			  return 0;
			  else
			  {textcolor(2);
			  cprintf("No such movie is there in the list...try again");
			  return 1;
			  }
			  }

	  default: {textcolor(2);
			cprintf("Sorry there is no such show ...try again");
			cout<<endl;
			return 1 ;
			}		}	}
	int hindicheck()
	{
	  clrscr();
	  switch(M.show)
	  {
		case 1:{
			 if((strcmpi(M.n,"munna micheal")==0)&&(M.get==3) )
			  return 0;
			  else
			  if((strcmpi(M.n,"mubharakhan")==0)&&(M.get==1) )
			  return 0;
			  else
			  if((strcmpi(M.n,"tubelight")==0)&&(M.get==2) )
			  return 0;
			  else
			  if((strcmpi(M.n,"jagga jasoos")==0)&&(M.get==4) )
			  return 0;
			  else
			  if((strcmpi(M.n,"simran")==0)&&(M.get==5))
			  return 0;
			  else
			  {textcolor(2);
			  cprintf("No such movie is there in the list...try again");
			  cout<<endl;
			  return 1;
			  }		  }

	  case 2:{
			 if((strcmpi(M.n,"munna micheal")==0)&&(M.get==3))
			  return 0;
			  else
			  if((strcmpi(M.n,"mubharakhan")==0)&&(M.get==1))
			  return 0;
			  else
			  if((strcmpi(M.n,"tubelight")==0)&&(M.get==2))
			  return 0;
			  else
			  if((strcmpi(M.n,"jagga jasoos")==0)&&(M.get==4))
			  return 0;
			  else
			  if((strcmpi(M.n,"simran")==0)&&(M.get==5) )
			  return 0;
			  else
			  {textcolor(2);
			  cprintf("No such movie is there in the list...try again");
			  return 1;
			  }
			  }

	  default: {textcolor(2);
			cprintf("Sorry there is no such show ...try again");
			cout<<endl;
			return 1;
			}		}	}
		int tamilcheck()
	 {  clrscr();
	  switch(M.show)
	  {
		case 1:{
			 if((strcmpi(M.n,"vip 2")==0)&&(M.get==5))
			  return 0;
			  else
			  if((strcmpi(M.n,"dora")==0)&&(M.get==2))
			  return 0;
			  else
			  if((strcmpi(M.n,"vikram vedha")==0)&&(M.get==4))
			  return 0;
			  else
			  if((strcmpi(M.n,"baahubali 2:the conclusion")==0)&&(M.get==1))
			  return 0;
			  else
			  if((strcmpi(M.n,"kaatru velyidai")==0)&&(M.get==3))
			  return 0;
			  else
			  {textcolor(2);
			  cprintf("No such movie is there in the list...try again");
			  cout<<endl;
			  return 1;
			  } }
	  case 2:{
			 if((strcmpi(M.n,"vip 2")==0)&&(M.get==5))
			  return 0;
			  else
			  if((strcmpi(M.n,"dora")==0)&&(M.get==1))
			  return 0;
			  else
			  if((strcmpi(M.n,"bahubali 2:the conclusion")==0)&&(M.get==2))
			  return 0;
			  else
			  if((strcmpi(M.n,"kaatru velyidai")==0)&&(M.get==3))
			  return 0;
			  else
			  if((strcmpi(M.n,"vikram vedha")==0)&&(M.get==4))
			  return 0;
			  else
			  {textcolor(2);
			  cprintf("No such movie is there in the list...try again");
			  cout<<endl;
			  return 1;
			  }
			  }

	  default: {textcolor(2);
			cprintf("Sorry there is no such show ...try again");
			cout<<endl;
			return 1;
			}	}}
	int telungucheck()
	{ clrscr();
	  switch(M.show)
	  {
		case 1:{
			 if((strcmpi(M.n,"NENE RAJU NENE MANTRI")==0)&&(M.get==1))
			  return 0;
			  else
			  if((strcmpi(M.n,"NAKSHATRAM")==0)&&(M.get==2))
			  return 0;
			  else
			  if((strcmpi(M.n,"FIDAA")==0)&&(M.get==4))
			  return 0;
			  else
			  if((strcmpi(M.n,"NENU LOCAL")==0)&&(M.get==3))
			  return 0;
			  else
			  if((strcmpi(M.n,"YAAR IVAN")==0)&&(M.get==5))
			  return 0;
			  else
			  {textcolor(2);
			  cprintf("No such movie is there in the list...try again");
			  cout<<endl;
			  return 1;
			  }		  }

	  case 2 :{
			 if((strcmpi(M.n,"NENE RAJU NENE MANTRI")==0)&&(M.get==1))
			  return 0;
			  else
			  if((strcmpi(M.n,"NAKSHATRAM")==0)&&(M.get==2))
			  return 0;
			  else
			  if((strcmpi(M.n,"FIDAA")==0)&&(M.get==4))
		     return 0;
		     else
		     if((strcmpi(M.n,"NENU LOCAL")==0)&&(M.get==3))
		     return 0;
		     else
		     if((strcmpi(M.n,"YAAR IVAN")==0)&&(M.get==5))
		     return 0;
		     else
		     {textcolor(2);
		     cprintf("No such movie is there in the list...try again");
		     cout<<endl;
		     return 1;
		     }}

	  default: {textcolor(2);
		   cprintf("Sorry there is no such show ...try again");
		   cout<<endl;
		   return 1;
		   }}}
	int malayalamcheck()
	{  clrscr();
	  switch(M.show)
	  {
	   case 1:{
		    if((strcmpi(M.n,"parava")==0)&&(M.get==1))
		     return 0;
		     else
		     if((strcmpi(M.n,"THONDIMUTHALUM DRIKSAKSHIYUM")==0)&&(M.get==2))
		     return 0;
		     else
		     if((strcmpi(M.n,"adam joan")==0)&&(M.get==3))
		     return 0;
		     else
		     if((strcmpi(M.n,"VELIPADINTE PUSTHAKAM")==0)&&(M.get==4))
		     return 0;
		     else
		     if((strcmpi(M.n,"NJANDUKALUDE NATTIL ORIDAVELA")==0)&&(M.get==5))
		     return 0;
		     else
		     {textcolor(2);
		     cprintf("No such movie is there in the list...try again");
		     cout<<endl;
		     return 1;
		     }}

	  case 2:{
		    if((strcmpi(M.n,"THONDIMUTHALUM DRIKSAKSHIYUM")==0)&&(M.get==2))
		     return 0;
		     else
		     if((strcmpi(M.n,"adam joan")==0)&&(M.get==3))
		     return 0;
		     else
		     if((strcmpi(M.n,"VELIPADINTE PUSTHAKAM")==0)&&(M.get==4))
		     return 0;
		     else
		     if((strcmpi(M.n,"NJANDUKALUDE NATTIL ORIDAVELA")==0)&&(M.get==5))
		     return 0;
		     else
		     if((strcmpi(M.n,"parava")==0)&&(M.get==1))
		     return 0;
		     else
		     {textcolor(2);
		     cprintf("No such movie is there in the list...try again");
		     cout<<endl;
		     return 1;
		     }}
	  default: {textcolor(2);
		   cprintf("Sorry there is no such show ...try again");
		   cout<<endl;
		   return 1;
		   }
		   }}
 void english()
	 {  clrscr();
	 int x;
	 do
	 {
	 gotoxy(10,3);
	textcolor(7);
	cprintf("\t\t\tSELECT MOVIE\t\t\t");
	cout<<endl;
	gotoxy(2,7);
	textcolor(7);
	cprintf("MOVIE NAME");
	cout<<endl;
	gotoxy(45,7);
	textcolor(7);
	cprintf("SHOW 1");
	cout<<endl;
	gotoxy(60,7);
	textcolor(7);
	cprintf("SHOW 2");
	cout<<endl;
	gotoxy(2,9);
	textcolor(3);
	cprintf("1.WONDER WOMEN");
	cout<<endl;
	gotoxy(45,9);
	textcolor(3);
	cprintf("10:30 AM");
	cout<<endl;
	gotoxy(60,9) ;
	textcolor(3);
	cprintf("2:15 PM");
	cout<<endl;
	gotoxy(2,11);
	textcolor(3);
	cprintf("2.SPIDERMAN:HOMECOMMING");
	cout<<endl;
	gotoxy(45,11);
	textcolor(3);
	cprintf("09:30 AM");
	cout<<endl;
	gotoxy(60,11) ;
	textcolor(3);
	cprintf("1:15 PM");
	cout<<endl;
	gotoxy(2,13);
	textcolor(3);
	cprintf("3.BAYWATCH");
	cout<<endl;
	gotoxy(45,13) ;
	textcolor(3);
	cprintf("11:30 AM");
	cout<<endl;
	gotoxy(60,13) ;
	textcolor(3);
	cprintf("3:30 PM");
	cout<<endl;
	gotoxy(2,15);
	textcolor(3);
	cprintf("4.KINGSMAN:THE GOLDEN CIRCLE");
	cout<<endl;
	gotoxy(45,15) ;
	textcolor(3);
	cprintf("10:30 AM");
	cout<<endl;
	gotoxy(60,15) ;
	textcolor(3);
	cprintf("1:30 PM");
	cout<<endl;
	gotoxy(2,17);
	textcolor(3);
	cprintf("5.GIFFTED");
	cout<<endl;
	gotoxy(45,17) ;
	textcolor(3);
	cprintf("01:30 PM");
	cout<<endl;
	gotoxy(60,17) ;
	textcolor(3);
	cprintf("4:00 PM");
	cout<<endl;
	gotoxy(2,19);
	textcolor(3);
	cprintf("\n-> Movie no:");
	cin>>M.get;
	cout<<endl;
	textcolor(3);
	cprintf("\n-> Movie Name:");
	gets(M.n);
	cout<<endl;
	textcolor(3);
	cprintf("\n-> Show no:");
	cin>>M.show;
       x=englishcheck();
	}while(x==1);
	getmovie(M.get);
	fout.open("movies",ios::binary);
	fout.write((char*)&M,sizeof(M));
	fout.close();
	}


 void hindi()
	{
		 clrscr();

	 int x;
	 do
	 {
	gotoxy(10,3);
	textcolor(7);
	cprintf("\t\t\tSELECT MOVIE\t\t\t");
	cout<<endl;
	gotoxy(2,7);
	textcolor(7);
	cprintf("MOVIE NAME");
	cout<<endl;
	gotoxy(45,7);
	textcolor(7);
	cprintf("SHOW 1");
	cout<<endl;
	gotoxy(60,7);
	textcolor(7);
	cprintf("SHOW 2");
	cout<<endl;
	gotoxy(2,9);
	textcolor(3);
	cprintf("1.MUBHARAKHAN");
	cout<<endl;
	gotoxy(45,9) ;
	textcolor(3);
	cprintf("10:30 AM");
	cout<<endl;
	gotoxy(60,9) ;
	textcolor(3);
	cprintf("4:00 PM");
	cout<<endl;
	gotoxy(2,11);
	textcolor(3);
	cprintf("2.TUBELIGHT");
	cout<<endl;
	gotoxy(45,11) ;
	textcolor(3);
	cprintf("10:30 AM");
	cout<<endl;
	gotoxy(60,11) ;
	textcolor(3);
	cprintf("4:00 PM");
	cout<<endl;
	gotoxy(2,13);
	textcolor(3);
	cprintf("3.MUNNA MICHEAL");
	cout<<endl;
	gotoxy(45,13) ;
	textcolor(3);
	cprintf("10:30 AM");
	cout<<endl;
	gotoxy(60,13) ;
	textcolor(3);
	cprintf("4:00 PM");
	cout<<endl;
	gotoxy(2,15);
	textcolor(3);
	cprintf("4.JAGGA JASOOS");
	cout<<endl;
	gotoxy(45,15) ;
	textcolor(3);
	cprintf("10:30 AM");
	cout<<endl;
	gotoxy(60,15) ;
	textcolor(3);
	cprintf("4:00 PM");
	cout<<endl;
	gotoxy(2,17);
	textcolor(3);
	cprintf("5.SIMRAN");
	cout<<endl;
	gotoxy(45,17) ;
	textcolor(3);
	cprintf("10:30 AM");
	cout<<endl;
	gotoxy(60,17) ;
	textcolor(3);
	cprintf("4:00 PM");
	cout<<endl;
	gotoxy(2,19 );
	textcolor(3);
	cprintf("\n-> Movie no:");
	cin>>M.get;
	cout<<endl;
	textcolor(3);
	cprintf("\n-> Movie Name:");
	gets(M.n);
	cout<<endl;
	textcolor(3);
	cprintf("\n-> Show no:");
	cin>>M.show;
	x=hindicheck();
	  }while(x==1);
	  getmovie(M.get);
	 fout.open("movies",ios::binary);
	fout.write((char*)&M,sizeof(M));
	fout.close(); }

 void tamil()
	  {
	  clrscr();

	  int x;
	  do
	  {
	  gotoxy(10,3);
	textcolor(7);
	cprintf("\t\t\tSELECT MOVIE\t\t\t");
	cout<<endl;
	gotoxy(2,7);
	textcolor(7);
	cprintf("MOVIE NAME");
	cout<<endl;
	gotoxy(45,7);
	textcolor(7);
	cprintf("SHOW 1");
	cout<<endl;
	gotoxy(60,7);
	textcolor(7);
	cprintf("SHOW 2");
	cout<<endl;
	gotoxy(2,9);
	textcolor(3);
	cprintf("1.BAHUBALI 2:THE CONCLUSION");
	cout<<endl;
	gotoxy(45,9) ;
	textcolor(3);
	cprintf("10:30 AM");
	cout<<endl;
	gotoxy(60,9) ;
	textcolor(3);
	cprintf("4:00 PM");
	cout<<endl;
	gotoxy(2,11);
	textcolor(3);
	cprintf("2.DORA");
	cout<<endl;
	gotoxy(45,11) ;
	textcolor(3);
	cprintf("10:30 AM");
	cout<<endl;
	gotoxy(60,11) ;
	textcolor(3);
	cprintf("4:00 PM");
	cout<<endl;
	gotoxy(2,13);
	textcolor(3);
	cprintf("3.KAATRU VELYIDAI");
	cout<<endl;
	gotoxy(45,13) ;
	textcolor(3);
	cprintf("10:30 AM");
	cout<<endl;
	gotoxy(60,13) ;
	textcolor(3);
	cprintf("4:00 PM");
	cout<<endl;
	gotoxy(2,15);
	textcolor(3);
	cprintf("4.VIKRAM VEDHA");
	cout<<endl;
	gotoxy(45,15) ;
	textcolor(3);
	cprintf("10:30 AM");
	cout<<endl;
	gotoxy(60,15) ;
	textcolor(3);
	cprintf("4:00 PM");
	cout<<endl;
	gotoxy(2,17);
	textcolor(3);
	cprintf("5.VIP 2");
	cout<<endl;
	gotoxy(45,17) ;
	textcolor(3);
	cprintf("10:30 AM");
	cout<<endl;
	gotoxy(60,17) ;
	textcolor(3);
	cprintf("4:00 PM");
	cout<<endl;
	gotoxy(2,19);
	textcolor(3);
	cprintf("\n-> Movie no:");
	cin>>M.get;
	cout<<endl;
	textcolor(3);
	cprintf("\n-> Movie Name:");
	gets(M.n);
	cout<<endl;
	textcolor(3);
	cprintf("\n-> Show no:");
	cin>>M.show;
	 x=tamilcheck();
	}while(x==1);
	 getmovie(M.get);
	 fout.open("movies",ios::binary);
	fout.write((char*)&M,sizeof(M));
	fout.close();
	 }



	  void telungu()
	 {  clrscr();
	 int x;

	 do
	 {
	 gotoxy(10,3);
	textcolor(7);
	cprintf("\t\t\tSELECT MOVIE\t\t\t");
	cout<<endl;
	gotoxy(2,7);
	textcolor(7);
	cprintf("MOVIE NAME");
	cout<<endl;
	gotoxy(45,7);
	textcolor(7);
	cprintf("SHOW 1");
	cout<<endl;
	gotoxy(60,7);
	textcolor(7);
	cprintf("SHOW 2");
	cout<<endl;
	gotoxy(2,9);
	textcolor(3);
	cprintf("1.NENE RAJU NENE MANTRI");
	cout<<endl;
	gotoxy(45,9) ;
	textcolor(3);
	cprintf("10:30 AM");
	cout<<endl;
	gotoxy(60,9) ;
	textcolor(3);
	cprintf("4:00 PM");
	cout<<endl;
	gotoxy(2,11);
	textcolor(3);
	cprintf("2.NAKSHATRAM");
	cout<<endl;
	gotoxy(45,11) ;
	textcolor(3);
	cprintf("10:30 AM");
	cout<<endl;
	gotoxy(60,11) ;
	textcolor(3);
	cprintf("4:00 PM");
	cout<<endl;
	gotoxy(2,13);
	textcolor(3);
	cprintf("3.NENU LOCAL");
	cout<<endl;
	gotoxy(45,13) ;
	textcolor(3);
	cprintf("10:30 AM");
	cout<<endl;
	gotoxy(60,13) ;
	textcolor(3);
	cprintf("4:00 PM");
	cout<<endl;
	gotoxy(2,15);
	textcolor(3);
	cprintf("4.FIDAA");
	cout<<endl;
	gotoxy(45,15) ;
	textcolor(3);
	cprintf("10:30 AM");
	cout<<endl;
	gotoxy(60,15) ;
	textcolor(3);
	cprintf("4:00 PM");
	cout<<endl;
	gotoxy(2,17);
	textcolor(3);
	cprintf("5.YAAR IVAN");
	cout<<endl;
	gotoxy(45,17) ;
	textcolor(3);
	cprintf("10:30 AM");
	cout<<endl;
	gotoxy(60,17) ;
	textcolor(3);
	cprintf("4:00 PM");
	cout<<endl;
	gotoxy(2,19);
	textcolor(3);
	cprintf("\n-> Movie no:");
	cin>>M.get;
	cout<<endl;
	textcolor(3);
	cprintf("\n-> Movie Name:");
	gets(M.n);
	cout<<endl;
	textcolor(3);
	cprintf("\n-> Show no:");
	cin>>M.show;
	 x=telungucheck();

	 }while(x==1);
	 getmovie(M.get);
	 fout.open("movies",ios::binary);
	fout.write((char*)&M,sizeof(M));
	fout.close();
	 }

	void malayalam()
	 {  clrscr();
	 int x;

	   do
	   {
	gotoxy (10, 3);
	textcolor (7);
	cprintf("\t\t\select MOVIE\t\t\t");
	cout<<endl;
	gotoxy(2,7);
	textcolor(7);
	cprintf("MOVIE NAME");
	cout<<endl;
	gotoxy(45,7);
	textcolor(7);
	cprintf("SHOW 1");
	cout<<endl;
	gotoxy(60,7);
	textcolor(7);
	cprintf("SHOW 2");
	cout<<endl;
	gotoxy(2,9);
	textcolor(3);
	cprintf("1.PARAVA");
	cout<<endl;
	gotoxy(45,9) ;
	textcolor(3);
	cprintf("10:30 AM");
	cout<<endl;
	gotoxy(60,9) ;
	textcolor(3);
	cprintf("4:00 PM");
	cout<<endl;
	gotoxy(2,11);
	textcolor(3);
	cprintf("2.THONDIMUTHALUM DRIKSAKSHIYUM");
	cout<<endl;
	gotoxy(45,11) ;
	textcolor(3);
	cprintf("10:30 AM");
	cout<<endl;
	gotoxy(60,11) ;
	textcolor(3);
	cprintf("4:00 PM");
	cout<<endl;
	gotoxy(2,13);
	textcolor(3);
	cprintf("3.ADAM JOAN");
	cout<<endl;
	gotoxy(45,13) ;
	textcolor(3);
	cprintf("10:30 AM");
	cout<<endl;
	gotoxy(60,13) ;
	textcolor(3);
	cprintf("4:00 PM");
	cout<<endl;
	gotoxy(2,15);
	textcolor(3);
	cprintf("4.VELIPADINTE PUSTHAKAM");
	cout<<endl;
	gotoxy(45,15) ;
	textcolor(3);
	cprintf("10:30 AM");
	cout<<endl;
	gotoxy(60,15) ;
	textcolor(3);
	cprintf("4:00 PM");
	cout<<endl;
	gotoxy(2,17);
	textcolor(3);
	cprintf("5.NJANDUKALUDE NATTIL ORIDAVELA");
	cout<<endl;
	gotoxy(45,17) ;
	textcolor(3);
	cprintf("10:30 AM");
	cout<<endl;
	gotoxy(60,17) ;
	textcolor(3);
	cprintf("4:00 PM");
	cout<<endl;
	gotoxy(2,19);
	textcolor(3);
	cprintf("\n-> Movie no:");
	cin>>M.get;
	cout<<endl;
	textcolor(3);
	cprintf("\n-> Movie Name:");
	gets(M.n);
	cout<<endl;
	textcolor(3);
	cprintf("\n-> Show no:");
	cin>>M.show;
	x= malayalamcheck();
	}while(x==1);
	getmovie(M.get);
	fout.open("movies",ios::binary);
	fout.write((char*)&M,sizeof(M));
	fout.close();
	}
void menu()
	  {  char ch;
	  textcolor(7);
	  cprintf("____PREVIEW____");
	  cout<<endl;
		textcolor(3);
		cprintf("1.Selelct Language");
		cout<<endl;
		textcolor(3);
		cprintf("2.Select Movie");
		cout<<endl;
		textcolor(3);
		cprintf("3.Select Date");
		cout<<endl;
		textcolor(3);
		cprintf("4.Select Cinemax");
		cout<<endl;
		textcolor(3);
		cprintf("5.No: of seats");
		cout<<endl;
		
}
	char cover()
	 {
	 clrscr();
		char ch;
		textcolor(BLINK+3);
		cprintf("* * *   * * *   * * *   *   *  " );
		cout<<endl;
		textcolor(BLINK+3);
		cprintf("*    * *     * *     *  *  *   " );
		cout<<endl;
		textcolor(BLINK+3);
		cprintf("* * *  *     * *     *  * *     ");
		cout<<endl;
		textcolor(BLINK+3);
		cprintf("*    * *     * *     *  *   *   ");
		cout<<endl;
		textcolor(BLINK+3);
		cprintf("* * *   * * *   * * *   *    *  ");
		cout<<endl;
		cout<<endl;
		textcolor(BLINK+3);
		cprintf("               *     *  *     *      ");
		cout<<endl;
		textcolor(BLINK+3);
		cprintf("               *  *  *   *   *       ");
		cout<<endl;
		textcolor(BLINK+3);
		cprintf("               *  *  *    * *        ");
		cout<<endl;
		textcolor(BLINK+3);
		cprintf("               *     *     *        ");
		cout<<endl;
		textcolor(BLINK+3);
		cprintf("               *     *     *        ");
		cout<<endl;

		textcolor(BLINK+3);
		cprintf("                     * *  *     *   * * *   *     * ");
		cout<<endl;
		textcolor(BLINK+3);
		cprintf("                    *     *     *  *     *  *     * ");
		cout<<endl;
		textcolor(BLINK+3);
		cprintf("                      *   * * * *  *     *  *  *  * ");
		cout<<endl;
		textcolor(BLINK+3);
		cprintf("                       *  *     *  *     *  * * * * ");
		cout<<endl;
		textcolor(BLINK+3);
		cprintf("                    * *   *     *   * * *   *     * ");
		cout<<endl;
		menu();
		textcolor(7);
		cprintf("Do you want to proceed(y/n):");
		cin>>ch;

		return ch;

	  }

 void lang()
{ clrscr();
	again:
	int x=M.getlang();

	 if(x==1)
	  english();
	 else
		 {
		 if(x==2)
		 hindi();
	  else
		 {
	if(x==3)
	 tamil();
	 else
	 {
	  if(x==4)
	  malayalam();
		 else
	{
	if(x==5)
	 telungu();
	 else
	 {if(x>5)
	 {textcolor(2);
	  cprintf("Sorry invalid choice try again....");
	  cout<<endl;
	  delay(1000);
	  goto again;
	  }
	 }}}}}}
void check1()
{
	clrscr();
	fout.open("movies",ios::binary);
	if(!fout)
	{	textcolor(GREEN);
		cprintf("file not created");
		cout<<endl;
	}
	fout.write((char*)&M,sizeof(M));
	fout.close();
	char ch;
	char pass[20];
	gotoxy(10,10);
	textcolor(3);
	cprintf("Do you have an account(y/n)?");
	cout<<endl;
	cin>>ch;
	if(ch=='y'||ch=='Y')
	{ clrscr();
	fin.open("movies",ios::binary);
	gotoxy(50,5);
	textcolor(2);
	cprintf("password :ardra");
	cout<<endl;
	gotoxy(5,10);
	textcolor(3);
	cprintf("enter your password(you can enter only one time)");
	cout<<endl;
	getpass(pass);
	while(fin.read((char*)&M,sizeof(M)))
{
if(strcmpi(pass,M.password)==0)
{	lang();
	fin.close();
}
else
 {	 M.getinfo();
	 lang();
 }}}
else
{	if(ch=='n'||ch=='N')
{
	clrscr();
	M.getinfo();
	lang();
}}
getch();
}
void main()
{	clrscr();
	int f=0;
	char c;
	do
{	 c=cover();
		if(c=='n'||c=='N')
		exit(0);
		else
	if(c=='Y'||c=='y')
	{	check1();
		clrscr();
		gotoxy(5,13);
		textcolor(7);
		cprintf("Do you want to continue??(y/n)");
		cout<<endl;
		char x;
		cin>>x;
	if(x=='y'||x=='Y')
	 f=1;
 else
 if(x=='n'||x=='N')
  {	fout.open("movies",ios::binary);
	fout.write((char*)&M,sizeof(M));
	fout.close();
	if(f!=1)
	display();
}}
	}while(f==1);
getch();
}
