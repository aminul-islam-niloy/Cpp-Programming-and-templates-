#include<bits/stdc++.h>
using namespace std;
#include<string.h>

int main()
{
    int bt[20],at[10],n,i,j,temp,p[10],st[10],ft[10],wt[10],ta[10];
    int WT=0,TA=0,FT=0;
    float AWT,ATA,AFT;
    char pn[10][10],t[10];

    cout<<"Enter the number of process:";
    cin>>n;

     for(i=0;i<n;i++)
    {
        cout<<"Enter ProcessName :";
        cin>>pn[i];
        cout<<"Enter ArrivalTime :";
        cin>>at[i];
        cout<<"Enter BurstTime :";
        cin>>bt[i];
        cout<<"Enter Priority :";
        cin>>p[i];
    }

        cout<<endl;

    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        {
            if(p[i]<p[j])
            {
                temp=p[i];
                p[i]=p[j];
                p[j]=temp;
                temp=at[i];
                
                at[i]=at[j];
                at[j]=temp;
                temp=bt[i];
                bt[i]=bt[j];
                bt[j]=temp;
                strcpy(t,pn[i]);
                strcpy(pn[i],pn[j]);
                strcpy(pn[j],t);
            }
        }
    for(i=0;i<n;i++)
 
    {
 
        if(i==0)
        {
            st[i]=at[i];
            wt[i]=st[i]-at[i];
            ft[i]=st[i]+bt[i];
            ta[i]=ft[i]-at[i];
        }
        else
        {
            st[i]=ft[i-1];
            wt[i]=st[i]-at[i];
            ft[i]=st[i]+bt[i];
            ta[i]=ft[i]-at[i];
        }
        WT+=wt[i];
        TA+=ta[i];
        FT+=ft[i];
    }
    AWT=(float)WT/n;
    ATA=(float)TA/n;
    AFT=(float)FT/n;

   
    cout<<"Avarage waiting time is " <<AWT<<endl;

    cout<<"Average Turn Around Time is "<<ATA<<endl;

    cout<<"Average completation Time is "<<AFT<<endl;


    }
