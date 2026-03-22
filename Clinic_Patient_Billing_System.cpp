#include <iostream>
using namespace std;
int main()
{
    for (int day = 1; day <= 7; day++)
    {
        cout<<"Day "<<day<<"\n";
        for (int p = 1; p<=3; p++)
        {
            int service_Charge = 0; 
            int c1 ,c2;
            cout<<"Patient"<<" "<<p;
            cout<<"\nWhich Service You want to Avail:";
            int choice;
            cout<<"\n1.Consultation\n2.Medical Tests\n3.Both\n\nPress 1/2/3 : ";
            cin>>choice;
            if (choice == 1 || choice == 3)
            {
                cout<<"Service Charge For Consultation = ";
                cin>>c1;
                service_Charge += c1;
                cout<<"\n";
            }
            if (choice == 2 || choice == 3)
            {   
                char more;
                do
                {
                    cout<<"\nMedical Tests: ";
                    int choice2;
                    cout<<"\n 1.Blood Test\n 2.MRI\n 3.CT Scan\n 4.X-rays\n\nPress 1/2/3/4 : ";
                    cin>>choice2;
                    if (choice2 == 1)
                    {
                        cout<<"Service Charge = ";
                        cin>>c2;
                        service_Charge += c2;
                    }
                    else if (choice2 == 2)
                    {
                        cout<<"Service Charge = ";
                        cin>>c2;
                        service_Charge += c2;
                    }                    
                    else if (choice2 == 3)
                    {
                        cout<<"Service Charge = ";
                        cin>>c2;
                        service_Charge += c2;
                    }                    
                    else
                    {
                        cout<<"Service Charge = ";
                        cin>>c2;
                        service_Charge += c2;
                    }
                    
                    cout<<"Add More Services ? (y/n) : ";
                    cin>>more;
                }
                while (more == 'y' || more == 'Y');    
            
            int total ;    
            if (service_Charge >= 3000)
            {
                cout<<"Total = "<<service_Charge;
                cout<<"\nCongratulations!! You Got 15% Discount\n";
                total = service_Charge-(service_Charge*0.15);
                cout<<"Subtotal = "<<total<<"\n\n";
            }
            else if (service_Charge >= 2000)
            {
                cout<<"Total = "<<service_Charge;
                cout<<"\nCongratulations!! You Got 10% Discount\n";
                total = service_Charge-(service_Charge*0.1);
                cout<<"Subtotal = "<<total<<"\n\n";
            }
            else
            {
                cout<<"Total = "<<service_Charge<<"\n\n";
            }                
        }
    }
}        
return 0;    
}