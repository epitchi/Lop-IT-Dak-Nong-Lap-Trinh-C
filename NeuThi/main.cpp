#include <iostream>

using namespace std;

int main()
{
    int n, i, s;
    s = 0;
    cin>>n;
    i = 1;
    while(i <= n)
    {
        s+=i; /// s = s + i;
        i++; /// i = i + 1;
    }
    cout<<"Dap an la: "<<s;

    /// voi for
    for (i = 1; i <= 5; i++)
        s+=1;

    // N = 5
    if (n > 5)
    {
        //statements voi N = 6,7,8,9....
    }
    else if (n == 5){
        //statements voi N = 5;
    }
    else {
        //statements voi N 4,3,2,1,....
    }


    return 0;
}
