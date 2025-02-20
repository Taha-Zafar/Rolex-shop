#include<iostream>
using namespace std;
int main()
{
	
	cout<<"\t\t\t			 Welcome to (ROLEX WATCHES)! \n Are you looking for a new  watch "<<endl;
	string Gender, a;
	cout<<" (yes or no)"<<endl;
	cin>>a;
	string yes="yes",Yes="Yes",No="No",no="no";
	if((a == no)||(a==No)){
		cout<<"ok thank you for visiting us"<<endl;
	}
	if (a == yes ){	
	cout<<"ARE YOU A MALE OR FEMALE"<<endl;
	cin>>Gender;
	string male="male",m="m",M="M";
	string female="female",f="f",F="F";
	if ((Gender == male )|| (Gender == m) || (Gender == M)){
			int watch;
		cout<<"These are some good watches for you sir! \n 1. Datejust \n 2. Rolex GMT-Master \n 3. Cosmograph Daytona\n 4. Sky-dweller\n Choose your watch number sir!"<<endl;
		cin>>watch;
			string responce;
		switch(watch){
		
		   case 1:
		   {
			cout<<" Its $16,000 sir!\n DO you want it sir!"<<endl;
			cin>> responce;
			string yes="yes";
			if (responce == yes){
				cout<<"congratulaion sir! you got a new watch from ROLEX"<<endl;
			}else{
			cout<<"its fine sir may be next time"<<endl;
		}
			 break;
		}
	    	   case 2:
	    		{
			cout<<" Its  $104,000  sir!\n Do you want it sir!"<<endl;
			cin>>responce;
			if (responce == yes){
				cout<<"congratulaion sir! you got a new watch from ROLEX"<<endl;
			}else{
			cout<<"its fine sir may be next time"<<endl;
			 }break;
		}
         	case 3:
		{

			cout<<" Its  $10,000  sir!\n Do you want it sir!"<<endl;
			cin>>responce;
			if (responce == yes){
				cout<<"congratulaion sir! you got a new watch from ROLEX"<<endl;
			}else{
			
			cout<<"its fine sir may be next time"<<endl;
		    }	break;
				
		}
			case 4:
				{
				
			cout<<" Its  $14,000  sir!\n Do you want it sir!"<<endl;
			cin>>responce;
			if (responce == yes){
				cout<<"congratulaion sir! you got a new watch from ROLEX"<<endl;
			}else{
			
			cout<<"its fine sir may be next time"<<endl;
			}break;
		}default :
		cout<<"invalid choice"<<endl;
	}}
	int watch;
	if ((Gender == female )|| (Gender == f) || (Gender == F)){
			
		cout<<"These are some good watches for you MADAM! \n 1. Date Ladies. \n 2. Ladies Rolex Oyster Perpetual. \n 3. Pearlmaster.\n 4. Rolex Cellini Ladies\n Choose your watch number sir!"<<endl;
		cin>>watch;
			string responce;
		switch(watch){
		
		   case 1:
		   {
			cout<<" Its $16,000 Madam!\n DO you want it Madam!"<<endl;
			cin>> responce;
			string yes="yes";
			if (responce == yes){
				cout<<"congratulaion Madam! you got a new watch from ROLEX"<<endl;
			}else{
			cout<<"its fine Madam may be next time"<<endl;
		}
			 break;
		}
	    	   case 2:
	    		{
			
			cout<<" Its  $104,000  Madam!\n Do you want it Madam!"<<endl;
			cin>>responce;
			if (responce == yes){
				cout<<"congratulaion Madam! you got a new watch from ROLEX"<<endl;
			}else{
			cout<<"its fine Madam may be next time"<<endl;
			 }break;
		}
         	case 3:
		{
			
			cout<<" Its  $10,000  Madam!\n Do you want it Madam!"<<endl;
			cin>>responce;
			if (responce == yes){
				cout<<"congratulaion Madam! you got a new watch from ROLEX"<<endl;
			}else{
			
			cout<<"its fine Madam may be next time"<<endl;
		    }	break;
				
		}
			case 4:
				{
				
		
			cout<<" Its  $14,000  Madam!\n Do you want it Madam!"<<endl;
			cin>>responce;
			if (responce == yes){
				cout<<"congratulaion Madam! you got a new watch from ROLEX"<<endl;
			}else{
			
			cout<<"its fine madam may be next time"<<endl;
			}break;
		}default :
		cout<<"invalid choice "<<endl;
	}
	
	}
	
	cout<<"Please feel free if you have any Query or you want to get more information please click on the below link"<<endl;
	cout<<"https://chat.whatsapp.com/CjHT2fCVuuG0TfJ0lQmAt4";
}
}

        

