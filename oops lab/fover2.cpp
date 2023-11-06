#include<iostream>
using namespace std;
class over
{
int s,r,h;
float rad;
public:
 float  vol(int x ,int y)
{
    r=x;
    h=y;
    // c=z;

    cout<<"vol of cylinder :"<<3.14*r*r*h<<endl;
    }
     int vol(int z)
    {

      s=z;
        cout<<"vol of cube  is:"<<s*s*s<<endl;
    }
    float  vol(float a)
    {
       rad=a;

        cout<<"vol of sphere:"<< (4/3) * 3.14 *(rad*rad*rad
)<<endl;
    }

};
int main()
{
    over obj;
    obj.vol(1,2);
    
    obj.vol(5.5f);
    obj.vol(2);
    
    return 0;
}