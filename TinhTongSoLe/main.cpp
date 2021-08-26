#include <iostream>

using namespace std;

int main()
{
    /// Tinh tong cac so le tu 1 -> N
    /// Viet theo 2 cach la for va while

    /// Nhap vao N = 10, Ket qua: 25
    /// Nhap vao N = 7, ket qua la: 16

    int n, s;

    cout<<"Nhap vao N: ";
    cin>>n; /// N = 3

    for (int i = 0; i <= n; i++){
        if(i % 2 == 1)
            s+=i; /// viet tat cua s = s + i;
    }
    cout<<"Dap an la: "<<s;


    /// i = i + 1; tang i len 1 gia tri
    /// i++;
    /// i+=1;

    /// while
   // s = 0;
   // int i = 0; /// i -> N :0 1 2 3 4 5 ... N, comment
  //  while (i <= n){ // trong khi i be hon bang N
  //      if (i % 2 == 1) // neu i ma chia cho 2 du 1, thi la so le
   //         s = s + i;  // tong vao cac so thoa man dieu kien tren

   //     i = i + 1; // tang len i mot gia tri
   // }
   // cout<<"Dap an la: "<<s;

    return 0;
}
