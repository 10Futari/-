#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<char,char> m;
    m['A']='V';m['B']='W';m['C']='X';m['D']='Y';m['E']='Z';m['F']='A';m['G']='B';m['H']='C';
    m['I']='D';m['J']='E';m['K']='F';m['L']='G';m['M']='H';m['N']='I';m['O']='J';m['P']='K';
    m['Q']='L';m['R']='M';m['S']='N';m['T']='O';m['U']='P';m['V']='Q';m['W']='R';m['X']='S';
    m['Y']='T';m['Z']='U';m[' ']=' ';m[',']=',';m['.']='.';m['?']='?';
    string s,e,put;
    while(cin>>s&&s!="ENDOFINPUT")
    {
        getchar();
        char ch;
        while((ch = getchar()) != '\n')
        {
            cout<<m[ch];
        }
        cout<<endl;
        cin>>e;
    }
    return 0;
}
