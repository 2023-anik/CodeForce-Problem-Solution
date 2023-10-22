#include<bits/stdc++.h>
using namespace std;

int main(){
    string year;
    cin>>year;
    int year2 = stoi(year);
    while(true){//true or 1
        year2 += 1;
        string year3 = to_string(year2);
        if(year3[0]!=year3[1] && year3[0]!=year3[2] && year3[0]!=year3[3] && year3[1]!=year3[2] && year3[1]!=year3[3] && year3[2]!= year3[3]){
            break;
        }
    }
    cout<<year2<<endl;
    return 0;
}