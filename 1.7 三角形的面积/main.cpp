#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<double> v;
    while(1)
    {
        double x1,y1,x2,y2,x3,y3;
        cin>>x1>>y1>>x2>>y2>>x3>>y3;
        if(x1==0 && y1 == 0 && x2 == 0 && y2 == 0 && x3 == 0 && y3 == 0 )
        {
            goto loop;
        }
        v.push_back(abs(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2))/2) ;
    }
    loop: for(int j=0;j<v.size();j++)  cout<<fixed<<setprecision(6)<<v[j]<<endl;
}
