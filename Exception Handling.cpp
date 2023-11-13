#include <iostream>
using namespace std;

int main(){
    try{
        int dadage = 55;
        int sonage = 32;

        if(sonage > dadage){
            throw 100;
        }

    }catch(int x){
    cout << "Never too old to be in dad's shoes kid!!! Error No: " << x << endl;
    }
}


/*
- Exception is a way of handling an error
that might occur when your program is running.

- You have a program which takes a certain
data type as an input, and whenever something
other than that certain data type is passed into
it, it throws an error which you handle in a certain way
called exception.

- try block

- catch block

- catch block takes in a parameter

- in this example that parameter is thrown by try block


*/
