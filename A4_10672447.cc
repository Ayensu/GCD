#include <iostream>

using namespace std;

int main()
{
    int numb1,numb2,gcd,c;
    cout << "ENTER YOUR FIRST NUMBER" << endl;
    cin>>numb1;
    cout<<"ENTER YOUR SECOND NNUMBER"<<endl;
    cin>>numb2;
    if(numb1>numb2)
        c=numb1;
    else
        c=numb2;
    for(int i=c; i>0; i--){
        if(numb1%i==0 && numb2%i==0){
            gcd=i;
        cout<<"THE GREATEST COMMON DIVISOR OF " <<numb1<< " AND " <<numb2<< " IS " <<gcd<<endl;
        break;}
    }
    return 0;
}
