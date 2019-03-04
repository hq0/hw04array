#include <iostream>

using namespace std;
//1 2 3 3 4 5 5 5 5 5 5 6 7 8 9 10 1 2 2 3
int main()
{
    int n,k=1,maxk=0;
    cin >> n;
    int *a=new int[n];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    int max = a[0];

    for (int i=0;i<n;i++){
        if(a[i]>max) max=a[i];
    }
    for (int i=0;i<n;i++){
        if (max == a[i]) {a[i] = 0;}
    }

    for (int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
