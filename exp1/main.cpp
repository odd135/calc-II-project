//
//  main.cpp
//  exp1
//
//  Created by odd135 on 11/19/20.
//  Copyright © 2020 odd135. All rights reserved.
//
// Heeeyy this thing work
// yaay?
// try again

#include <iostream>
#include <array>
#include <string>
#include <cmath>

using namespace std;

void arraythings();
void polymorphthings();
void maclaurintest();
long factorial(long n);
long recursfact(long n);
double estimatee(double v, long n);

int main(int argc, const char * argv[]) {
//    arraythings();
//    cout<<factorial(3)<<endl;
//    cout<<recursfact(20)<<endl;
//    cout<<estimatee(4,20)<<endl;
    return 0;
}

void arraythings(){
    array<long,5> a={0};
    for(long i=0;i<a.size();i++){
        a.at(i)=i;
    }
    array<long,5>* b=&a;
    
    for(long i=0;i<a.size();i++){
        cout<<b->at(i)<<endl;
    }
}

void polymorphthings(){
    class laptop{
    private:
        string arch="x86";
        string model="";
        long ram=16;
    protected:
    public:
    };
    class dell: public laptop{
    public:
        string model="xps";
    };
}

void maclaurintest(){
    
}//empty for now

long factorial(long n){
    long t=0;
    for(;n>0;n--){
        t*=n;
    }
    return t;
}//determines factorial using loop

long recursfact(long n){
    return n>0?n*recursfact(n-1):1;
}//determines factorial using recursion

double estimatee(double v, long n){
    return n>0?(pow(v,n)/recursfact(n))+estimatee(v,n-1):1;
}//determines e to the v power using recursion, higher n means better accuracy
