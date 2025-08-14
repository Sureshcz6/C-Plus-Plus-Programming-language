#include<iostream>                                                  //Create a Hotel food Service                   
#include<conio.h>                                                   // And  
using namespace std;                                                //After  Payment Slip Method Show
void MENU();
void Order(float,float,float,float,float,float,float);
float Samosah(float);
float Jelebi(float);
float Roti(float);
float Rasgula(float);
float Rice(float);
float Momos(float);
void Payment_Slip(float,float,float,float,float,float,float);
void Conttinue(float,float,float,float,float,float,float);
int main()                               // HOTEL PAYMENT SYSTEMS
    {
        MENU();

        return 0;
    }
void MENU(){                                                       // HOTEL SERVICES STRUCTURE
     int option;
     float AllTotal=0,samo=0,jel=0,ro=0,ras=0,ric=0,momo=0;
    cout<<"\t\t\t\t\t\t\t\t-------------------------------\n";
    cout<<"\t\t\t\t\t\t\t\t|             WELCOME         |\n";
    cout<<"\t\t\t\t\t\t\t\t|        HOTEL MENU CARD      |\n";
    cout<<"\t\t\t\t\t\t\t\t|-----------------------------|\n";
    cout<<"\t\t\t\t\t\t\t\t|-----Product----------Price--|\n";
    cout<<"\t\t\t\t\t\t\t\t|-----------------------------|\n";
    cout<<"\t\t\t\t\t\t\t\t||*** Samosah *** ===>  7 rs ||\n";
    cout<<"\t\t\t\t\t\t\t\t||*** Jelebi  *** ===>  8 rs ||\n";
    cout<<"\t\t\t\t\t\t\t\t||*** Roti    *** ===>  10 rs||\n";
    cout<<"\t\t\t\t\t\t\t\t||*** Rasgula *** ===>  10 rs||\n";
    cout<<"\t\t\t\t\t\t\t\t||*** Rice    *** ===>  39 rs||\n";
    cout<<"\t\t\t\t\t\t\t\t||*** Momos   *** ===>  29 rs||\n";
    cout<<"\t\t\t\t\t\t\t\t|-----------------------------|\n";
    cout<<"\t\t\t\t\t\t\t\t|       [1] for Order:        |\n";
    cout<<"\t\t\t\t\t\t\t\t|      ... Anykey to exit     |\n";
    cout<<"\t\t\t\t\t\t\t\t|-----------------------------|\n";
    cout<<"ENTER:  ";
    cin>>option;
    if(option==1){
         Order(AllTotal,samo,jel,ro,ras,ric,momo);
    }else{
        exit(0);
    }
}
void Payment_Slip(float price,float samo=0,float jel=0,float ro=0,float ras=0,float ric=0,float momo=0){
    int order;
    cout<<"\t\t\t\t\t\t\t\t-------------------------------------------------------\n";
    cout<<"\t\t\t\t\t\t\t\t|                      Payment Slip                   |\n";
    cout<<"\t\t\t\t\t\t\t\t|                    Your Food Oders                  |\n";
    cout<<"\t\t\t\t\t\t\t\t|-----------------------------------------------------|\n";
    cout<<"\t\t\t\t\t\t\t\t|-----FOOD-------------Price----------Calculate Price-|\n";
    cout<<"\t\t\t\t\t\t\t\t|-----------------------------------------------------|\n";
    cout<<"\t\t\t\t\t\t\t\t||*** Samosah *** ===>  "<<samo<<"*7    = >       "<<samo*7<<" rs       ||\n";
    cout<<"\t\t\t\t\t\t\t\t||*** Jelebi  *** ===>  "<<jel<<"*8     = >       "<<jel*8<<" rs       ||\n";
    cout<<"\t\t\t\t\t\t\t\t||*** Roti    *** ===> "<<ro<<"*10     = >       "<<ro*10<<" rs       ||\n";
    cout<<"\t\t\t\t\t\t\t\t||*** Rasgula *** ===> "<<ras<<"*10    = >           "<<ras*10<<" rs    ||\n";
    cout<<"\t\t\t\t\t\t\t\t||*** Rice    *** ===>"<<ric<<"*39     = >         "<<ric*39<<" rs      ||\n";
    cout<<"\t\t\t\t\t\t\t\t||*** Momos   *** ===> "<<momo<<"*8    = >      "<<momo*29<<" rs        ||\n";
    cout<<"\t\t\t\t\t\t\t\t|-----------------------------------------------------|\n";
    cout<<"\t\t\t\t\t\t\t\t|                  Total Price :   ===>       "<<price<<" rs   |\n";
    cout<<"\t\t\t\t\t\t\t\t|-----------------------------------------------------|\n";
    cout<<"\t\t\t\t\t\t\t\t|                  Thanks for  Visit !                |\n";
    cout<<"\t\t\t\t\t\t\t\t|                   [1]  :  For Order Food            |\n";
    cout<<"\t\t\t\t\t\t\t\t|                    ... Anykey to exit               |\n";
    cout<<"\t\t\t\t\t\t\t\t|-----------------------------------------------------|\n";
    cout<<"Enter :   ";               
    cin>>order;
    if(order==1){
        MENU();
    }else{
        exit(0);
    }
cout<<"Hotel Owner of Suresh kumar Mahto";
}
void Conttinue(float AllTotal,float samo,float jel,float ro,float ras,float ric,float momo){
        int Oderr;
        cout<<"ORDER CONTINUE FOR PRESS : [1] \n";
        cout<<"ORDER SUBMIT FOR PRESS : 0 \n";
        cout<<"ENTER :   ";
        cin>>Oderr;
        if(Oderr==1){
            Order(AllTotal,samo,jel,ro,ras,ric,momo);
        }
}
void  Order(float AllTotal,float samo,float jel,float ro,float ras,float ric,float momo){
    int opti;float Callfun;
    // float samo,jelebi,rice,roti,momo,raso;
    cout<<"[1]  for Samosah \n";
    cout<<"[2]  for Jelebi  \n";
    cout<<"[3]  for Roti    \n";
    cout<<"[4]  for Rashgula\n";
    cout<<"[5]  for Rice    \n";
    cout<<"[6]  for Momos   \n";
    cout<<"ENTER :    ";
    cin>>opti;
    switch(opti){
        case 1: 
                cout<<"HOW MANY WANT ORDER SAMOSAH : ";
                cin>>samo;
                Callfun=Samosah(samo);
                AllTotal+=Callfun;
                cout<<"==> "<<AllTotal;
                Conttinue(AllTotal,samo,jel,ro,ras,ric,momo);
                break;
        case 2: 
                cout<<"HOW MANY WANT ORDER Jelebi : ";
                cin>>jel;
                Callfun=Jelebi(jel);
                AllTotal+=Callfun;
                cout<<"==> "<<AllTotal;
                Conttinue(AllTotal,samo,jel,ro,ras,ric,momo);
                
                break;  
        case 3: 
                cout<<"HOW MANY WANT ORDER Roti : ";
                cin>>ro;
                Callfun=Roti(ro);
                AllTotal+=Callfun;          
                cout<<"==> "<<AllTotal;
                Conttinue(AllTotal,samo,jel,ro,ras,ric,momo);
                
                break;     
        case 4: 
                cout<<"HOW MANY WANT ORDER Rashgula: ";
                cin>>ras;
                Callfun=Rasgula(ras);
                AllTotal+=Callfun;
                cout<<"==> "<<AllTotal;
                Conttinue(AllTotal,samo,jel,ro,ras,ric,momo);

                break;  
        case 5: 
                cout<<"HOW MANY WANT ORDER RICE: ";
                cin>>ric;
                Callfun=Rice(ric);
                AllTotal+=Callfun;
                cout<<"==> "<<AllTotal;
                Conttinue(AllTotal,samo,jel,ro,ras,ric,momo);
               
                break;
        case 6: 
                cout<<"HOW MANY WANT ORDER MOMOS : ";
                cin>>momo;
                Callfun=Momos(momo);
                AllTotal+=Callfun;
                cout<<"==> "<<AllTotal;
                Conttinue(AllTotal,samo,jel,ro,ras,ric,momo);

                break;
        default: cout<<" Invalid Input ";
                // exit(0);
                Conttinue(AllTotal,samo,jel,ro,ras,ric,momo);
                break;           
    }
    Payment_Slip(AllTotal,samo,jel,ric,ro,momo,ras);
}

float Samosah(float samo){
    return(samo*7);
}
float Jelebi(float jelebi){ 
    return(jelebi*8);
}
float Roti(float roti){
    return(roti*10);
}
float Rasgula(float raso){
    return(raso*10);
}
float Rice(float rice){
    return(rice*39);
}
float Momos(float momo){
    return(momo*29);  
}
