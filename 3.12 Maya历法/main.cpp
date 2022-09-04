#include <bits/stdc++.h>
using namespace std;

int turnHaab(string s)
{
    if(s=="pop") return 20;else if(s=="no") return 40;else if(s=="zip") return 60;else if(s=="zotz") return 80;
    else if(s=="tzec") return 100;else if(s=="xul") return 120;else if(s=="yoxkin") return 140;else if(s=="mol") return 160;
    else if(s=="chen") return 180;else if(s=="yax") return 200;else if(s=="zac") return 220;else if(s=="ceh") return 240;
    else if(s=="mac") return 260;else if(s=="kankin") return 280;else if(s=="muan") return 300;else if(s=="pax") return 320;
    else if(s=="koyab") return 340;else if(s=="cumhu") return 360;else if(s=="uayet") return 365;
}

string turnTzo(int n)
{
    if(n==1) return "imix";else if(n==2) return "ik";else if(n==3) return "akbal";else if(n==4) return "kan";
    else if(n==5) return "chicchan";else if(n==6) return "cimi";else if(n==7) return "manik";else if(n==8) return "lamat";
    else if(n==9) return "muluk";else if(n==10) return "ok";else if(n==11) return "chuen";else if(n==12) return "eb";
    else if(n==13) return "ben";else if(n==14) return "ix";else if(n==15) return "mem";else if(n==16) return "cib";
    else if(n==17) return "caban";else if(n==18) return "eznab";else if(n==19) return "canac";else if(n==20) return "ahau";
}

int main()
{
    int n; cin>>n;
    while(n--)
    {
        string putstring;int HaabYear; cin>>putstring>>HaabYear;
        int p = putstring.find(".");
        string strday=putstring.substr(0,p);
        string HaabMonth = putstring.substr(p+1);
        int Haabday;
        stringstream ss;
        ss << strday;
        ss >> Haabday;
        int allDay = HaabYear*365+turnHaab(HaabMonth)-20+Haabday;
        int TzoYear = allDay/260; int leftDay = allDay - TzoYear*260;
        int Tzonum = leftDay%13+1;
        int Tzostr = leftDay%20+1;
        string strTzo = turnTzo(Tzostr);
        cout<<Tzonum<<" "<<strTzo<<" "<<TzoYear<<endl;
    }
    return 0;
}

