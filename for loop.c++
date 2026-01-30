/*enter code to use (for loop) do it: (largest number , smaller number , 
repeat number , sum even position , sum odd position , number of digits , 
sum odd , sum even , even numbers, odd numbers)
---------------------------------------------------------------*/
#include<iostream>
using namespace std;
int main(){
int num,largest=0,smaller=9,sumEvenPos=0,sumOddPos=0,
numbers=0,dig=0,sumOdd=0,sumEven=0,oddno=0,evenno=0;
int repeat[10]={0};
cout<<"Enter a number: ";
cin>>num;
for(int i=1;num>0;i++){
dig=num%10;
numbers++;
if(i%2==0){
    sumEvenPos+=dig;
}else{
    sumOddPos+=dig;
}
if(dig>largest){
    largest=dig;
}
if(dig<smaller){
    smaller=dig;
}
if(dig%2==0){
    evenno++;
    sumEven+=dig;
}else{
    oddno++;
    sumOdd+=dig;
}
repeat[dig]++;
num/=10;
}
cout<<"Numbers: "<<numbers<<endl;
cout<<"\nEven numbers: "<<evenno<<endl;
cout<<"Sum even position: "<<sumEvenPos<<endl;
cout<<"\nOdd numbers: "<<oddno<<endl;
cout<<"Sum odd position: "<<sumOddPos<<endl;
cout<<"\nLargest number: "<<largest<<endl;
cout<<"Smaller number: "<<smaller<<endl;
cout<<endl;
for(int i=0;i<10;i++){
    cout<<i<<" -> "<<repeat[i]<<endl;
}

    return 0;
}