# Conditional compilation with the help of derivatives

* Using `#if`, `#ifdef`, `#elif`, `#endif` and more, will direct the compiler to compile the desired code.

## Example

* Considering the example of a bookstore, let's assume that a user is asked to enter the price of the book. The program will apply different discounts, festival offers, a discount coupon, and Kindle options on the basis of the Qty macro, which represents the quantity or number of books purchased by the user. The program also defines other macros that determine different offers that are applicable.

## How to do it

* Define the macro `Qty` with an initial value

```
#define Qty 10
```

* Take the input from user regarding the price of the book

```
printf("Enter the price of the book: );
scanf("%f", &price);
```

* To get the total amount of the books, use `Qty*price` formula:

```
totalAmount = Qty*price;
```

* Using `#if`, `#elif`, `#elise` and `#endif` derivatives determine the discount that should be applied.

* After determining the discount, apply the discount to the amount to get the deducted value and store it in a variable `afterDis`

```
afterDis = totalAmount - (totalAmount*discount)/100;
```

* If there is a `FestivalOffer`, it should be taken into consideration. Using `ifdef`, `#else`, and `#endif` derivatives confirm whether the `FestivalOffer` is defined. If so, compute the amount that the user can to pay after the deduction.

```
#ifdef FestivalOffer
afterFDis = afterDis - (totalAmount*FestivalOffer)/100;
#else
afterFDis = afterDis;
#endif
```

* Using the `#if defined` derivative check whether the discountCoupon is defined or not. If so, the user needs to be informed about the eligibility.

```
#if define discountCoupon
printf("You are eligible for a discount coupon of $%d\n, discountCoupon);
#endif
```

* Using `#ifndef` and `#endif` derivatives check whether the `Kindle` macro is defined or not. If so not, the macro should be defined and the user must be informed the number of the months they are eligible for the `Kindle` version of the book.

```
#ifndef Kindle
#define Kindle 1
#endif
printf("You are eliglible for the Kindle version for %d month(s)\n", Kindle);
```

## Code

```
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
```
