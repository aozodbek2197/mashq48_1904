// 1-mashq
#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v={1,2,3};
    do{
        for(int x:v) cout<<x;
        cout<<"\n";
    }while(next_permutation(v.begin(),v.end()));
}
// 2-mashq
#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v={1,2,3};
    for(int i=0;i<v.size();i++)
        for(int j=i+1;j<v.size();j++)
            cout<<v[i]<<","<<v[j]<<"\n";
}
