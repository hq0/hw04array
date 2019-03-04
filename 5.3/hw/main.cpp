#include <iostream>

using namespace std;

int main()
{
    int n,k=0,maxk=0;
    cin >> n;
    int *a=new int[n];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }

    for (int i=0;i<n;i++){
        for (int j=2;j<=a[i];j++){
            if(a[i]%j==0){
                k++;
            }
        }
        if (a[i]==1) cout<<a[i]<<" ";
        if(k==1){
            cout<<a[i]<<" ";
        }
        k=0;
    }
}
