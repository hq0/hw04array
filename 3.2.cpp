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
    for (int i=0;i<n;i++){
        if(a[i]<a[i+1]){
            k++;
        } else {
            if (k>maxk){
                maxk=k;
            } else if (k<maxk){
                k=1;
            } else {
            break;
            }
            k=1;
        }
    }
    cout<<maxk;
}
