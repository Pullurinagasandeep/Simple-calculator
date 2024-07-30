#include<iostream>
#include<string>


using namespace std;


void usage()
{
cout<<endl;
cout<<"calc agr1 op agr2 "<<endl;
cout<<"arg1 and arg2 are arguments "<<endl;
cout<<"op is operator one of + , - , * or / "<<endl;
}


int main(int argc, char *argv[])
{

  if(argc != 4)
  {
    usage();
    return 1;
  }

  string oparg = argv[2];
  if(oparg.length() > 1)
  {
    cout<<endl;
    cout<<"operator should be single character "<<endl;
    usage();
    return 1;
  }

//if (op != '+' && op != '-' && op != '*' && op != '/')

  char op = oparg.at(0);
 if (op == 44 || op == 46 || op < 42 || op > 47 )
  {
    cout<<endl;
    cout<<"operator is not recognized "<<endl;
    usage();
    return 1;
  }
  
  double arg1 = atof(argv[1]);
  double arg2 = atof(argv[3]);
  double result = 0 ;

  switch (op)
  {
  case '+':
    result = arg1 + arg2 ;
    break;
  case '-':
    result = arg1 - arg2 ;
    break;
  case '*':
    result = arg1 * arg2 ; 
    break; 
  case '/':
    if(arg2 == 0)
    {
      cout << "divide by zero !" << endl ;
      return 1;
    }
    else{
    result = arg1 / arg2 ;
    }
    break;
  }


  cout << endl ;
  cout << arg1 << " " << op << " " << arg2 << " = " <<" "<< result << endl ;





  return 0 ;
}