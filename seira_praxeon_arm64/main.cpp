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
    cout<<"order makes some difference\n";
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
                            cout<<"using '+' " << rst << " ::== " << xrt << " + " << x << " --> ";
                            rst=xrt+x;
                            cout<<"current rst ::== "<<rst <<"\n";
                            goto A;
                        }
       if(ar_pr[i]=='-'){
                            cout<<"using '-' " << rst << " ::== " << xrt << " - " << x << " --> ";
                            rst=xrt-x;
                            cout<<"current rst ::== "<<rst <<"\n";
                            goto A;
                        }
       if(ar_pr[i]=='*'){
                            cout<<"using '*' " << rst << " ::== " << xrt << " * " << x << " --> ";
                            rst=xrt*x;
                            cout<<"current rst ::== "<<rst <<"\n";
                            goto A;
                        }
       if(ar_pr[i]=='/'){
                            cout<<"using '/' " << rst << " ::== " << xrt << " / " << x << " --> ";
                            rst=xrt/x;
                            cout<<"current rst ::== "<< rst <<"\n";
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
    long long int gnr[3];
    kri=xri+mri-x;
    cout<<"of " << xri <<" + " << mri << " - " << x << " ::== " << kri <<"\n";
    gnr[0]=kri;
    cout << " ----> possible -1 \n";
    cout<<"\n";
    cout<<"\n";
    kri=x+mri-xri;
    cout<<"of " << x << " + " << mri << " - " << xri <<" ::== " << kri <<" \n";
    cout<<" ------------> similar to '/+*-' with -1 contains same values  \n";
    cout<<"\n";
    cout<<"\n";
    long long int rxt;
    long long int xrti;
    long long int xt[3];
    kri=xri-mri-x;
    cout<<"of " << xri <<" - " << mri << " - " << x << " ::== " << kri <<"\n";
    xt[0]=abs(kri);
    kri=x+xri-mri;
    cout<<"with " << x << " + " << xri << " - " << mri <<" ::== " << kri <<" || ";
    gnr[1]=abs(kri);
    xt[1]=abs(kri);
    cout<<"\n";
    if(xt[0]>xt[1]){
                    rxt=xt[0]-xt[1];
                    cout<<xt[0] << " - " << xt[1] << " ::== " << rxt <<" --> ";
                    xrti=rxt / 2;
                    cout<<rxt << " / " << " 2 " << " ::== " << xrti <<"\n";
                   }
    if(xt[1]>xt[0]){
                    rxt=xt[0]-xt[1];
                    cout<<xt[0] << " - " << xt[1] << " ::== " << rxt <<" --> ";
                    xrti=rxt / 2;
                    cout<<rxt << " / " << " 2 " << " ::== " << xrti <<"\n";
                   }
    if(gnr[0]>gnr[1]){
                     rxt=gnr[0]-gnr[1];
                     cout<<gnr[0] << " - " << gnr[1] << " ::== " << rxt <<"\n";
                     }
    if(gnr[1]>gnr[0]){
                     rxt=gnr[1]-gnr[0];
                     cout<<gnr[0] << " - " << gnr[1] << " ::== " << rxt <<"\n";
                     }
    return 0;
}
