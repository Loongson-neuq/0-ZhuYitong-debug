#include ".assignment/test.h"


// 比较三个数的大小
void swap(int &lns,int &rhs) 
{
	int t=lns;
	lns=rhs;
	rhs=t;
}

void CompareThreeNumbers(int a, int b, int c, Result &result)
{
    if(a>b) 
	{
		swap(a,b);
		if(b>c) swap(b,c);
	}
	
	if(b>c) swap(b,c);
	
	result.min=a;
	result.mid=b;
	result.max=c;
    // 在这里完成你的代码
}
