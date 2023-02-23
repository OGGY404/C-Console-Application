#include <iostream>
#include <string>
#include <windows.h> //to access windows library
#include <conio.h> //to create password
#include <ctime>//to get time
#include <iomanip>//to align outputs
#include <fstream>//for file handling

using namespace std;



void colors (int col)
    {
        HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(h,col);
    }


class welcome
{
    public:
        int h;


        welcome()
        {
            colors(5);

            cout<<"\n\t\t==========================================================\n\t\t||";
            colors(7);
            cout<<"\t\t      MOBILE DOT COM";
            colors(5);
            cout<<"\t\t\t||\n\t\t=========================================================="<<endl;
            colors(7);

        }

};


class message
{
    public:

        void errors()
        {
            system("cls");
        }

};


class errormessages : public message
{
    public:

    void errors()
    {
        colors(4);
        cout<<"\n\n\n\t\t\t.............W R O N G  I N P U T............."<<endl;
        cout<<"\n\t\t\t  <<<<<<< PRESS ANY KEY TO BACK <<<<<<<\n\n\n\n";
        getch();
        system("cls");
        welcome();
    }
};


welcome obj;
message error1;
errormessages error2;


void myfile(string mobilename ,float mobileprice)
{

    ofstream PhoneBill;

    PhoneBill.open ("PHONE ORDERS BILL.txt");
    PhoneBill << "\n\t\t==========================================================\n\t\t||";
    PhoneBill << "\t\t      MOBILE DOT COM";
    PhoneBill << "\t\t\t||\n\t\t==========================================================";
    PhoneBill << "\n\t\t\t  ~~~~~~~~~~~~~~ ";
    PhoneBill << "BILLING CENTER";
    PhoneBill << "~~~~~~~~~~~~~~\n\n";
    PhoneBill << "\t\t\tDEVICE\t\t\t\t\t  PRICE";
    PhoneBill << "\n\t\t\t"<<mobilename<<"\t\t\t"<<mobileprice<<".00";
    PhoneBill << "\n\t\t\tIslandwide Delivary Charge\t\t   300.00";
    PhoneBill << "\n\t\t\t\t\t\t\t\t        .\n";
    PhoneBill << "\t\t\t\t\t\t\t\t        .\n";
    PhoneBill << "\t\t\t\t\t\t\t\t        .\n";
    PhoneBill << "\t\t\t\t\t\t\t\t        .\n";
    PhoneBill << "\t\t\t\t\t\t\t\t        .\n";
    PhoneBill << "\t\t\t\t\t\t\t    _____________\n";
    PhoneBill << "\t\t\tTOTAL :\t\t\t\t    LKR."<<mobileprice+300<<".00";
    PhoneBill << "\n\t\t\t\t\t\t\t    =============\n";

    PhoneBill.close();
}


class device
{
    public:
        string mname[50];
        float price[50];
        string description[50];


};

//GLOBLE AREA

device samsung;
device iphone;
device huawei;
device mi;
int def=6,A,six,siri,align1=40,align3=30,align2=20;


