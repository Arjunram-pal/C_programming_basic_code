#include<iostream>
#include<conio.h>
using namespace std;

int i=0;

struct Employee
{
    int Id,age;
    string name,fname,add;
}E[25];

void insert(){
    system("cls");
    cout<<"----------Inserting--------"<<endl;
    cout<<"1.Employees ID:"<<endl;
    cin>>E[i].Id;
    cout<<"2.Employees Name:"<<endl;
    cin>>E[i].name;
    cout<<"3.Employees Father:"<<endl;
    cin>>E[i].fname;
    cout<<"4.Employees Age:"<<endl;
    cin>>E[i].age;
    cout<<"5.Employees Address:"<<endl;
    cin>>E[i].add;

    i++;
    cout<<"\n\nInsert recored successfully"<<endl;

};

void search(){
    system("cls");

    cout<<"------Searching-----"<<endl;

    if (i==0)
    {
        cout<<"Recored no found!!";
    }
    else{
        int Id,found=0;
        cout<<"Enter Employees Id:";
        cin>>Id;
        for(int a=0;a<i;a++)
        {
            if (Id == E[a].Id)
            {
                cout<<"Employee Name:"<<E[a].name<<endl;
                cout<<"Employee fathe name:"<<E[a].fname<<endl;
                cout<<"Employee Age: "<<E[a].age<<endl;
                cout<<"Employee Address: "<<E[a].add<<endl;
                found++;
            }
            
        }
        if (found==0)
        {
            cout<<"Recored not found!!";
        }
        

    }

};

void update()
{
    system("cls");
    cout<<"------Updating-----"<<endl;

    if (i==0)
    {
        cout<<"Recored no found!!";
    }
    else{
        int Id,found=0;
        cout<<"Enter Employees Id:";
        cin>>Id;
        for(int a=0;a<i;a++)
        {
            if (Id == E[a].Id)
            {
                cout<<"\n\n1.Employees Name:"<<endl;
                cin>>E[a].name;
                cout<<"\n\n2.Employees Father:"<<endl;
                cin>>E[a].fname;
                cout<<"\n\n3.Employees Age:"<<endl;
                cin>>E[a].age;
                cout<<"\n\n4.Employees Address:"<<endl;
                cin>>E[a].add;
                found++;
            }
            
        }
        if (found==0)
        {
            cout<<"Recored not found!!";
        }
        

    }


};

void del()
{
    system("cls");
    cout<<"------Deleting-----"<<endl;

    if (i==0)
    {
        cout<<"Recored no found!!";
    }
    else{
        int Id,found=0;
        cout<<"Enter Employees Id:";
        cin>>Id;

        for(int a=0;a<i;a++)
        {
            if (Id==E[a].Id)
            {
                for(int m=a;m<i;m++)
                {
                    E[m].Id=E[m+1].Id;
                    E[m].name=E[m+1].name;
                    E[m].fname=E[m+1].fname;
                    E[m].age=E[m+1].age;
                    E[m].add=E[m+1].add;
                }
                cout<<"Delete!!";
                found++;
                i--;
                break;
            }
            
        }

        if (found==0)
        {
            cout<<"Not found!!";
        }
        
    }
};

int main()
{
    p:
    system("cls");
    int choices;
    cout<<"--------------Employee Management System!------------"<<endl;
    cout<<"\n1.INSERT EMPLOYEES DETAILS";
    cout<<"\n2.SEARCH EMPLOYEES DETAILS";
    cout<<"\n3.UPDATE EMPLOYEES DETAILS";
    cout<<"\n4.DELETE EMPLOYEES DETAILS";
    cout<<"\n5.EXIT";

    cout<<"\n Enter your choice:";

    cin>>choices;
    switch (choices)
    {
    case 1:
        insert();
        break;

    case 2:
        search();
        break;
        
    case 3:
        update();
        break;

    case 4:
        del();
        break;

    case 5:
       exit(0);
    
    default:
        cout<<"Invalid choice";
        break;
    }

    getch();

    goto p;


}