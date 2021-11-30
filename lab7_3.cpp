#include<iostream>

using namespace std;

int adiff(int a,int b)
{
  int x;
    a=a%360;
    b=b%360;
    if(a<0)
    {
      a=360+a;
    }
    if(b<0)
    {
      b=360+b;
    }
    if(a>b)
    {
      x=a-b;
    }
    else 
    {
      x=b-a;
    }
    if(x>180)
    {
        return 360-x;
    }
    else 
    {
        return x;
    }

}




int main(){
  int k;
  cout << adiff(180,270)<<endl;
  cout << adiff(210,45)<<endl;
  cout << adiff(0,360)<<endl;
  cout << adiff(10,350)<<endl;
  cout << adiff(95,260)<<endl;
  cout << adiff(90,-90)<<endl;
  cout << adiff(1000,280)<<endl;
  cout << adiff(60,244)<<endl;
  
}
