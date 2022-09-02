/* 
 * File:   main.cpp
 * Author: Andrew Kopf
 * StudentNumber: 2552140
 * Section: 48309
 * Course: CSC-7
 * Lab: XOR_Equivalence Truth Table
 *
 * Created on September 2, 2022, 3:17 AM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * Truth Table for various yes/no conditions and checks 
 */
char ntl(bool x); // Function to turn number to letter, defined after main.

int main(int argc, char** argv) {
    bool p = false;
    bool q = false;
    bool tmp = false;  //Tmp bool to hold answer to compare operations
    int cntP;
    int cntQ;
    //Initial line provided by Dr. 
    cout<<"p q   p||(p&&q)   p&&(p||q)"<<endl;
    for (cntP = 1; cntP>=0;cntP--) {
        p=cntP;
        for (cntQ = 1; cntQ>=0;cntQ--) {
            q = cntQ;
            cout << ntl(p) << " " << ntl(q); // Values
            cout << "       " << ntl(tmp=p||(p&&q)); //p and q are true & p or q are true values
            cout << "           " << ntl(tmp=p&&(p||q)); //p does not equal q


            cout <<endl; //(next pair of P and Q)
        }
    }
                
                    
    return 0;
}

//Change a number into a letter
char ntl(bool x){
    if (x){
        return 'T';
    }
    else{
        return 'F';
    }
}