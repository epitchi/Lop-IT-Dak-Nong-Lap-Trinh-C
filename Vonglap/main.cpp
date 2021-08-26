#include <iostream>

using namespace std;

int main()
{
    /// Tinh tong cac so tu 1, nhung tong phai be hon N
    // dap an: result
    int s,t,res,n; // khai bao cho s, t, res va n la kieu so nguyen
    s = 0;
    t = 0;
    cout<<"Nhap vao N: ";
    cin>>n; // nhap vao N tu ban phim
    /// vong lap
    /// while: trong khi
    while (s < n)
    {
        t = t + 1;
        /// if else
        s = s + t;
    }
    res = s - t;
    cout<<"Dap an la:"<<res;
    return 0;
}
