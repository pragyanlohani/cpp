#include<bits/stdc++.h> 
using namespace std;


// w p that take an input of age and prints you are adult or not 

int main(){
 int n;
    cin >> n;

if (n>=18){
    cout<< "ypu are an adult ";
}else{
    cout<< "you are not an adult";
};
return 0;
}



// school marking


#include<bits/stdc++.h> 
using namespace std;


int main (){
    int marks ;
    cin >> marks ;
        
    if (marks < 25){
        cout << "f";
    }else if(marks >= 25 && marks <= 44 ){
        cout << "e";
    }else if (marks >= 44 && marks <= 59 ){
        cout<< "d";
    }
    return 0;
}

