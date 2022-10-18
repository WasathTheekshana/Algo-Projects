#include<stdio.h>

struct myStack{
    int myarray[5];
    int top; //error 1
}st;

void push(int ele){ //error 2
    st.top++;
    st.myarray[st.top]=ele; //error 3
    printf("Item Added to index %d\n", st.top);
}

int pop(int ele){ //error 4
    int out=st.myarray[st.top]; //error 5
    printf("popped out item at index %d", st.top);	//error 6
}

int main(){	//error 7
     push(10);
     push(20);
     push(30);
     pop(25);
    return 0;

}

