#include "Date.h"
#include <iostream>
#include "Complex_Number.h"
#include "Employee.h"
#include "Stack.h"
#include "Stack.cpp"

int main(){
    Date testDate;
    Employee testEmp("john","cooper", testDate);
    Complex_Number complexTest(4.2,-6.58);

    Stack<Complex_Number> complexStack;

    complexStack.push(complexTest);
    complexStack.pop();
//    cout<<"testDate: "<<testDate<<endl;
 //   cout<<"testEmp: "<<testEmp<<endl;
  //  cout<<"complex number: "<<complexTest<<endl;

    return 0;
}
