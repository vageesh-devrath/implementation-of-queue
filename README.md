# queue
## Aim:-Implementation of queue.
### Theory:-
        Queue is an abstract data structure, somewhat similar to Stacks. Unlike stacks, a queue is open at both its ends. One end is always used to insert data (enqueue) and the other is used to remove data (dequeue). Queue follows First-In-First-Out methodology, i.e., the data item stored first will be accessed first.
        basic operations associated with queues −
                  1)enqueue() − add (store) an item to the queue.
                  2)dequeue() − remove (access) an item from the queue.
#### Algorithm:-
            1)Start
            2int items[SIZE],rear=-1,front=-1;
            3)int push(int x){
                      if(top==size-1){printf("Queue Full");}
	                    else{top++;items[top]=x;}}
            4)int pop(){
                      if(front==-1){printf("Queue Empty");}
                      else{items[front]=0;rear--;}}
            5)void display(){"Statements"}
            6)int main(){int ch,v,flag=0;
                        while(flag==0){scanf("%d",&ch)};
                        switch(ch){"Statements"}
            7)End
##### Conclusion:-
		From this c program we learnt how to implement a stck in the form of c program.
