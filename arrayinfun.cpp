#include<iostream>
using namespace std;
void function(int arr[],int n);

    void function(int *Ptr,int nums)
            {
                int i=0;
                while(i!=nums)
                    {
                        cout<<"ENTER ARRAY OF ELELMENT = \n";
                        cin>>Ptr[i];
                        i++;
                    }
                // Cfunction(Ptr,nums);
                // for(int i=0;i<nums;i++)
                //     {
                //         cout<<"Array of element : "<<i<<" = ";
                //         cin>>Ptr[i];
                //     }
            }
     
 int main()
    {
        int Arr[6];
        int n;
        n=sizeof(Arr)/sizeof(int);
        // cout<<sizeof(Arr);
        function(Arr,n);

        return 0;
    }