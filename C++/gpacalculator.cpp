#include<iostream>
#include<vector>
using namespace std;
int main(){

    vector<float> grades;
    vector<float> credit;
    float temp1,temp2;
    int numberOfSubjects;
    float gpa;

    cout<<"Enter the total number of subjects in your semester \n";
    cin>>numberOfSubjects;
    for(int i=0;i<numberOfSubjects;i++){
        cout<<"Enter the credit for subject "<<i+1<<"(i.e:0-4)"<<endl;
        cin>>temp1;
        credit.push_back(temp1);
        cout << "Enter the grade for subject " << i+1<<"(i.e:0-10)" << endl;
        cin >> temp2;
        grades.push_back(temp2);
    }
    temp1=0;
    temp2=0;
     for(int j=0;j<credit.size();j++){
        temp1=temp1+credit[j]*grades[j];
        temp2=temp2+credit[j];

         
     }
     gpa = temp1/temp2;
     cout<<"Your gpa for the current semester is "<<endl;
     cout<<gpa<<endl;
     if(gpa>8)
     {
        cout<<"Congrats you have a good gpa";
     }
     else {
        cout<<"Dont worry Study hard and Get Good marks in next exam";
     }


    return 1;
}