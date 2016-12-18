#include <iostream>
using namespace std;
#define maxSize 100
typedef char dataType;
class Stack
{
public:
	Stack();
	//~Stack();
	void push(dataType var);
	void pop();
	dataType StackTop();
	bool ifFull();
	bool ifEmpty();
private:
	dataType s[maxSize];
	int top;
};

Stack::Stack()
{
	top = -1;
}

void Stack::push(dataType var)
{
	s[++top] = var;
}

void Stack::pop()
{
	top--;
}

bool Stack::ifFull()
{
	return top == maxSize - 1;
}

bool Stack::ifEmpty()
{
	return top == -1;
}
dataType Stack::StackTop()  
{  
    return s[top];           //s[top]ÎªÕ»¶¥Êý¾Ý  
}  
 int main()
 { 
	 char ch[20];  
	 cin >> ch;
	 int i = 0;
	 Stack stack;
	 while(ch[i]!=NULL)
	 {
		 if(!stack.ifFull() && ((ch[i] == '(') || (ch[i] == '{') || (ch[i] == '[')))
		 {
		 stack.push(ch[i]);
		 
		 }
		 if(!stack.ifEmpty() && ((ch[i] == ')') || (ch[i] == '}') || (ch[i] == ']')))  
		{  
			 //cout << stack.StackTop() << endl;  
			 stack.pop();  
			 if(ch[i-1] == '(' && ch[i] != ')')
			 {
				 cout << "eorro";break;
			 }
			 if(ch[i-1] == '[' && ch[i] != ']')
			 {
				 cout << "eorro";break;
			 }
			 if(ch[i-1] == '{' && ch[i] != '}')
			 {
				 cout << "eorro";break;
			 }
		 } 
		 
		 i++;
	 }
	 if(stack.ifEmpty())cout << "yes";
	 else cout << "no";
	
 }