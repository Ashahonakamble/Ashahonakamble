#include<iostream>
using namespace std;
int main()
{
    int x=2,y=0;
    cout<<"Before try \n";
    try{
    cout<<"Inside try \n";
    if(x==0){
       throw x;
       cout<<"After throw"<<endl;
    }
     else if(y==0){
        throw 2.50;
         cout<<"After throw"<<endl;
     }
    }
    catch(int x){
    cout<<"Exception Caught and x= "<<x<<endl;
    }
     catch(double z){
    cout<<"Exception Caught and y= "<<z<<endl;
    }
    cout<<"After Catch"<<endl;
    return 0;
}
