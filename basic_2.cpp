/*Question 1: Check Eligibility for Voting
Write a program that takes a person's age as input and checks if they are eligible to vote.

If the person is 18 or older, print "You are eligible to vote."
Otherwise, print "You are not eligible to vote."*/
/*
#include<iostream>
using namespace std;

int main()
{
    int age;
    cout<<"Please enter your age: ";
    cin>>age;
    if(age>=18){
        cout<<"You are eligible to vote.";
    }
    else{
        cout<<"You are not eligible to vote.";
    }
}
*/

/*Question 2: Basic Calaculator using conditional statement.*/
/*
#include<iostream>
using namespace std;

int main()
{
    int a,b;
    char operation;
    cout<<"Enter your first number: ";
    cin>>a;
    cout<<"Enter your second number: ";
    cin>>b;
    cout<<"Enter what you want to do(+, -, *, /): ";
    cin>>operation;
    if(operation == '+'){
        cout<<"Answer is: "<< a + b<<endl;
    }
    else if (operation == '-')
    {
        cout<<"Answer is: "<<a - b<<endl;
    }
    else if(operation == '*'){
        cout<<"Answer is: "<<a * b<<endl;
    }
    else if(operation == '/'){
        cout<<"Answer is: "<<(float)a / b<<endl;
    }
    else{
        cout<<"Invalid input."<<endl;
    }
}
*/

/*Question 2: Grade Calculator
Write a program that takes a percentage as input and outputs the corresponding grade using the following grading system:

90-100: Grade A
80-89: Grade B
70-79: Grade C
60-69: Grade D
Below 60: Fail*/
/*
#include<iostream>
using namespace std;

int main()
{
    int percentage;
    cout<<"Enter your percentage: ";
    cin>>percentage;
    int grade= percentage/10;

    switch (grade)
    {
    case 10:
        cout<<"Grade A";
        break;

    case 9:
        cout<<"Grade A";
        break;

    case 8:
        cout<<"Grade B";
        break;

    case 7:
        cout<<"Grade C";
        break;
    
    case 6:
        cout<<"Grade D";
        break; 
    
    default:cout<<"failed.";
        break;
    }
}*/


/*Question 3: Days of the Week
Write a program that takes an integer input (1 to 7) and prints the corresponding day of the week using a switch statement.
For example:

1: Monday
2: Tuesday
...
7: Sunday*/
/*
#include<iostream>
using namespace std;

int main()
{
    int day;
    cout<<"Enter Day Number: ";
    cin>>day;
    switch(day)
    {
        case 7:
            cout<<"Sunday";
            break;

        case 6:
            cout<<"Saturday";
            break;
        
        case 5:
            cout<<"Friday";
            break;

        case 4:
            cout<<"Thursday";
            break;
        
        case 3:
            cout<<"Wednesday";
            break;
        
        case 2:
            cout<<"Tuesday";
            break;

        case 1:
            cout<<"Monday";
            break;

        default:cout<<"Invalid Number.";
            break;
    }
}*/