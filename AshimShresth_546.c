#include<stdio.h>
#include<conio.h>
typedef struct{
	int numerator;
	int denominator;
}rational;

rational makerational(int, int);
rational add_rational(rational, rational);
rational multi_rational(rational, rational);
rational equal_rational(rational, rational);

void main()
{
	rational r1=makerational(1,3);
	rational r2=makerational(1,3);
	rational sum=add_rational(r1,r2);
	rational mul=multi_rational(r1,r2);	
	equal_rational(r1,r2);
	
	printf("\nThe sum of rational numbers is \n%d\n__\n\n%d.\n\n",sum.numerator,sum.denominator);
	printf("\nThe multiplication of rational numbers is \n\n%d\n__\n\n%d.",mul.numerator,mul.denominator);
};

rational makerational(int a,int b)
{
	rational r;
	r.numerator=a;
	r.denominator=b;
	return r;
}

rational add_rational(rational a, rational b)
{
	rational sum;
	sum.numerator=(a.numerator*b.denominator)+(a.denominator*b.numerator);
	sum.denominator=(a.denominator*b.denominator);
	return sum;
}

rational multi_rational(rational a, rational b)
{
	rational mul;
	mul.numerator=(a.numerator*b.numerator);
	mul.denominator=(a.denominator*b.denominator);
	return mul;
}

rational equal_rational(rational a, rational b)
{
	if(a.numerator==b.numerator&&a.denominator==b.denominator)
	{
		printf("The rational are EQUAL !\n");
	}
	else{
		printf("The rational aren't EQUAL!\n");
	}
}


