#include <iostream>

using namespace std;
class AccountHolder
{
public:
    int cho=0,l=1,pass,cha,upa,dp=0,wt=0,tf=0,x=0,cb=0+dp,z=1;
    string name,lname,mname,aname,usname,usrname;

    AccountHolder()
    {
    pass=0,cha=0,dp=0,wt=0,tf=0,x=0,cb=0;
    name="";
    usname="";
    usrname="";
    }
    void Acctype()
{
    cout<<"Select Account Type"<<endl;
    cout<<"1.Saving Account\n2.Current Account\n3.Back to main menu"<<endl;
    cout<<"Your Choice:";
    cin>>cho;
    if (cho)
    {
    switch(cho)
    {
    case 1:cout<<"Saving Account...ok"<<endl;
    break;
    case 2:cout<<"Current Account...ok"<<endl;
    break;
    case 3:"";

    cho=0;
    break;
    }
    }
    else cout<<" "<<endl;
    cout<<"Create UserName:";
    cin>>usname;
    cout<<"Create a Strong Password:";
    cin>>pass;
    cout<<"Account Created Successfully"<<endl;
    cout<<"THANKYOU!!!..."<<endl;
}


void createAcc()
{
    cout<<"Enter Your First Name Please!:";
    cin>>name;cout<<"Ok..."<<endl;
    cout<<"Enter Your Last Name Please!:";
    cin>>lname;cout<<"Ok..."<<endl;
    cout<<"Enter Your Mother Name Please!:";
    cin>>mname;cout<<"Ok..."<<endl;
    cout<<"Enter Your Address Please!:";
    cin>>aname;
    cout<<"Ok..."<<endl;
    Acctype();
}

int checkusr(string usrname)
{
    if(usrname==usname)
    {
        return 1;
    }
    else
    {
        0;
    }
}

int loginAcc(string uname,int upass)
{
   if(uname==usname&&upass==pass)
   {
       return 1;
   }
   else
   {
       return 0;
   }
}
string menuAcc()
{

    cout<<"Welcome:"<<usname<<"!!!"<<endl;
    while(z){
    cout<<"1.Check Balance\n2.Deposit Balance\n3.Withdrawal Cash\n4.Transfer Money\n5.Account Information\n6.Update Informaion\n0.Exit"<<endl;
    cout<<"Choice:";
    cin>>cha;


    switch(cha)
{
    case 1:cout<<"----Balance Dashboard-----"<<endl;
           cout<<"Sr.no-  Transaction    Amount "<<endl;
           cout<<"  1.   Deposit         :"<<dp<<endl;
           cout<<"  2.   Withdrawal      :"<<wt<<endl;
           cout<<"  3.   Transfer to XYZ :"<<tf<<endl;
           cout<<"  ---------------------------------"<<endl;
           cb=0+dp;
           cb=cb-wt;
           cb=cb-tf;
           cout<<"       Account Balance :"<<cb<<endl;
           cout<<"Ok..."<<endl;
           menuAcc();
           return "";
           break;
    case 2:cout<<"------Deposit Cash------"<<endl;
           cout<<"Current Balance :"<<cb<<endl;
           cout<<"Enter the Deposit Amount:";cin>>dp;
           cb=0+dp;
           cout<<"Cash Deposited successfully!!!,your current balance:"<<cb<<endl;
           menuAcc();
           return "";
           break;
    case 3:cout<<"------Withdrawal Cash -----"<<endl;
           cout<<"Current Balance:"<<cb<<endl;
           cout<<"Enter the Withdrawal Amount:";cin>>wt;
           cb=cb-wt;
           if(wt<=cb)
           {
             cout<<"Cash Withdrawal successfully!!!,your current balance:"<<cb<<endl;
           }
           else
           {
               cout<<"insufficient Balance!!!, Please Check your Current balance"<<endl;
           }
           menuAcc();
           return "";
           break;
     case 4:cout<<"-----Transfer Money-----"<<endl;
            cout<<"Current Balance:"<<cb<<endl;
            cout<<"Enter the Amount to be Transfered:";cin>>tf;
            cout<<"Ok,Now Please Enter the UserName of the Account in which you have to Transfered Amount:";cin>>usrname;
            if(wt<=cb)
           {
             cout<<"Money Transfered Successfully!!!";
            cout<<tf<<"Rs is deducted from your Account";
            cb=cb-tf;
            cout<<"Your Current balance:"<<cb<<endl;
           }
           else
           {
               cout<<"insufficient Balance!!!, Please Check your Current balance"<<endl;
           }
            menuAcc();
            return usrname;
            break;
     case 5:cout<<"----Account Information----"<<endl;
            cout<<"First Name:"<<name<<endl;
            cout<<"Last Name :"<<lname<<endl;
            cout<<"Mother Name:"<<mname<<endl;
            cout<<"Address Please:"<<aname<<endl;
            cout<<"Your All Data shown,ThankYou!!!"<<endl;
            cout<<"-------------------------------"<<endl;
            menuAcc();
            return "";
            break;
     case 6:cout<<"----Update Information----"<<endl;
            cout<<"1.User Name\n2.Password\n3.First Name\n4.Last Name\n5.Mother Name\n6.Address"<<endl;
            cout<<"Your Choice:";
            cin>>upa;
            switch(upa)
            {
                case 1:cout<<"Your Account User Name is:"<<usname<<endl;
                cout<<"Do You really want to change it"<<endl;
                cout<<"(Y/N)"<<endl;



            }

     case 0:
         cout<<"----EXIT----"<<endl;
         return "0";
         break;


}
    z=0;
    break;
}



}
};



int main()
{
    int ch=0,l=1,k=0,n=0,f=0,r=0;
    string uname;
    int upass;
    string usrname;


      cout<<"WELCOME To BANK ACCOUNT SYYYSTAAM"<<endl;
      AccountHolder a[30];

      while(l)
      {
      cout<<"1.Create Account"<<endl;
      cout<<"2.Login"<<endl;
      cout<<"3.Exit"<<endl;

      cout<<"Enter Your Choices:";
      cin>>ch;
   switch(ch)
   {
       case 1:cout<<"----Create Account----"<<endl;
       a[k].createAcc();
       k++;
       n=k;
       break;
       case 2:
       cout<<"----Log:in----"<<endl;
       cout<<"Enter User Name: ";
       cin>>uname;
       cout<<"Enter User Password: ";
       cin>>upass;

       for(int i=0;i<n;i++)
       {
          if(a[i].loginAcc(uname,upass))
          {
             usrname= a[i].menuAcc();
            if(usrname!="")
            {
             for(int j=0;j<n;j++)
                {
                    if(a[j].checkusr(usrname))
                        {
                            a[j].cb+=a[i].tf;

                            a[i].cb-=a[i].tf;
                        }
                    else{
                            r++;
                        }
                }

                if(n==r)
                {
                  cout<<"User name and password Not match"<<endl;
                  a[i].tf=0;
                }
                 r=0;


            }
          }
          else{
                f++;
          }
       }



       if(n==f)
       {
         cout<<"User name and password Not match"<<endl;
       }
       f=0;
       break;
       case 3:cout<<"----EXIT----"<<endl;
              cout<<"----ThankYou For Using Om Bank of India----"<<endl;
       l=0;
       break;
   }
}

    return 0;
}
