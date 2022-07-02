

#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <stack>
#include <cmath>

using namespace std;


void printVector(vector<int> asd){
    for(int i=0;i<asd.size();i++){
        cout<<asd.at(i)<<" ";
    }
    cout<<endl;
}
//not to fast
/*
    Runtime: 2536 ms, faster than 5.18% of C++ online submissions for Pow(x, n).
    Memory Usage: 6 MB, less than 43.02% of C++ online submissions for Pow(x, n).
    */
/*
double myPow(double x, int n) {
    long n2=n;
    if(x==1)
        return 1;
    else if(x==-1 && n2%2==0)
        return 1;
    else if(x==-1 && n2%2!=0)
        return -1;

    if(n2==0)
        return 1;
    else if(n2==-2147483648)
        return 0;
    else if(n2<0){
        x=1/x;
        n2=n2*-1;
    }
    double temp=1;
    for(int i=0;i<n2;i++){
        temp*=x;
    }
    return temp;
}
*/


/*
    Runtime: 0 ms, faster than 100.00% of C++ online submissions for Pow(x, n).
    Memory Usage: 5.9 MB, less than 79.93% of C++ online submissions for Pow(x, n).
 */
double myPow(double x, int n) {
    long n2=n;


    if(x==1)
        return 1;
    else if(x==-1 && n2%2==0)
        return 1;
    else if(x==-1 && n2%2!=0)
        return -1;

    if(n2==0)
        return 1;
    else if(n2==-2147483648)
        return 0;
    else if(n2<0){
        x=1/x;
        n2=n2*-1;
    }
    double temp=1;

    if (n2 % 2 == 0) {
        temp =  myPow(x, (int) n2 / 2);
        temp=temp*temp;
    }
    else {
        temp =   myPow(x, (int) n2 / 2) ;
        temp=temp*temp*x;
    }
    return temp;
}

 // Driver code
 int main()
 {
    cout<<myPow(2.0,10)<<endl;
    cout<<myPow(2.1,3)<<endl;
    cout<<myPow(2.0,-2)<<endl;
    cout<<myPow(2.0,-2147483648)<<endl;

    return 0;
 }


