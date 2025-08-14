#include<iostream>
using namespace std;
int main()
    {
        int row,range;char i,j,k,p;
        char Char=97;
        char save=Char;
        // cout<<"ENTER THE NUMBER OF ROW: ";
        // cin>>row;
        cout<<"ENTER THE RANGE : ";
        cin>>range;
        for(i=1;i<=range;i++)
            {
                for(j=range;j>=i;j--)
                    {
                        cout<<" ";
                    }
                Char=save;
                for(k=1;k<=i;k++)
                    {
                        cout<<Char;
                        Char++;
                    }
                if(k>2)
                    {
                        for(p=Char-2;p>=save;p--)  
                            {
                                cout<<p;
                            }
                    }
                cout<<endl;
            }
        return 0;
    }