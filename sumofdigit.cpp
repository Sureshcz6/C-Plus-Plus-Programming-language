#include<iostream>
using namespace std;
int main()
    {
        int Digit,sum=0,lastdigit,save1=0;
        cout<<"ENTER ANY DIGIT = ";
        cin>>Digit;
        int save=Digit;
        while(Digit>0)
            {
                // if(Digit!=0)
                //     {
                //         return 0;
                //     }
                // sum=sum+(Digit/10);
                lastdigit=Digit % 10;
                cout<<lastdigit<<" ";
                sum+=lastdigit;
                Digit=Digit/10;
             
            }
    
        cout<<" Add of Digit = "<<sum;

        return 0;
    }