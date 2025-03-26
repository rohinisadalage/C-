//w.a.cpp. code to print the percentage of 5 subject marks
#include <iostream>
using namespace std;
int main()
{
    int marathi, hindi, english, science, history;
    float per,total;
    cout<<"Enter the Marathi subject Marks: ";
    cin>>marathi;
    cout<<endl<<"Enter the English subject Marks: ";
    cin>>english;
    cout<<endl<<"Enter the Hindi subject Marks: ";
    cin>>hindi;
    cout<<endl<<"Enter the History subject Marks: ";
    cin>>history;
    cout<<endl<<"Enter the Science subject Marks: ";
    cin>>science;
    total=marathi + hindi + history + english + science;
    cout<<"Total of the five Subject marks are: "<<total<<endl;
    per=(total/500)*100;
    cout<<"The percentage of the Student is: "<<per<<endl;
    cout<<"Thank You...!";
    return 0;
}