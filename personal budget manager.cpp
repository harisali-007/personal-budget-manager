#include<iostream>
#include<vector>
#include<numeric>
using namespace std;
int main(){
	int t_budget,sum,count;
	cout<<"Enter Monthly Budget:$";
	  cin >> t_budget;
	  
	 while (t_budget <= 0) {
        cout << "Please enter a valid budget amount: $";
        cin >> t_budget;
    }
	cout<<"*****EXPENSES*****"<<endl;
	

	cout<<"How many expenses do you want to enter?"<<endl;
	cin>>count;
	 while (count <= 0) {
        cout << "Please enter a valid number:$";
        cin >>count;
    }
	 vector<string> categories(count);
	 vector<int> expenses(count);


	 for (int i=0;i<count;i++){
	 	cout<<"enter category of expense:";
	 	cin>>categories[i];

	 	cout<<"enter amount for expense:$";
	 	cin>>expenses[i];
	 	
	 		 while(expenses[i] <= 0){
	 	 	cout<<"enter valid expense for "<<categories[i]<<":"<<endl;
	 	 	cin>>expenses[i];
		  }
}


	 	 for (int i = 0; i < categories.size(); i++){
        cout << categories[i]<<":$"<<expenses[i] << endl;
};


	  sum= accumulate(expenses.begin(), expenses.end(), 0);
	  
	if(sum > t_budget){
	  cout<<"You have exceeded you budget upto:$"<<sum-t_budget<<endl;
	}else{

	    cout<<"total expense is:$"<<sum<<endl;
	    cout<<"your remining budget is:$"<<t_budget-sum<<endl;
	}
	return 0;
	
	
	
}