#include <iostream>

using namespace std;

int main()
{
    int n,k;
    cin >> n;
    int *a=new int[n];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }

    for (int i=0;i<n;i++){
        if(a[i]>=0){
          cout<<" Answer = True or 1 or YESSSS " <<endl;
          k = 1;
          break;
        }
    }
      if (k != 1){
         cout<<"Lose or -1 or FU"<<endl;
        }

}
