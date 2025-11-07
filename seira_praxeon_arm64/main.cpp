#include <iostream>
#include <iomanip>
#include "math.h"
using namespace std;

int main(int argc,char** argv)
{
    long long int x;
    char ar_pr[4];
    cout<<"enter number , simvolo praxis 1,2,3,4  kollimena dld *-/+ se seira pou thelete \n";
    cout<<"eg 2785 */-+ or 78895621 -*/+ \n";
    cout<<"it serialize four actions in a sequencial order without the use of parenthesis \n";
    cout<<"non viable or viable \n";
    x=stoll(argv[1]);
    ar_pr[1]=argv[2][0];
    ar_pr[2]=argv[2][1];
    ar_pr[3]=argv[2][2];
    ar_pr[4]=argv[2][3];
    char ck;
    long long int rst=0;
    long long int frst;
    long long int xrt;
    xrt=x;
    cout<<"\n";
    for(int i=1;i<=4;i++){
       if(ar_pr[i]=='+'){
                            cout<<"using + " << rst << " " << xrt <<" --> ";
                            rst=xrt+x;
                            cout<<"current rst + ::== "<<rst <<"\n";
                            goto A;
                        }
       if(ar_pr[i]=='-'){
                            cout<<"using - " << rst << " " << xrt <<" --> ";
                            rst=xrt-x;
                            cout<<"current rst - ::== "<<rst <<"\n";
                            goto A;
                        }
       if(ar_pr[i]=='*'){
                            cout<<"using * " << rst << " " << xrt <<" --> ";
                            rst=xrt*x;
                            cout<<"current rst * ::== "<<rst <<"\n";
                            goto A;
                        }
       if(ar_pr[i]=='/'){
                            cout<<"using / " << rst << " " << xrt <<" --> ";
                            rst=xrt/x;
                            cout<<"current rst / ::== "<<rst <<"\n";
                            goto A;
                        }
       A: xrt=rst; //if(xrt==0){xrt=x;}
    }
    cout<<"\n";
    cout<<"final result set  " << rst <<"\n";


    cout<<"using parenthesis \n";
    long long int xri;
    xri=(x/x);
    long long int mri;
    mri=(x*x);
    long long int kri;
    kri=x+xri-mri;
    cout<<"of " << x << " + " << xri << " - " << mri <<" ::== " << kri <<"\n";
    kri=x+mri-xri;
    cout<<"of " << x << " + " << mri << " - " << xri <<" ::== " << kri <<"\n";
    cout<<"similar to '/+*-' with -1 \n";

    return 0;
}
