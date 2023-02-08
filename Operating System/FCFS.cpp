#include<bits/stdc++.h>
using namespace std;

int main(){

    int n, WT[n];
    float awt=0,atat=0,act=0;

    vector<int> P;
    vector<int> A;
    vector<int> B;

    vector<int>CT;
    int ct[n];
     vector<int>TAT;
    int tat[n];



    cout<<"Enter total opration :";
    cin>>n;
    int p[n],a[n],b[n];

    cout<<"Enter process        :";
    for(int i=0; i<n; i++){  
       cin>>p[i];
       P.push_back(p[i]);

    }

     cout<<"Enter Arival time    :";
     for(int i=0; i<n; i++){
       cin>>a[i];
       A.push_back(a[i]);

    }

   cout<<"Enter Brust time    :";
    for(int i=0; i<n; i++){
       cin>>b[i];
       B.push_back(b[i]);

    }

    for(int i=0;i<n;i++)
    {
        ct[i]=B[i];
        for(int j=0;j<i;j++)
            ct[i]+=B[j];
            CT.push_back(ct[i]);

            act+=CT[i];
    }


for(int i=0; i<n; i++)
{
  tat[i]=CT[i]-A[i];
  TAT.push_back(tat[i]);

   atat+=tat[i];
  
}

for(int i=0; i<n; i++){
  
  WT[i]=TAT[i]-B[i];
   awt+=WT[i];
}

   cout << endl;
   
cout<<"completation time   :" ;
  for(int g: CT){
   cout<<g<<" ";
  }
   cout << endl;

cout<<"Turn around time    :";
 for(int t: TAT){
   cout<<t<<" ";
  }

   cout << endl;

cout<<"waiting time         :";
  for(int i=0; i<n; i++){
   cout<<WT[i]<<" ";
  }

  cout<<"\n avarage waiting time is:  "<<awt/n<<endl;
  cout<<"avarage completation time  "<<act/n <<endl;
  cout<<"avarage Turnaround Time    "<<atat/n <<endl;

}
