#include<bits/stdc++.h>

// void fuction ----------> dosent return anything

using namespace std;
void printName (){
    cout << "hi ";
};
int main(){
   printName();
  
    return 0;
}


// parameter 


using namespace std;
void printName (string name){
    cout << name ;
};
int main(){
    string name;
    cin >>name;
   printName(name);
  
    return 0;
}

// take two num and print sum 
 int sum (int num1 ,int num2);
 int num3 = num1 + num2;
  return num3;

int main(){
int num1 ,num2 ;
cin >> num1 >>num2;
int rest = sum(num1,num2);
cout << rest;

    return 0;
}
