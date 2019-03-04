#include <iostream>

using namespace std;

int main()
{
    int n,k=0,M;
    cin >> n;
    int *a=new int[n];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>M;
    for (int i=0;i<n;i++){
        if (a[i]>M){
            a[i]=M;
            k++;
        }
    }

    for (int i=0;i<n;i++){
        if (a[i]>M){
            a[i]=M;
            k++;
        }
        cout<<a[i]<<" ";
    }
    cout<<"\n"<<k;
}
