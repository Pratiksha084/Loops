/*
Part 1
Calculator program using Switch-Case
*/
#include<iostream>
using namespace std;
int main()
{
    float i,r;
    int calc = 4;

    cout<<"Enter the first Number :";
    cin>>i;

    cout<<"Enter the second Number :";
    cin>>r;

    cout<<"Enter the operation to execute :"<<endl;
    cout<<"1.Sum"<<endl;
    cout<<"2.Substraction"<<endl;
    cout<<"3.Multiplication"<<endl;
    cout<<"4.Division"<<endl;
    cin>>calc;

    switch(calc)
    {
        case 1:
        
            cout<<"The sum is :"<<i+r<<endl;
            break;
        

        case 2:
        
            cout<<"The difference is :"<<i-r<<endl;
            break;
        

        case 3:
        
            cout<<"The product is :"<<i*r<<endl;
            break;
        

        case 4:
        
            cout<<"The quotient is :"<<i/r<<endl;
            break;
        

        default:
        {
            cout<<"Wrong Input";
            break;
        }
    

}

/*OUTPUT
Enter the first Number :2
Enter the second Number :3
Enter the operation to execute :
1.Sum
2.Substraction
3.Multiplication
4.Division
1
The sum is :5
*/


/*Part = 2
Display all 7 days, else default is wrong input:Default Condition*/
int day;
cout<<"Enter a day number:"<<endl;
cin>>day;
switch(day)
{
    case 1:
    cout<<"Monday:"<<endl;
    break;
    case 2:
    cout<<"Tuesday:"<<endl;
    break;
    case 3:
    cout<<"Wednesday:"<<endl;
    break;
    case 4:
    cout<<"Thurday:"<<endl;
    break;
    case 5:
    cout<<"Friday:"<<endl;
    break;
    case 6:
    cout<<"Saturday:"<<endl;
    break;
    case 7:
    cout<<"Sunday:"<<endl;
     default:
        {
            cout<<"Wrong Input";
            break;
        }

}
/*Enter a day number:
1
Monday:*/


/*Part = 3
Print_50_Numbers*/

    int c = 1;
    while(c <= 50)
    {
        cout<<c<<endl;
        c++;
    }
/*OUTPUT
1
2
3
4
5
6
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
*/


/*Part = 4
Hello_World_10_times*/

{
    int i;

    for(i=1;i<=10;i++)
    {
        cout<<"hello world :"<<i<<endl;
    }


}
/*
OUTPUT
hello world :1
hello world :2
hello world :3
hello world :4
hello world :5
hello world :6
hello world :7
hello world :8
hello world :9
hello world :10
*/


/*Part = 5
Number_Triangle*/
{
    int k,i,j;

    cout<<"Enter the number of rows :";
    cin>>k;

    for(i = 0;i < k;i++)
    {
        for(j = 0;j < i;j++)
        {
            cout<<i;
        }

        cout<<endl;
    }

    return 0;
}
/*
OUTPUT
Enter the number of rows :6

1
22
333
4444
55555
*/
} 