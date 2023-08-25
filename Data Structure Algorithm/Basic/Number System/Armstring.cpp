#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int main()
{
    #ifndef RUN
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
    #endif

    int num;
    cin>>num;

    int size=sizeof(num);
    int arm=0;
    int result= num;

    while(num>0)
        {
            int last= num%10; 
            arm += pow(last,size);
            num= num/10;
        }
            if(arm==result)
                {
                    cout<<"Armstrong";
                }
                else
                    {
                        cout<<"not armstrong";
                    }

}