void paymentmethod(string mobilename, float mobileprice)
    {
        N:

        int paym,mobile,cardnum,cvv,i,dchar=300;
        char name[500];
        char address[500];

          system("cls");
          welcome();
          cout<<"\n";
          std::cout<<std::setw(align1)<<"~~~~~~~~~~~~~~ ";
          colors(10);
          cout<<"BILLING CENTER";
          colors(7);
          cout<<"~~~~~~~~~~~~~~";
          cout<<"\n\n";
          std::cout<<std::setw(align2)<<"\t\tDEVICE"<<std::setw(align2)<<"\t\t\tPRICE";
          cout<<"\n\n";

          if(mobileprice>=100000)
          {
            std::cout<<"\t\t\t"<<std::left<<std::setw(align1)<<mobilename<<mobileprice<<".00"<<endl;
            std::cout<<"\t\t\t"<<std::left<<std::setw(align1)<<"Islandwide Delivary Charge"<<"   300.00"<<endl;

              for(i=0;i<5;i++)
              {
                  cout<<"\t\t\t\t\t\t\t\t        .\n";
              }

              cout<<"\t\t\t\t\t\t\t    _____________\n";
              cout<<"\t\t\tTOTAL :\t\t\t\t    LKR."<<mobileprice+dchar<<".00"<<endl;
              cout<<"\t\t\t\t\t\t\t    =============\n";
         }

          else
          {
            std::cout<<"\t\t\t"<<std::left<<std::setw(align1)<<mobilename<<" "<<mobileprice<<".00"<<endl;
            std::cout<<"\t\t\t"<<std::left<<std::setw(align1)<<"24 Hours Delivary Charge"<<"   300.00"<<endl;

              for(i=0;i<5;i++)
              {
                  cout<<"\t\t\t\t\t\t\t\t        .\n";
              }

              cout<<"\t\t\t\t\t\t\t    _____________\n";
              cout<<"\t\t\tTOTAL\t\t\t\t     LKR."<<mobileprice+dchar<<".00"<<endl;
              cout<<"\t\t\t\t\t\t\t    =============\n";
          }

      K:

      cout<<"\n\n\n\n\t\tChoose your payment method.....";
      colors(14);
      cout<<"\n\n\t\t\t(1)CASH ON DELIVERY\n\t\t\t(2)VISA/MASTER\n\t\t\t : ";
      cin>>paym;

          if(paym==1)
          {
              Y:

              colors(10);
              cout<<"\n\n\t\t\t\t<<<<<<<<< CASH ON DELIVARY >>>>>>>>>\n\n";
              colors(7);
              cout<<"\n\n\t\t\tEnter your mobile number : ";
              cin>>mobile;
              cout<<"\n\t\t\tEnter Your Address : ";
              cin>>address;
              colors(10);
              cout<<"\n\n\t\t\tTo complete your payment enter (33) ";
              colors(4);
              cout<<"\n\t\t<<<BACK(93)\n\n\t\t\t: ";
              cin>>siri;

              if(siri==33)
              {

                  colors(10);
                  cout<<"\n\n\n\t\t\t\tPAYMENT SUCCESSFULLY DONE !!!";
                  colors(7);
                  cout<<"\n\t\t\tYOU CAN PICK YOUR ORDER WITHIN 24 HOURS! ! !";
                  myfile(mobilename,mobileprice);
              }

              else if (siri==93)
              {
                  system("cls");
                  welcome();
                  goto N;
              }

              else
              {
                colors(4);
                cout<<"\n\n\n\t\t\t.............W R O N G  I N P U T............."<<endl;
                cout<<"\n\t\t\t  <<<<<<< PRESS ANY KEY TO TRY AGAIN >>>>>>>\n\n\n\n";
                getch();
                system("cls");
                goto Y;
              }

          }

        else if (paym ==2)
          {
              F:

              colors(10);
              cout<<"\n\n\t\t\t\t<<<<<<<<< VISA/MASTER >>>>>>>>>\n\n";
              colors(7);


                int cvv,expmo,expy,Cd;

                cout<<"\n    >> Enter Your Credit Card Number : ";
                cin>>Cd;
                cout<<"\n    >> Enter Expire Month(MM): ";
                cin>>expmo;
                cout<<"\n    >> Enter Expire Year(YYYY): ";
                cin>>expy;
                cout<<"\n    >> Enter CVV : ";
                cin>>cvv;
                cout<<"\n\n\t\t\tTo complete your payment enter (33) ";
                colors(4);
                cout<<"\n\t\t<<<BACK(93)\n\n\t\t\t: ";
                colors(7);
                cin>>siri;

                    if(siri==33)
                    {
                        colors(10);
                        cout<<"\n\n\n\t\t\t\tPAYMENT SUCCESSFULLY DONE !!!";
                        colors(7);
                        cout<<"\n\n\t\t\tYOU CAN PICK YOUR ORDER WITHIN 24 HOURS! ! !";
                        myfile(mobilename,mobileprice);
                    }

                    else if (siri==93)
                    {
                        system("cls");
                        welcome();
                        goto N;
                    }

                    else
                    {
                        system("cls");
                        colors(4);
                        cout<<"\n\n\n\t\t\t.............W R O N G  I N P U T............."<<endl;
                        cout<<"\n\t\t\t  <<<<<<< PRESS ANY KEY TO TRY AGAIN >>>>>>>\n\n\n\n";
                        getch();

                        colors(7);
                        goto F;
                    }
            }

            else
            {
              system("cls");
              welcome();
              goto K;
            }
}


class choice
{
    public:
        int select,h,mob,i,chukzi,cho,d,buy,A;
        string id;

        void options();
        void admin();
        void androidphones();
        void apple();


} ;


