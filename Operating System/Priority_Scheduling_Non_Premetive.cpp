#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n ; 
    cout<<"Enter process num : ";
    cin>>n;
    
    vector<int>CT;
    int arrivaltime[n],bursttime[n],priority[n];
    int waitingTime[n],turnaroundTime[n];

    cout<<"Enter arrial Brust and priority as like:"<<endl;
    cout<<"A[] B[] P[]"<<endl;
    
    for(int i=0; i<n; i++){
        cin>>arrivaltime[i]>>bursttime[i]>>priority[i];
    }
    
    int NoP = n, ATt[n],PPt[n]; 
 
    
    int i = 0;

    for (i = 0; i < n; i++)
    {
        PPt[i] = priority[i];
        ATt[i] = arrivaltime[i];
    }

    int LAT = 0; 
    for (i = 0; i < n; i++)
        if (arrivaltime[i] > LAT)
            LAT = arrivaltime[i];

    int MAX_P = 0; 
    for (i = 0; i < n; i++)
        if (PPt[i] > MAX_P)
            MAX_P = PPt[i];

    //priority Value ppt 1, 2
    int ATi = 0;    
    int P1 = PPt[0]; 
    int P2 = PPt[0]; 

    // First Arrival Time and Highest priority Process
    int j = -1;
    int CPT = 0;  
    while (NoP > 0 && CPT <= 1000)
    {
        for (i = 0; i < n; i++)
        {
            if ((ATt[i] <= CPT) && (ATt[i] != (LAT+10 )))
            {
                if (PPt[i] != (MAX_P + 1))
                {
                    P2 = PPt[i];
                    j = 1;

                    if (P2 < P1)
                    {
                        j = 1;
                        ATi = i;
                        P1 = PPt[i];
                        P2 = PPt[i];
                    }
                }
            }
        }

        if (j == -1)
        {
            CPT = CPT + 1;
            continue;
        }
        
        else
        {
            waitingTime[ATi] = CPT - ATt[ATi];
            CPT = CPT + bursttime[ATi];
            CT.push_back(CPT);

            turnaroundTime[ATi] = CPT - ATt[ATi];
            ATt[ATi] = LAT + 10;
            j = -1;
            PPt[ATi] = MAX_P + 1;

            ATi = 0;       
            P1 = MAX_P + 1; 
            P2 = MAX_P + 1; 
            NoP = NoP - 1;
        }
    }

    cout << "\nProcess_Number : ";
    for (i = 0; i < n; i++)
    {
        cout << "P" << i + 1 <<"  ";
        
    }


    cout << "\nArrival time   : ";
        for (i = 0; i < n; i++)
        {
            cout<<arrivaltime[i]<<"   ";
        }

    cout << "\nBrust time     : ";
        for (i = 0; i < n; i++)
        {
            cout<<bursttime[i]<<"  ";
        }

    cout << "\nPriority       : ";
        for (i = 0; i < n; i++)
        {
            cout<<priority[i]<<"   ";
        }

    cout << "\nComplation Time: ";
        for( int x:CT)
        {
        cout<<x<<"  ";
        }

    cout << "\nWaiting Time   : ";
        for (i = 0; i < n; i++)
        {
            cout<<waitingTime[i]<<"   ";
        }

    cout << "\nTurnaround Time: ";
        for (i = 0; i < n; i++)
        {
            cout<<turnaroundTime[i]<<"  ";
        }

    float AvgWT = 0;  
    float AVGTaT = 0; 
    float AVGCT =0; 

    for (i = 0; i < n; i++)
    {
        AvgWT = waitingTime[i] + AvgWT;
        AVGTaT = turnaroundTime[i]+AVGTaT;
        AVGCT = CT[i]+ AVGCT;
    }

    cout<<endl;

    cout << "\nAverage waiting time = " << AvgWT / n << endl;
    cout << "Average turnaround time = " << AVGTaT / n << endl;
    cout << "Average Completation time =" <<AVGCT /n<<endl;

    getchar();
}