#include<iostream>  
#include<fstream>
#include<cstring>
using namespace std;
string input_data_with_spaces() 
{
    string input;
    getline(cin,input);
	return input;
}
int main()
{
    int i,n;   
    ofstream datafile("Students_List.csv");    
    cout<<"----------Writing data to file----------";
    cout<<"\n\nEnter the number of students data want to enter: ";
    cin>>n;
    string name[n],reg[n],remark[n];
    string mark_obt[n];
    cin.ignore();
    datafile<<"Registration number"<<","<<"Name of the Student"<<","<<"Mark Obtained"<<","<<"Remark";
    for(i=0;i<n;i++)
    {
        cout<<"\n\nDetails of student "<<i+1;
        cout<<"\nEnter the registration number: ";
        reg[i]=input_data_with_spaces();
        cout<<"\nEnter the name of the student: ";
        name[i]=input_data_with_spaces();
        cout<<"\nEnter total mark obtained out of 100: ";
        mark_obt[i]=input_data_with_spaces();
        cout<<"\nEnter the remark: ";
        remark[i]=input_data_with_spaces();
        datafile<<"\n"<<reg[i]<<","<<name[i]<<","<<mark_obt[i]<<","<<remark[i];
    }
    cout<<"\n\nData is saved in Student_list file!!!";  
    datafile.close();
    return 0;
}