void choice :: admin()
    {
        system("cls");
        int ad,product,v,chu,gas;
        string nbm;
        char pw;

        colors(7);
        cout<<"\n\n\n\t\t\t\tADMIN ID : ";//ID is "admin"
        cin>>id;

        A:

        cout<<"\n\n\n\t\t\t\tPASSWORD : ";
        cin>>nbm;

                     if (nbm=="nibm")
                    {
                        system("cls");
                        colors(5);
                        cout<<"\n\n\t\t\t.................";
                        colors(7);
                        cout<<"WELCOME BACK CHIEF";
                        colors(5);
                        cout<<".................\n\n";
                        colors(10);

                        cout<<"\t\t\t\t\tUPDATE NEW PHONES";
                        cout<<"\n\n\t\t\t\t(enter any key)\n";
                        getch();
                        colors(7);

                                P:

                                cout<<"\n\t\t\t\t(1) SAMSUNG PRODUCTS\n\t\t\t\t(2) HUAWEI PRODUCTS\n\t\t\t\t(3) XIAOMI PRODUCTS\n\t\t\t\t(4) APPLE PRODUCTS\n";
                                colors(4);
                                cout<<"\n\n\t\t<<<BACK(93)\n";
                                colors(7);
                                cout<<"\n\t\t\tEnter: ";
                                cin>>product;

                                    switch (product)
                                    {
                                        case 1:

                                            colors(5);
                                            cout<<"\n\t\t\t=================="<<endl;
                                            colors(7);
                                            cout<<"\t\t\t SAMSUNG PRODUCTS"<<endl;
                                            colors(5);
                                            cout<<"\t\t\t==================\n"<<endl;

                                            for(v=2;v>0;v--)
                                            {
                                                colors(11);
                                                cout<<"\n\t\t\tYOU CAN UPDATE 2 DEVICES AT ONCE : REMANING - "<<v<<endl;
                                                colors(7);
                                                cout<<"\n\t\t\tDevice name - ";
                                                cin>>samsung.mname[def];

                                                cout<<"\n\t\t\tPrice -";
                                                cin>>samsung.price[def];
                                                cout<<"\n\t\t\tDescription - ";
                                                cin>>samsung.description[def];
                                                def++;
                                            }

                                            colors(10);
                                            cout<<"\n\t\t\tUPDATE SUCCESSFUL ! ! !\n\t\t\tENTER ANY KEY TO BACK........";
                                            getch();
                                            colors(7);

                                            system("cls");
                                            welcome();
                                            goto P;

                                        break;

                                        case 2:

                                            colors(5);
                                            cout<<"\n\t\t\t================="<<endl;
                                            colors(7);
                                            cout<<"\t\t\t HUAWEI PRODUCTS"<<endl;
                                            colors(5);
                                            cout<<"\t\t\t=================\n"<<endl;

                                            for(v=2;v>0;v--)
                                            {
                                                colors(11);
                                                cout<<"\n\t\t\tYOU CAN UPDATE 2 DEVICES AT ONCE : REMANING - "<<v<<endl;
                                                colors(7);
                                                cout<<"\n\t\t\tDevice name - ";
                                                cin>>huawei.mname[def];
                                                cout<<"\n\t\t\tPrice -";
                                                cin>>huawei.price[def];
                                                cout<<"\n\t\t\tDescription - ";
                                                cin>>huawei.description[def];
                                                def++;
                                             }

                                             colors(10);
                                             cout<<"\n\t\t\tUPDATE SUCCESSFUL ! ! !\n\t\t\tENTER ANY KEY TO BACK........";
                                             getch();
                                             colors(7);

                                             system("cls");
                                             welcome();
                                             goto P;

                                            break;

                                        case 3:

                                            colors(5);
                                            cout<<"\n\t\t\t================="<<endl;
                                            colors(7);
                                            cout<<"\t\t\t XIAOMI PRODUCTS"<<endl;
                                            colors(5);
                                            cout<<"\t\t\t=================\n"<<endl;

                                            for(v=2;v>0;v--)
                                            {
                                                colors(11);
                                                cout<<"\n\t\t\tYOU CAN UPDATE 2 DEVICES AT ONCE : REMANING - "<<v<<endl;
                                                colors(7);
                                                cout<<"\n\t\t\tDevice name - ";
                                                cin>>mi.mname[def];
                                                cout<<"\n\t\t\tPrice -";
                                                cin>>mi.price[def];
                                                cout<<"\n\t\t\tDescription - ";
                                                cin>>mi.description[def];
                                                def++;
                                             }

                                             colors(10);
                                             cout<<"\n\t\t\tUPDATE SUCCESSFUL ! ! !\n\t\t\tENTER ANY KEY TO BACK........";
                                             getch();
                                             colors(7);

                                             system("cls");
                                             welcome();
                                             goto P;

                                         break;

                                         case 4:

                                             colors(5);
                                             cout<<"\n\t\t\t================="<<endl;
                                             colors(7);
                                             cout<<"\t\t\t APPLE PRODUCTS"<<endl;
                                             colors(5);
                                             cout<<"\t\t\t=================\n"<<endl;

                                             for(v=2;v>0;v--)
                                            {
                                                colors(11);
                                                cout<<"\n\t\t\tYOU CAN UPDATE 2 DEVICES AT ONCE : REMANING - "<<v<<endl;
                                                colors(7);
                                                cout<<"\n\t\t\tDevice name - ";
                                                cin>>iphone.mname[def];

                                                cout<<"\n\t\t\tPrice -";
                                                cin>>iphone.price[def];
                                                cout<<"\n\t\t\tDescription - ";
                                                cin>>iphone.description[def];

                                                def++;
                                             }

                                             colors(10);
                                             cout<<"\n\t\t\tUPDATE SUCCESSFUL ! ! !\n\t\t\tENTER ANY KEY TO BACK........";
                                             getch();
                                             colors(7);

                                             system("cls");
                                             welcome();
                                             goto P;

                                         break;

                                         case 93:

                                             system("cls");
                                             welcome();
                                             options();

                                         default:

                                            error1.errors();
                                            error2.errors();
                                            colors(5);
                                            cout<<"\n\n\t\t\t.................";
                                            colors(7);
                                            cout<<"WELCOME BACK CHIEF";
                                            colors(5);
                                            cout<<".................\n\n";
                                            colors(10);

                                            goto P;

                                    }
                            }

                            else
                            {
                                system("cls");
                                colors(4);
                                cout<<"\n\n\n\t\t\t.............W R O N G  PASSWORD............."<<endl;
                                cout<<"\n\t\t\t  <<<<<<< PRESS ANY KEY TO TRY AGAIN <<<<<<<\n\n\n\n";


                                goto A;
                            }

            }

