#include<iostream>
using namespace std;
void arry(){
int arr [4];
cout<<"Enter 4 number for arry:";
for (int i = 0;i<4;i++){
    cin>>arr[i];
}
for (int i=0;i<4;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
int sum =0;
float avg=0;
for (int i= 0;i<4;i++){
    sum = sum+arr[i];
}
avg= float(sum)/4;
cout<<"sum of this array:"<<sum<<endl;
cout<<"Average of this array:"<<avg<<endl;
}
int main(){

arry();
return 0;

}
