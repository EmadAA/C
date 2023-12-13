#include<iostream>//Preprocessor Command/Detector

using namespace std ;// Using Declaration
#define size  5;
int N;
char Queue(int N);
int REAR= -1;
int FRONT=-1 ;

    void pop()
{
    if(FRONT==-1)
    {
        cout<<"Underflow"<<endl;
        exit(1);
    }
    cout<<Queue[FRONT]<<"is deleted"<<endl;
    if(FRONT == REAR)
    {
        FRONT =-1;
        REAR =-1;
    }
    else if(FRONT==N-1)
    {
        FRONT =0;
    }
    else
    {
        FRONT++;
    }
}


void push(char ch)
{
    if ((FRONT == 0 && REAR ==N-1)||(FRONT = REAR +1))
    {
        cout<<"Overflow"<<endl;
        exit(1);
    }

    if(FRONT ==-1 && REAR == -1)
    {
        FRONT++;
        REAR++;
    }
    else if(REAR==N-1)
    {
        REAR=1 ;

    }
    else
    {
        REAR++;

    }
    Queue[REAR] = ch; //PUSH
}

void QTraverse()
{
    for(int i= FRONT)
    {
        cout<<Queue[i]<<" ";
        if(i==REAR) break;

        if(i==N-1)
        {
            i =0 ;
        }
        else
        {
            i++ ;
        }
    }
    cout<<endl;
}
int main() //main function
{
    push('A');
    push('B');
    push('C');

    QTraverse();
    push('D');
    QTraverse();
    pop();
    pop();
    QTraverse();


    return 0;// means program successfully executed

}