void choice :: options()
    {
                A:

                colors(4);
                cout<<"\t\t\t\t\t\t\tFOR ADMIN LOGIN(99)";
                colors(10);
                cout<<"\n\n\t\t\t\t   1.ANDROID PHONES\n\n\t\t\t\t   2.APPLE PRODUCTS\n\n";
                colors(7);
                cout<<"\n\t>>>>> What is your choice? : ";
                cin>>cho;

                if(cho==1)
                {
                    androidphones();
                }

                else if(cho==2)
                {
                    apple();
                }

                else if (cho==99)
                {
                    admin();
                }

                else
                {
                    error1.errors();
                    error2.errors();

                    goto A;
                }
    }

void choice :: androidphones()
    {
        A:

        colors(11);
        cout<<"\n\t\t\t\t(1) SAMSUNG PRODUCTS\n\t\t\t\t(2) HUAWEI PRODUCTS\n\t\t\t\t(3) XIAOMI PRODUCTS\n"<<endl;
        colors(7);
        cout<<"\t\tCHOOSE BRAND : ";
        cin>>mob;

        if (mob == 1)
         {
            B:

            colors(5);
            cout<<"\n\t\t\t=================="<<endl;
            colors(7);
            cout<<"\t\t\t SAMSUNG PRODUCTS"<<endl;
            colors(5);
            cout<<"\t\t\t==================\n"<<endl;



             samsung.mname[0] = "Samsung Galaxy M02";
             samsung.price[0] = 21000.00;
             samsung.description[0]= "\t\t\t  *32GB, 3GB RAM\n\t\t\t  *720 x 1600 pixels,6.5 inches\n\t\t\t  *Android 10\n\t\t\t  *13MP + 2MP + 5MP Selfie Camera";

             samsung.mname[1] = "Samsung Galaxy M12";
             samsung.price[1] = 34900.00;
             samsung.description[1]="\t\t\t  *6.5 ”screen\n\t\t\t  *8MP front camera and 4 rear cameras up to 48MP\n\t\t\t  *Exynos850 Processor, Octa 2.0GHz\n\t\t\t  *3GB RAM, 32GB storage and up to 1TB microSD";

             samsung.mname[2] = "Samsung Galaxy A22";
             samsung.price[2] = 44500.00;
             samsung.description[2]="\t\t\t  *6.6-inch Infinity-V Display.\n\t\t\t  *Triple Camera system with up to 48MP.\n\t\t\t  *Ultra Wide Camera for 115 degree angle\n\t\t\t  *5000mAh battery";

             samsung.mname[3] = "Samsung Galaxy A52";
             samsung.price[3] = 67500.00;
             samsung.description[3]="\t\t\t  *6.5 inches\n\t\t\t*Super AMOLED\n\t\t\t  *64MP Camera\n\t\t\t  *32MP Selfie camera\n\t\t\t  *Li-Ion 4500 mAh, non-removable Battery\n\t\t\t  *Fingerprint (under display, optical)\n\t\t\t  *Fast charging 25W, 50% in 30 min\n\t\t\t  *8GB + 128GB";

             samsung.mname[4] = "Samsung Galaxy Note 20";
             samsung.price[4] = 169900.00;
             samsung.description[4]="\t\t\t  *1080 x 2400 pixels 6.7 inches Super AMOLED Plus capacitive touchscreen\n\t\t\t  *12 MP, f/1.8, 26mm (wide), 64 MP, f/2.0, (telephoto), 12 MP, f/2.2, 120˚ (ultrawide) Cameras\n\t\t\t  *Exynos 990 (7 nm+) – Global or Qualcomm SM8250 Snapdragon 865+ (7 nm+)\n\t\t\t  *Bluetooth 5.0, A2DP, LE, aptX\n\t\t\t  *Non-removable Li-Ion 4300 mAh battery with 25W Fast charging.";

             samsung.mname[5] = "Samsung Galaxy S21";
             samsung.price[5] = 182900.00;
             samsung.description[5]="\t\t\t  *Dimensions : 165.1 x 75.6 x 8.9mm Weight : 227g\n\t\t\t  *6.8″ edge Quad HD+ Dynamic AMOLED 2X Infinity-O Display (3200×1440)\n\t\t\t  *S Pen only compatible with Galaxy S21 Ultra 5G\n\t\t\t  *12MP Ultra Wide Camera, 108MP Wide-angle Camera, 10MP Telephoto Camera,\n\t\t\t   10MP Telephoto Camera and Super Resolution Zoom up to 100x Space Zoom\n\t\t\t  *Non-removable Li-Ion 5000 mAh battery with 25W Fast charging";

                for(i=0;i<def;i++)
                {
                    colors(6);
                    cout<<"\t\t\t("<<i+1<<") "<<samsung.mname[i]<<endl;
                    cout<<"\t\t\t\t\t      ------------Rs."<<samsung.price[i]<<endl;
                }

                colors(4);
                cout<<"\n\n\t\t<<<BACK(93)";
                colors(7);
                cout<<"\n\n\t\tEnter your choice: ";
                cin>>chukzi;
                cout<<"\n\n\n";
                system("cls");

                    if (chukzi<=50)
                    {
                        chukzi--;

                        C:

                        colors(6);
                        cout<<"\nYOU CHOOSE >>>\n\t\t"<<samsung.mname[chukzi];
                        cout<<"\n\t\t===========================";
                        colors(7);
                        cout<<"\n\n\t\tFEATURES :"<<endl;
                        cout<<samsung.description[chukzi];
                        colors(10);
                        cout<<"\n\n\t\tPRICE................................Rs."<<samsung.price[chukzi];
                        colors(4);
                        cout<<"\n\n\t\t<<<BACK(93)";
                        colors(7);
                        cout<<"\t\t\t\tBUY(69)\n\n: ";
                        cin>>buy;

                        if(buy == 69)
                        {
                           paymentmethod(samsung.mname[chukzi],samsung.price[chukzi]);
                        }

                        else if(buy == 93)
                        {
                            system("cls");
                            welcome();
                            goto B;
                        }

                        else
                        {
                            error1.errors();
                            error2.errors();

                            goto C;
                        }

                    }

                    else if (chukzi==93)
                    {
                        system("cls");
                        welcome();
                        goto A;
                    }

                    else
                    {
                        error1.errors();
                        error2.errors();

                        goto B;
                    }
         }

        else if (mob == 2)
         {
            E:

            colors(5);
            cout<<"\n\t\t\t================="<<endl;
            colors(7);
            cout<<"\t\t\t HUAWEI PRODUCTS"<<endl;
            colors(5);
            cout<<"\t\t\t=================\n"<<endl;


            huawei.mname[0] = "Huawei Y6p";
            huawei.price[0] =  29500.00;
            huawei.description[0] = "*4GB RAM & 64GB Memory\n\t\t\t  *6.53inches Display With FHD+ (Corning Gorilla Glass 5) IPS LCD Display\n\t\t\t  *Back Camera 13MP, 5MP, 2MP\n\t\t\t  *Front Camera 8MP";

            huawei.mname[1] = "Huawei Y9 Prime";
            huawei.price[1] =  36900.00;
            huawei.description[1] = "*6.59 Display\n\t\t\t  *4 GB RAM , 128GB storage\n\t\t\t  *microSD slot\n\t\t\t  *16MP Camera\n\t\t\t  *4000 mAh Battery";

            huawei.mname[2] = "Huawei Y7A";
            huawei.price[2] =  42900.00;
            huawei.description[2] = "*128 GB, 4 GB RAM\n\t\t\t  *1080 x 2400 pixels , 6.67 inches\n\t\t\t  *Android 10\n\t\t\t  *48MP + 8MP + 2MP + 2MP + 8MP Selfie";

            huawei.mname[3] = "Huawei Nova 7i";
            huawei.price[3] =  52900.00;
            huawei.description[3] = "*128 GB, 8 GB RAM\n\t\t\t  *1080 x 2310 pixels, 6.4 inches\n\t\t\t  *Android 10.0\n\t\t\t  *4 Cameras + Selfie";

            huawei.mname[4] = "Huawei Honor View 20";
            huawei.price[4] =  63500.00;
            huawei.description[4] = "*Android 9.0\n\t\t\t  *6.4” IPS LCD FHD Display\n\t\t\t  *Kirin 980 Chipset\n\t\t\t  *Dual Rear and 25MP Selfie Camera\n\t\t\t  *6GB RAM and 128GB ROM";

            huawei.mname[5] = "Huawei P40 Pro";
            huawei.price[5] =  269500.00;
            huawei.description[5] = "*HarmonyOS 2\n\t\t\t  *6.58 inches OLED Display\n\t\t\t  *Kirin 990 5G (7 nm+) Chipset\n\t\t\t  *Quad Rear and Dual 32MP Selfie Camera\n\t\t\t  *8GB RAM and 256GB ROM";


                for(i=0;i<def;i++)
                {
                    colors(6);
                    cout<<"\t\t\t("<<i+1<<") "<<huawei.mname[i]<<endl;
                    cout<<"\t\t\t\t\t      ------------Rs."<<huawei.price[i]<<endl;
                }

                colors(4);
                cout<<"\n\n\t\t<<<BACK(93)";
                colors(7);
                cout<<"\n\n\t\tEnter your choice: ";
                cin>>chukzi;
                cout<<"\n\n\n";
                system("cls");

                    if (chukzi <= 50)
                    {
                        chukzi--;

                        D:

                        colors(6);
                        cout<<"\nYOU CHOOSE >>>\n\t\t"<<huawei.mname[chukzi];
                        cout<<"\n\t\t===========================";
                        colors(7);
                        cout<<"\n\n\t\tFEATURES :"<<huawei.description[chukzi];
                        colors(10);
                        cout<<"\n\n\t\tPRICE................................Rs."<<huawei.price[chukzi];
                        colors(4);
                        cout<<"\n\n\t\t<<<BACK(93)";
                        colors(7);
                        cout<<"\t\t\tBUY(69)\n\n: ";
                        cin>>buy;

                            if(buy == 69)
                            {
                               paymentmethod(huawei.mname[chukzi],huawei.price[chukzi]);
                            }

                            else if(buy == 93)
                            {
                                system("cls");
                                welcome();
                                goto E;
                            }

                            else
                            {
                                error1.errors();
                                error2.errors();

                                goto D;
                            }

                    }

                    else if (chukzi == 93)
                    {
                        system("cls");
                        welcome();
                        goto A;
                    }

                    else
                    {
                        error1.errors();
                        error2.errors();

                        goto E;
                    }
         }

        else if (mob == 3)
         {
            F:

            colors(5);
            cout<<"\n\t\t\t================="<<endl;
            colors(7);
            cout<<"\t\t\t XIAOMI PRODUCTS"<<endl;
            colors(5);
            cout<<"\t\t\t=================\n"<<endl;


            mi.mname[0] = "Xiaomi Redmi 9C";
            mi.price[0] =  22500.00;
            mi.description[0] = "*Android 10\n\t\t\t  *6.53 inches IPS LCD Display\n\t\t\t  *Triple Rear and 5MP Selfie Cameras\n\t\t\t  *4GB RAM and 64GB ROM";

            mi.mname[1] = "Xiaomi Redmi 9T";
            mi.price[1] =  38900.00;
            mi.description[1] = "*Android 10\n\t\t\t  *6.53 inches IPS LCD Display\n\t\t\t  *Quad Rear {13MP+8MP+5MP+2MP) and 8MP Selfie Camera\n\t\t\t  *4GB RAM and 128GB ROM,";

            mi.mname[2] = "Xiaomi Redmi Note 10 Pro";
            mi.price[2] =  52000.00;
            mi.description[2] = "*Android 11\n\t\t\t  *6.67 inches AMOLED Display\n\t\t\t  *Snapdragon 732G (8 nm) SoC Chipset\n\t\t\t  *Quad (108MP + 8MP + 5MP + 2MP) Rear and 16MP Selfie Cameras.";

            mi.mname[3] = "Xiaomi Poco X3 Pro";
            mi.price[3] =  63500.00;
            mi.description[3] = "*Android 11\n\t\t\t  *6.67 in IPS LCD Display\n\t\t\t  *Snapdragon 860 Chipset\n\t\t\t  *Quad (48MP + 8MP + 2MP + 2MP) Rear and 20MP Selfie Camera.";

            mi.mname[4] = "Xiaomi Mi Note 10 Lite";
            mi.price[4] =  71900.00;
            mi.description[4] = "*Android 10\n\t\t\t  *6.47 inches Super AMOLED Display\n\t\t\t  *Qualcomm SDM730 Snapdragon 730G Chipset\n\t\t\t  *Five Rear and 16MP Selfie Cameras\n\t\t\t  *8GB RAM and 128GB ROM";

            mi.mname[5] = "Xiaomi Mi 11";
            mi.price[5] =  144900.00;
            mi.description[5] = "*Android 11\n\t\t\t  *6.67 inches Super AMOLED Display\n\t\t\t  *Mediatek Dimensity 1200 Chipset\n\t\t\t  *Triple Rear and 32MP Selfie Camera.";


                for(i=0;i<def;i++)
                {
                    colors(6);
                    cout<<"\t\t\t("<<i+1<<") "<<mi.mname[i]<<endl;
                    cout<<"\t\t\t\t\t      ------------Rs."<<mi.price[i]<<endl;
                }

                    colors(4);
                    cout<<"\n\n\t\t<<<BACK(93)";
                    colors(7);
                    cout<<"\n\n\t\tEnter your choice: ";
                    cin>>chukzi;
                    cout<<"\n\n\n";
                    system("cls");

                    if (chukzi<=50)
                    {
                        chukzi--;

                        G:

                        colors(6);
                        cout<<"\nYOU CHOOSE >>>\n\t\t"<<mi.mname[chukzi];
                        cout<<"\n\t\t===========================";
                        colors(7);
                        cout<<"\n\n\t\tFEATURES :"<<mi.description[chukzi];
                        colors(10);
                        cout<<"\n\n\t\tPRICE................................Rs."<<mi.price[chukzi];
                        colors(4);
                        cout<<"\n\n\t\t<<<BACK(93)";
                        colors(7);
                        cout<<"\t\t\t\tBUY(69)\n\n: ";
                        cin>>buy;

                        if(buy == 69)
                        {
                           paymentmethod(mi.mname[chukzi],mi.price[chukzi]);
                        }

                        else if(buy == 93)
                        {
                            system("cls");
                            welcome();
                            goto F;
                        }

                        else
                        {
                            error1.errors();
                            error2.errors();

                            goto G;
                        }

                    }

                    else if (chukzi==93)
                    {
                        system("cls");
                        welcome();
                        goto A;
                    }

                    else
                    {
                        error1.errors();
                        error2.errors();

                        goto F;
                    }
         }

         else
         {
            error1.errors();
            error2.errors();

            goto A;
         }
    }

