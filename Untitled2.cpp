#include<iostream>//Preprocessor Command/Detector

using namespace std ;// Using Declaration
struct Queue
{
    char ch;
    Queue *next;
}

Queue *FRONT= NULL, *REAR = NULL;

void pop(){
if(FRONT == NULL){
    cout<<"Underflow"<<endl;
    exit(1);
    }
    FRONT =FRONT -> next;
}

void push(char let)
{
    Queue *qNode= new Queue;
    if(qNode==NULL)
    {
        cout<<"Overflow"<<endl;
        exit(1);
    }

    qNode->ch = let;
    qNode -> next =NULL;


    if(FRONT ==NULL && REAR ==NULL)
    {
        FRONT = qNode;
        REAR= qNode;
    }
    else
    {
        REAR -> next= qNode;
        REAR = qNode;

    }

}


void QTraverse()
{
   Queue *PTR = FRONT;
   while(PTR != NULL){
    cout<<PTR->ch <<" ";
    PTR =PTR -> next ;
   }
    cout<<endl;
}


int main() //main function
{
    push('A');
    push('D');
    push('I');
    push('L');


    popo();


    return 0;// means program successfully executed

}
