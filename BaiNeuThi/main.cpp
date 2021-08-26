#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Nhap vao N: ";
    cin>>n;
    if (n > 10)
        cout<<"N duoc nhap tu ban phim lon hon 10";
    else if(n < 10)
        cout<<"N duoc nhap tu ban phim be hon 10";
    else
        cout<<"N duoc nhap tu ban phim bang 10";
    return 0;
}
