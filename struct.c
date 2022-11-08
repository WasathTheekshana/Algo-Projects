////#include<stdio.h>
////
////struct myStack{
////    int myarray[5];
////    int top; //error 1
////}st;
////
////void push(int ele){ //error 2
////    st.top++;
////    st.myarray[st.top]=ele; //error 3
////    printf("Item Added to index %d\n", st.top);
////}
////
////int pop(int ele){ //error 4
////    int out=st.myarray[st.top]; //error 5
////    printf("popped out item at index %d", st.top);	//error 6
////    return out;
////}
////
////int main(){	//error 7
////     push(10);
////     push(20);
////     push(30);
////     pop(25);
////    return 0;
////
////}
//
//#include <stdio.h>
//
//int array[5];
//int rear;
//int front;
//
//
//// Circular Queue implementation in C
//
//#include <stdio.h>
//
//#define SIZE 5
//
//int items[SIZE];
//int front = -1, rear = -1;
//
//// Check if the queue is full
//int isFull() {
//    if ((front == rear + 1) || (front == 0 && rear == SIZE - 1)) return 1;
//    return 0;
//}
//
//// Check if the queue is empty
//int isEmpty() {
//    if (front == -1) return 1;
//    return 0;
//}
//
//// Adding an element
//void enQueue(int element) {
//    if (isFull())
//        printf("\n Queue is full!! \n");
//    else {
//        if (front == -1) front = 0;
//        rear = (rear + 1) % SIZE;
//        items[rear] = element;
//        printf("\n Inserted -> %d", element);
//    }
//}
//
//// Removing an element
//int deQueue() {
//    int element;
//    if (isEmpty()) {
//        printf("\n Queue is empty !! \n");
//        return (-1);
//    } else {
//        element = items[front];
//        if (front == rear) {
//            front = -1;
//            rear = -1;
//        }
//            // Q has only one element, so we reset the
//            // queue after dequeing it. ?
//        else {
//            front = (front + 1) % SIZE;
//        }
//        printf("\n Deleted element -> %d \n", element);
//        return (element);
//    }
//}
//
//// Display the queue
//void display() {
//    int i;
//    if (isEmpty())
//        printf(" \n Empty Queue\n");
//    else {
//        printf("\n Front -> %d ", front);
//        printf("\n Items -> ");
//        for (i = front; i != rear; i = (i + 1) % SIZE) {
//            printf("%d ", items[i]);
//        }
//        printf("%d ", items[i]);
//        printf("\n Rear -> %d \n", rear);
//    }
//}
//
//int main() {
//    // Fails because front = -1
//    deQueue();
//
//    enQueue(1);
//    enQueue(2);
//    enQueue(3);
//    enQueue(4);
//    enQueue(5);
//
//    // Fails to enqueue because front == 0 && rear == SIZE - 1
//    enQueue(6);
//
//    display();
//    deQueue();
//
//    display();
//
//    enQueue(7);
//    display();
//
//    // Fails to enqueue because front == rear + 1
//    enQueue(8);
//
//    return 0;
//}
//
//
////ajsfkljasdklfjalsdjfkasdjfklasdkfskdfjkldsjfkljsdfkljasdklfkadsjfkl


#include <stdio.h>

int main(){
    int arr[5] = {10,2,5,6,1}, sk, count=0;

    printf("Enter number that you want to search");
    scanf("%d",&sk);

    for (int i = 0; i < 5 ++i) {

    }
    if (arr[count] == sk){
        printf("Item you search is i this array %d", arr[count]
    } else

}