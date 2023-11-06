#include<iostream>
using namespace std;

class book{
    char title[30];
    char authr[30];
    int qty,price,amount;

    long total;
    public:
    void getdata();
    void display();
    int tot();    
};
void book::getdata()
{
cout<<"enter the title of the book  ";
// gets(title);
cin>>title;
 cout<<flush;
cout<<" enter author name ";
// gets(authr);
cin>>authr;
cout<<"enter qty and price  ";
cin>>qty>>price;
amount=qty*price;
}
void book::display()
{
    
    cout
    <<"\t\t"<<title
    <<"\t\t\t\t"<<authr
    <<"\t\t"<<qty
    <<"\t\t"<<price
    <<"\t\t"<<amount<<"\n";
}
int book:: tot()
{
return amount;
}

int main(){
book a[10];
int total=0;
char num;
int count=1;

for (int i=0;i<=10;i++) 
{
    a[i].getdata();
   count++;
   total= total+ a[i].tot();
    cout<<"Any more books[y/n]";
    cin>>num;
   int  flag=0;

    if((num=='n')||(num=='N'))
    {
        flag=1;
    }
    // a[i].tot();
    // a[i].display();
    if (flag!=0)
    {
        break;
    }
    

    }
    cout<<"\t\t\t\t\t\t Himalayan BOOK WORLD\n";
    cout<<"\t\t\t\t\t\t S.R.NAGAR\n";
    cout<<"------------------------------------------------------------------------------------------------------\n";
    cout<<"\t\tTitle\t\t\t\t Author\t\tQty\t\t Price\t\t Amount";
    cout<<"\n---------------------------------------------------------------------------------------------------\n";
    for(int i =0;i<count-1;i++)
    {
     a[i].display();
    }
    cout<<"\n---------------------------------------------------------------------------------------------------\n";
cout<<"\t\t\t\t\t\t\t\t\tTotal Bill Amount:"<<total;
    
    return 0;
}