#include"header.cpp"
int main()
{
    int n,i,j;
    cout<<"enter the number of lines of star that you want";
    cin>>n;

    
 for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<"*";

        }
        cout<<endl;
    }


return 0;
}