#include<iostream>
using namespace std;
int main(){
float tempF,tempC;
cout<<"enter temp in farenheit:";
cin>>tempF;
tempC=(tempF-32)*5/9;
cout<<"temp in celcius:"<<tempC;
return 0;
}
