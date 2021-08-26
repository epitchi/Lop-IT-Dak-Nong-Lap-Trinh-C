#include <iostream>

using namespace std;
int main()
{
    int n, s;
    cin>>n;
    s = 0;
   /*int i = 0;
    while(i <= n){
        if(i % 2 == 0){
            s = s + i;
        }
       i = i + 1;
    } */
    for (int i = 0; i <= n; i++){
        if(i % 2 == 0){
            s+=i;
        }
    }
    /// s = s + i; s +=i;
    /// i = i + 1; i +=1; i++;

    cout<<s;


    return 0;
}
