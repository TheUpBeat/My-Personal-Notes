#include<stdio.h>
#define Qty 10
#define FestivalOffer 2
#define discountCoupon 5
#define Kindle 1

int main() {

	int discount;
	float price, totalAmount, afterDis, afterFDis;
	printf("Enter the price of the book: ");
	scanf("%f", &price);
	totalAmount = Qty * price;
	#if Qty >= 10
		discount = 15;
	#elif Qty >= 5
		discount = 10;
	#else
		discount = 5;
	#endif
	afterDis = totalAmount - (totalAmount * discount)/100;

	printf("Quantity = %d, Price is $%.2f, Total amount for the books is $%0.2f\n", Qty, price, totalAmount);
	printf("Discount is %d%% and the total amount after discount is $%.2f\n", discount, afterDis);

	#ifdef FestivalOffer
		afterFDis = afterDis - (totalAmount * FestivalOffer)/100;
	#else
		afterFDis = afterDis;
	#endif
	
	printf("Festival discount is %d%% and the total amount after fetival discount is $%.2f\n", FestivalOffer, afterFDis);

	#if defined (discountCoupon)
		printf("You are eligible for a discount coupon of $%d\n", discountCoupon);
	#endif
	#ifndef Kindle
		#define Kindle 1
	#endif
	printf("You are eligible for Kindle version of the book for %d month(s)\n", Kindle);

	printf("The amount you need to pay is: %.2f", afterFDis);

	return 0;
}
