#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *link;
};

void insertFront(node *header,int data);
void insertLast(node *header,int data);
void insertAt(node *header,int data, int index);
void insertBeforeValue(node *header,int data,int value);

//search index of value and search 
int searchIndexofValue(node *header, int data);
int value_ofIndex(node *header, int index);

// 
void  insertSortedOrder(node *header, int data);

//print
void printList(node *header);
  





int main(){
    node *header;
    header =(node*) malloc(sizeof(node));

    if(header == NULL){
        cout<<"Memory not avaliable";
        return 0;
    }
     
     header ->data = INT_MAX;
     header ->link = NULL;

// header-> link =header  circular

    int n; 
     cout<<"Enter node number : ";
    cin>>n;

    for(int i=0; i<n; i++)
    {
        int num = rand()% 1000;
        cout<<num<<" ";

        // insertLast(header,num);
        insertSortedOrder(header, num);
    }

    // cout<<endl;
    // cout<<value_ofIndex(header,3)<<endl;


    // int value,data;
    // cin>>data>>value;
    // insertBeforeValue(header, data, value);
    // searchIndexofValue(header,value);

    // cout<<value_ofIndex(header,3)<<endl;

    cout<<"\n Printing liklist "<<endl;
    printList(header);
    cout<<endl;

}



void printList(node *header){
     node *ptr = header->link;

     while(ptr != NULL){
        cout<<" -> " <<ptr->data;
        ptr= ptr ->link;
     }
     cout<<endl;
   
}





//header -newNode- n1 - n2- n3
void insertFront(node *header,int data)
{
     node *newNode = (node *)malloc(sizeof(node));
     
     
     if(header == NULL){
        cout<<"Memory not avaliable not excuated";
    }
    else 
    {
       newNode ->data = data;
       newNode ->link= header->link;
       header ->link= newNode; 
    }
     
}

//header - n1 - n2- n3-newNode
void insertLast(node *header,int data){

     node *ptr = header;
     while (ptr->link != NULL)
     {
      ptr =  ptr ->link;

     }
     

    node *newNode = (node *)malloc(sizeof(node));
     
     
     if(newNode == NULL){
        cout<<"Memory not avaliable not excuated";
    }
    else
    {
       newNode ->data = data;
       newNode ->link= ptr->link;
       ptr ->link= newNode;   
    }

}

//header - n1 - n2- newNode- n3-n4
void insertAt(node *header,int data, int index){
    node *ptr = header;
    int indexChack = -1;

     while (indexChack<index-1 && ptr->link != NULL)
     {
        indexChack ++;
      ptr =  ptr ->link;

     }
     if(indexChack +1 !=index){
        cout<<"Out of bound"<<endl;
     }

     else {
        node *newNode = (node *)malloc(sizeof(node));
     
        if(newNode == NULL){
            cout<<"Memory not avaliable not excuated";
            }
            else
            {
            newNode ->data = data;
            newNode ->link= ptr->link;
            ptr ->link= newNode;   
            }

     }
     
}

//header - n1 - n2- newNode- n3-n4
int searchIndexofValue(node *header, int data)
    {
         node *ptr = header->link;
         int index = 0; 

         while( ptr->data != data  && ptr != NULL ){
            index++;
            ptr= ptr->link;
         }
         if(ptr ->data == data){
            return index;
         }
         else return -1;
    }

//header - n1 - n2- newNode- n3-n4
int value_ofIndex(node *header, int index){
    
         node *ptr = header->link;
         int i = 0; 

         do{
            if(ptr == NULL){
                cout<<"Array out of bound or rempty list";
                return -9999; //return error condition
            }
            else
            {
                ptr= ptr ->link;
                i++;
            }
         }
         while(i != index);

         return ptr->data;
}


void insertBeforeValue(node *header,int data,int value){

    int index = searchIndexofValue(header,value);
    insertAt(header, data, index);

    
}



void  insertSortedOrder(node *header, int data){

       node * ptr = header->link;
       node *pred;
       node *newNode = (node *)malloc(sizeof(node));

       if(ptr == NULL || ptr->data < data )
       
       {
            newNode->data = data;
            newNode->link= ptr;
            header->link= newNode;
        }
       else {

        pred = header;

        while(ptr != NULL && ptr->data < data)
        {
            pred = ptr;
            ptr =  ptr ->link;
        }

        newNode->data = data;
        newNode->link= ptr->link;
        pred->link= newNode;

       }

}


  