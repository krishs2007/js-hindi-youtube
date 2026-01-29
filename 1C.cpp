#include <bits/stdc++.h>
// using namespace std;
// #define JAY ios_base::sync_with_stdio(false);
// #define SHREE cin.tie(0);
// #define KRISHNA cout.tie(0);
// #define ll long long
// #define yes cout<<"YES"<<"\n";
// #define no cout<<"NO"<<"\n";
// int main() {
//     JAY SHREE KRISHNA
//     double x1,y1,x2,y2,x3,y3;
//     cin>>x1>>y1>>x2>>y2>>x3>>y3;
//     double a=sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3));
//     double b=sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
//     double c=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
//     double s=(a+b+c)/2;
//     double areaT=sqrt(s*(s-a)*(s-b)*(s-c));
//     double R=a*b*c/(4*areaT);
//     double A=acos((b*b+c*c-a*a)/(2*b*c));
//     double B=acos((a*a+c*c-b*b)/(2*a*c));
//     double C=acos((a*a+b*b-c*c)/(2*a*b));

//     double pi=acos(-1);
//     int n=0;
//     for(int i=3;i<=100;i++){
//         double ang=2*pi/i;
//         if(fabs(fmod(A,ang))<1e-4 || fabs(fmod(A,ang)-ang)<1e-4)
//         if(fabs(fmod(B,ang))<1e-4 || fabs(fmod(B,ang)-ang)<1e-4)
//         if(fabs(fmod(C,ang))<1e-4 || fabs(fmod(C,ang)-ang)<1e-4){
//             n=i;
//             break;
//         }
//     }

//     double area=n*R*R*sin(2*pi/n)/2;
//     cout<<fixed<<setprecision(6)<<area;
//     return 0;
// }
#include <unordered_set>
#include <iostream>
using namespace std;

int main() {
    multiset<int> ums = {5, 1, 4, 3,7,5};
    for (int x : ums) cout << x << " ";
    // Output: order may vary, e.g., 5 1 3 5
}
