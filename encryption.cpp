#include<iostream>
#include<string.h>
using namespace std;

struct encrypt{
    char encrypt[200];
    char decrypt[200];
    int key;
    char msg[200];
};

int main()
{
    string username,password;
    string uname="navpreet1717",pword="encryptDecrypt";
    struct encrypt enc;
    char ch;
    int op;

    cout<<endl;
    cout<<"\t Please Log in to use features"<<endl;
    cout<<endl;
    cout<<"Enter Username: ";
    cin>>username;
    cout<<"Enter Password: ";
    cin>>password;
    cout<<endl;

    if(username.compare(uname)==0 && password.compare(pword)==0)
    {
        cout<<"Welcome to Message Encryption Application."<<endl;
        
        do{
            cout<<"\nPlease select an option:"<<endl;
            cout<<"\n1. Encrypt a message."<<endl;
            cout<<"\n2. Decrypt a message."<<endl;
            cout<<"\n3. Close the application."<<endl;
            cout<<endl;

            cin>>op;

            switch(op)
            {
                case 1:
                    cout<<"\n Enter the encryption key\n";
                    cin>>enc.key;
                    fflush(stdin);
                    cout<<"\nPlease enter the message that you would like to encrypt:\n"<<endl;
                    cin.get(enc.msg,200);
                    cout<<"\nEncrypted messgae is:\n"<<endl;
                    for(int i=0;i<strlen(enc.msg);i++)
                    {
                        enc.encrypt[i]=enc.msg[i]+enc.key;
                        cout<<enc.encrypt[i];
                    }
                    break;

                case 2:
                    cout<<"\n Enter the Decryption key:\n"<<endl;
                    cin>>enc.key;
                    fflush(stdin);
                    cout<<"\n Enter the message that you would like to decrypt:\n"<<endl;
                    cin.get(enc.msg,200);
                    cout<<"\nDecrypted message is:"<<endl;
                    for(int i=0;i<strlen(enc.msg);i++)
                    {
                        enc.decrypt[i]=enc.msg[i]-enc.key;
                        cout<<enc.decrypt[i];
                    }
                    break;

                case 3:
                    cout<<"Thank you for using our platform."<<endl;
                    cout<<"See You Soon"<<endl;
                    exit(0);
                    break;

                default:
                    cout<<"\nWrong option selected. Please try again !!!\n"<<endl;
            }
            cout<<endl;
            cout<<"If you want to continue the application press y/Y.\n"<<endl;
            cin>>ch;
        }while(ch=='y' || ch=='Y');

        cout<<"Thank you for using our platform."<<endl;
        cout<<"See You Soon"<<endl;
    }
    else
        cout<<"Wrong Username or Password"<<endl;

}