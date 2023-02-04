#include <iostream>
using namespace std;


int main() {
    //declare variables
    int dollar_amt;
    int dollar_rem;
    
    int input;
    
    //accept input
    cout<<"Please, enter the pennies to be converted ";
    cin>>input;//2311
    
    //process input
    dollar_amt = (input/100);
    dollar_rem = (input%100);
    
    int quarter_amt = dollar_rem/25;
    int quarter_rem = dollar_rem % 25;
    
    int dime_amt = quarter_rem/10;
    int dime_rem = quarter_rem % 10;

    int nickel_amt= dime_rem/5;
    int nickel_rem= dime_amt%5;

    int pennie_amt= nickel_rem;

  
    
    //display output
    cout<<"The dollar amount is = "<<dollar_amt<<endl;
    //cout<<"The dollar remainder is = "<<dollar_rem<<endl;
    
    cout<<"The quarter amount is = "<<quarter_amt<<endl;
    //cout<<"The quarter remainder is = "<<quarter_rem<<endl;
    
    
    cout<<"The dime amount is = "<<dime_amt<<endl;
    //cout<<"The dime remainder is = "<<quarter_rem<<endl;

    cout<<"The nickel amout is ="<<nickel_amt<<endl;

    cout<<"The pennie amout is ="<<pennie_amt<<endl;
  
  return 0;
}