#include <iostream>
using namespace std;
bool bi_n(int *c,int n,int key){
    int l=0,r=n-1;
    while(l<=r){
        int mid=(l+r)/2;
        if(c[mid]==key)
        return true;
        else if(c[mid]>key)
        r=mid-1;
        else {
        l=mid+1;
        }
    }
    return false;
}
void missingNumbers(int a[], int b[]) {
    int k[3],j=0;
    for(int i=0;i<4;i++){
        if(bi_n(b,3,a[i])){
        k[j]=a[i];
        j++;
        }
        cout<<k[j]<<endl;


    }
}

int main()
{
    int a[4]={1,2,3,4};
    int b[3]={2,3,4};
    missingNumbers(a,b);
    return 0;
}
