#include<iostream>
using namespace std;
int main()
    {
        int range,i,j,k,p;
        // cout<<"ENTER THE NUMBER OF ROW: ";
        // cin>>row;
        cout<<"ENTER THE RANGE OF PALLINDROME NUMBER: ";
        cin>>range;
        for(i=1;i<=range;i++)
            {
                for(j=range;j>=i;j--)
                    {
                        cout<<" ";
                    }
                for(k=1;k<=i;k++)
                    {
                        cout<<k;
                    }
                if(k>2)
                    {
                        for(p=k-2;p>=1;p--)  
                            {
                                cout<<p;
                            }
                    }
                cout<<endl;
            }
        return 0;
    }