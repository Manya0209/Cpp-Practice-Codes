/*Exp4 Implement a class string containing the following functions:
a. Overload + operator to carry out the concatenation of strings
b. Overload = operator to carry out string copy.
c. Overload <= operator to carry out the comparison of strings.
d. Function to display the length of a string.
e. Function tolower() to convert upper case letters to lower case.
f. Function toupper() to convert lower case letters to upper case.*/

#include<iostream>
#include<string.h>
using namespace std;
class String
{
    char *s;
    int size;
    public:
    String(char *c)
    {
        size = strlen(c);
        s = new char[size];
        strcpy(s,c);
    }
    char* operator +(char *s1)
    {
        size = strlen(s)+strlen(s1);
        char *s2 = new char[strlen(s)];
        strcpy(s2,s);
        s = new char[size];
        strcpy(s,s2);
        strcat(s,s1);
        return s;
    }
    char* operator =(char *s1)
    {
        size = strlen(s1);
        s = new char[size];
        strcpy(s,s1);
        return s;
    }
 
    bool operator <=(char *s1)
    {
        return strcmp(s,s1);
    }
    void display()
    {
        cout<<"\n\n String stored in class = "<<s;
    }
    void displaylength()
    {
        cout<<"\n\n Length of string stored in class = "<<size;
    } 
    void Tolower()
    {
        cout<<"\n\n String converted to lowercase";
        for(int i=0;i<size;i++)
        {
            if(isupper(s[i]))
            s[i] = (char)tolower(s[i]);
        }
        display();
    }
    void Toupper()
    {
        cout<<"\n\n String converted to uppercase";
        for(int i=0;i<size;i++)
        {
            if(islower(s[i]))
            s[i] = (char)toupper(s[i]);
        }
        display();
    }
};
int main()
{
    char *s1;
    int choice,l1;
    cout<<"\n\n Program to perform operations on string";
    cout<<"\n\n Enter length of string - ";
    cin>>l1;
    fflush(stdin);
    s1 = new char[l1];
    cout<<"\n Enter string to be stored in class - ";
    gets(s1);
    String s(s1);
    while(1)
    {
        char *d;
        int length;
        cout<<"\n\n Menu\n 1. String concatenation \n 2. String copy \n 3. String comparison \n 4. Display String \n 5. Display length of string \n 6. Convert string to lowercase \n 7. Convert string to uppercase \n 8. Exit  ";
        cin>>choice;
        if(choice==1)
        {
            s=s1;
            cout<<"\n\n Enter the length of new string - ";
            cin>>length;
            d = new char[length];
            fflush(stdin);
            cout<<"\n Enter the string - ";
            gets(d);
            s = s+d;
            cout<<"\n After concatenation....";
            s.display();
        }
        else if(choice==2)
        {
            cout<<"\n\n Enter the length of new string - ";
            cin>>length;
            d = new char[length];
            fflush(stdin);
            cout<<"\n Enter the string - ";
            gets(d);
            s=d;
            cout<<"\n After copying....";
            s.display();
        }
        else if(choice==3)
        {
            cout<<"\n\n Enter the length of new string - ";
            cin>>length;
            d = new char[length];
            fflush(stdin);
            cout<<"\n Enter the string - ";
            gets(d);
            if(!(s<=d))
            {
                cout<<"\n Strings are equal";
            }
            else
            {
                cout<<"\n Strings are not equal";
            }
        }
        else if(choice==4)
        {
            s.display();
        }
        else if(choice==5)
        {
            s.displaylength();
        }
        else if(choice==6)
        {
            s.Tolower();
        }
        else if(choice==7)
        {
            s.Toupper();
        }
        else if(choice==8)
        {
            exit(0);
        }
        else
        {
            cout<<"\n\n Wrong choice";
        }
    }
    return 0;
}