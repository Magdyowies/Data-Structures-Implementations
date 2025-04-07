#include <iostream>
using namespace std;
const int MAX=10000;
struct Queue{
int queue_arr[MAX];
int Front=0,added=0,rear=0;
void add_end(int value){
if (MAX>rear){
        queue_arr[rear]=value;
    rear++;
    added++;
}
else{
    cout<<"The queue is full now ";
}
}
void add_front(int value){
if (Front>0){
    Front--;
    queue_arr[Front]=value;
    added++;

}else cout<<"The front is full now";
}

int remove_front(){
if (Front<rear){
    int value = queue_arr[Front];
    Front++;
    added--;
    return value;
}
return -1;
}

void print_queue_elements(){
for (int i=Front;i<added;i++){
        cout<<queue_arr[i]<< " ";

}
}
};
int main(){
Queue Q;
Q.add_front(10);
Q.add_end(18);
Q.add_end(50);
Q.add_end(90);
Q.add_front(20);
Q.print_queue_elements();
}
