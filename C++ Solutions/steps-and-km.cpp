#include<iostream>
using namespace std;
int main(){
    int choice, data, steps, kms, run =1;
    while(run){
        cout<<"\nSelect any option from below"<<endl;
        cout<<"\t1. Steps to KMs"<<endl;
		cout<<"\t2. KMs to Steps"<<endl;
		cout<<"\t3. Exit the program\n"<<endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout<<"\tEnter no. of steps"<<endl;
            cin>> steps;
            cout<<"\tNearly between "<<(int)(steps/1.43)<<" and "<<(int)(steps/1.39)<<" metes."<<endl;
            break;
        case 2:
            cout<<"\tEnter no. of Meters"<<endl;
            cin>> kms;
            cout<<"\tNearly between "<<(int)(kms/1.39)<<" and "<<(int)(kms/1.43)<<" steps."<<endl;
            break;

        case 3:
            run=0;
            break;
        
        default:
            cout<<"Please choose from given option"<<endl;
            break;
        }
    }
    return 0;
}