#include<iostream>
using namespace std;
int main(){
int n,right=-1,now=-1,last,dig=0,count=0,peak=0;\
cout<<"Enter a number: ";
cin>>n;
for(;n>0;n/=10){
last=n%10;
dig++;
if(count>1){
    if(now>right&&now>last){
        peak++;
    }
}
right=now;
now=last;
count++;
}
cout<<"Digits: "<<dig<<endl;
cout<<"Peaks: "<<peak<<endl;


    return 0;
}