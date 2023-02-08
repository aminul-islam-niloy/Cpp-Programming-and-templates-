
#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

int main()
{
	int pid[10],at[10],bt[10],ct[10],ta[10],wt[10],f[10];
	int n,st=0,tot=0;
	float awt=0,ata=0,act=0;
	cout<<"Enter process: ";
	cin>>n;


	cout<<"Enter Arrival time & Brust time: "<<endl;

	for(int i=0;i<n;i++)
	{
		cin>>at[i]>>bt[i];
		pid[i]=i+1;
		f[i]=0;
	}
	while(true)
	{
		int c=n,min=999;
		if(tot==n)
		{
			break;
		}
		for(int i=0;i<n;i++)
		{
			if((at[i]<=st) && (f[i]==0) && (bt[i]<min))
			{
				min = bt[i];
				c=i;
			}
		}
		if(c==n)
		{
			st++;
		}
		else
		{
			ct[c]=st+bt[c];
			st = st+bt[c];
			ta[c] = ct[c]-at[c];
			wt[c] = ta[c]-bt[c];
			f[c] = 1;
			pid[tot]==c+1;
			tot++;
		}
	}
	
	for(int i=0;i<n;i++)
	{
		act = act +ct[i];
		awt = awt +wt[i];
		ata = ata +ta[i];

	}
	cout<<"Process id    : ";
	for(int i=0; i<n; i++){
		cout<<pid[i]<<" ";
	}
	cout<<endl;

	cout<<"Arrival time  : ";
	for(int i=0; i<n; i++){
		cout<<at[i]<<" ";
	}
	cout<<endl;

	cout<<"Brust time    : ";
	for(int i=0; i<n; i++){
		cout<<bt[i]<<" ";
	}
	cout<<endl;

	cout<<"waiting Time  : ";
	for(int i=0; i<n; i++){
		cout<<wt[i]<<" ";
	}
	cout<<endl;

	cout<<"Completation  : ";
	for(int i=0; i<n; i++){
		cout<<ct[i]<<" ";
	}
	cout<<endl;

	cout<<"Turnaround    : ";
	for(int i=0; i<n; i++){
		cout<<ta[i]<<" ";
	}

	cout<<endl;
    cout<<"\naverage Completation time is: " <<act/n;
	cout<<"\naverage Waiting time is: " <<awt/n;
	cout<<"\naverage Turnaround time is: " <<ata/n;
	
}