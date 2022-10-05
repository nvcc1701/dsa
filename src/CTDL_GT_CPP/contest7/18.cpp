#include<bits/stdc++.h>

using namespace std;

int precedence( char op )
{
	if(op=='+' || op=='-') return 1;
	else 
	if(op=='*' || op=='/') return 2;
	else return 0;
}

float applyOp( float a, float b, char op )
{
	switch(op)
	{	
		case '+': return a+b; 
		case '*': return a*b; 
		case '-': return a-b;
		case '/': return a/b;
	}
}

float evaluate( string in_exp )
{
	stack<float> values;
	stack<char> ops;
	for( int i=0; i<in_exp.length(); i++ )
	{
		if(in_exp[i]==' ') continue;
		
		else
		if(in_exp[i]=='(') ops.push('(');
		
		else
		if(isdigit(in_exp[i]))
		{
			float val=0;
			while(i<in_exp.length() && isdigit(in_exp[i]))
			{
				val= (val*10) + (in_exp[i]-'0');
				i++;
			}
			values.push(val);
			i--;
			continue;
		}
		
		else
		if(in_exp[i]==')')
		{
			while(!ops.empty() && ops.top()!='(')
			{
				float val1=values.top(); values.pop();
				float val2=values.top(); values.pop();
				values.push(applyOp(val2,val1,ops.top()));
				ops.pop();
			}
			if(!ops.empty()) ops.pop();
		}
		else
		{
			while(!ops.empty() && precedence(in_exp[i])<=precedence(ops.top()))
			{
				float val1=values.top(); values.pop();
				float val2=values.top(); values.pop();
				values.push(applyOp(val2,val1,ops.top()));
				ops.pop();
			}
			ops.push(in_exp[i]);
		}
	}
	while(!ops.empty())
	{
		float val1=values.top(); values.pop();
		float val2=values.top(); values.pop();
		values.push(applyOp(val2,val1,ops.top()));
		ops.pop();
	}
	return values.top();
}

main()
{
	int t;
	string in_exp;
	cin >> t;
	cin.ignore();
	while(t--)
	{
		getline(cin,in_exp);
		cout << evaluate(in_exp) << endl;
	}
}