void choice :: apple()
    {
            A:

            colors(5);
            cout<<"\n\t\t================"<<endl;
            colors(7);
            cout<<"\t\t APPLE PRODUCTS"<<endl;
            colors(5);
            cout<<"\t\t================\n"<<endl;


            iphone.mname[0] ="Apple iPhone 6s 128GB";
            iphone.price[0] = 61900.00;
            iphone.description[0] ="\t\t\t*Retina HD display with 3D Touch\n\t\t\t  *A9 chip with 64-bit architecture.Embedded M9 motion coprocessor\n\t\t\t  *iOS 9 Operating System\n\t\t\t  *4K video recording (3840x2160) at 30 fps\n\t\t\t  *New 12-megapixel iSight camera with 1.22µ pixels\n\t\t\t  *Fingerprint sensor built into the Home button";

            iphone.mname[1] ="Apple iPhone 8 4GB";
            iphone.price[1] = 97800.00;
            iphone.description[1] ="\t\t\t*powered by hexa-core Apple A11 Bionic processor\n\t\t\t  *2GB of RAM\n\t\t\t  *64GB of internal storage\n\t\t\t  *12-MP primary camera & a 7-MP front camera";

            iphone.mname[2] ="Apple iPhone XR 128GB";
            iphone.price[2] = 139900.00;
            iphone.description[2] ="\t\t\t*6.1″ Liquid Retina IPS LCD capacitive touchscreen\n\t\t\t  *12 MP Primary Camera , 7 MP Selfie Camera\n\t\t\t  *Non-removable Li-Ion 2942 mAh Battery";

            iphone.mname[3] ="Apple iPhone SE 128GB";
            iphone.price[3] = 123900.00;
            iphone.description[3] ="\t\t\t*4.7” Retina HD display\n\t\t\t  *7MP camera with 1080p HD video recording at 30 fps\n\t\t\t  *A13 Bionic chip with third-generation Neural Engine\n\t\t\t  *Water resistant to a depth of 1 meter for up to 30 minutes\n\t\t\t  *iOS 13,upgradable to iOS 14.6";

            iphone.mname[4] ="Apple iPhone 11 128GB";
            iphone.price[4] = 169900.00;
            iphone.description[4] ="\t\t\t*6.1″ Liquid Retina IPS LCD capacitive touchscreen\n\t\t\t  *12 MP Dual Primary Camera , 12 MP Selfie Camera\n\t\t\t  *Non-removable Li-Ion 3110 mAh Battery";

            iphone.mname[5] ="Apple iPhone 12 128GB";
            iphone.price[5] = 289100.00;
            iphone.description[5] ="\t\t\t*A14 Bionic is the fastest chip in a smartphone\n\t\t\t  *An edge-to-edge OLED display\n\t\t\t  *Ceramic Shield with four times better drop performance\n\t\t\t  *iPhone 12 has the broadest 5G coverage worldwide";

                for(i=0;i<def;i++)
                {
                    colors(6);
                    cout<<"\t\t("<<i+1<<") "<<iphone.mname[i]<<endl;
                    cout<<"\t\t\t\t\t\t      ------------Rs."<<iphone.price[i]<<endl;
                }

                colors(7);
                cout<<" >>>>> Enter your choice: ";
                cin>>chukzi;
                cout<<"\n\n\n";
                system("cls");

                    if (chukzi<=50)
                    {
                        chukzi--;

                        B:

                        colors(6);
                        cout<<"\nYOU CHOOSE >>>\n\t\t"<<iphone.mname[chukzi];
                        cout<<"\n\t\t==============================";
                        colors(7);
                        cout<<"\n\n\t\tFEATURES :\n"<<iphone.description[chukzi];
                        colors(10);
                        cout<<"\n\n\t\tPRICE................................Rs."<<iphone.price[chukzi];
                        colors(4);
                        cout<<"\n\n\t\t<<<BACK(93)";
                        colors(7);
                        cout<<"\t\t\t\tBUY(69)\n\n: ";
                        cin>>buy;

                        if(buy == 69)
                        {
                           paymentmethod(iphone.mname[chukzi],iphone.price[chukzi]);
                        }

                        else if(buy == 93)
                        {
                            system("cls");
                            welcome();
                            goto A;
                        }

                        else
                        {
                            error1.errors();
                            error2.errors();

                            goto A;
                        }

                    }

                    else
                    {
                        error1.errors();
                        error2.errors();

                        goto A;
                    }
         }



int main()
{
    choice slect;
    slect.options();
    getch();


    cout<<"\n\n\n";
    return 0;
}
