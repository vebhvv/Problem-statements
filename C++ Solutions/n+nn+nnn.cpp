#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter an integer :: ";
    cin>>n;
    string strn = to_string(n);
    string strn1 = strn + strn;
    string strn2 = strn + strn + strn;
    int intn1 = stoi(strn1);
    int intn2 = stoi(strn2);
    int res = n + intn1 + intn2;
    cout<<"The value of "<<strn<<" + "<<strn1<<" + "<<strn2<<" = "<<res;
    return 0;
}
