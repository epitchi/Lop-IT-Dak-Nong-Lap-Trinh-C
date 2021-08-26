#include <iostream>

using namespace std;

int main()
{
    int n, s;
    s = 0;

    /// Tinh tong tu 1 den N, voi N duoc
    /// nhap tu ban phim
    cin>>n;

    int i = 1;
    while (i <= n){
        s+=i*i;

        i++;
    }
    cout<<s;

  //  for (int i = 1; i<=n; i++){
  //      s += i;
  //  }
  //  cout<<s;


    return 0;
}
