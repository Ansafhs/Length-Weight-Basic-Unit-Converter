#include<stdio.h>
int main()
{
 int cm,cl,cw;
 float result,a;
 while(1)
 {
  printf("\nUnit Convertion System\n-----------------------\n1.Length Conversion\n2.Weight Convertion\n3.EXIT\n\nCHOOSE:");
  scanf("%d",&cm);

  if(cm==1)
  {
   printf("\n\n  Length Conversion\n  --------------------\n  1.Meter to Kilometer\n  2.Kilometer to Meter\n  3.Mailes to Kilometer\n  4.Kilometer to Miles\n  Choose Conversion:");
   scanf("%d",&cl);
   switch(cl)
   {
    case 1:
           printf("\n  Enter the Length:");
           scanf("%f",&a);
           result=a/1000;
           printf("\n\n%.3f Meter = %.3f Kilometer",a,result);
           break;
    case 2:
           printf("\n  Enter the Length:");
           scanf("%f",&a);
           result=a*1000;
           printf("\n\n%.3fKilometer = %.3f Meter",a,result);
           break;
    case 3:
           printf("\n  Enter the Length:");
           scanf("%f",&a);
           result=a*1.609;
           printf("\n\n%.3fMile = %.3f Kilometer",a,result);
           break;
    case 4:
           printf("\n  Enter the Length:");
           scanf("%f",&a);
           result=a/1.609;
           printf("\n\n%.3fKilometer = %.3f Mile",a,result); 
           break;
    default:
           printf("\n\nInvalid Input\n\n");
            break;
   }
  }

  else if(cm==2)
  {
   printf("\n\n  Weight Conversion\n  --------------------\n  1.Gram to Kilogram\n  2.Kilogram to Gram\n  3.Pounds to Kilogram\n  4.Kilograms to Pounds\n  Choose the weight conversion type:");
   scanf("%d",&cw);
   switch(cw)
   {
    case 1:
           printf("\n\n  Enter the Weight:");
           scanf("%f",&a);
           result=a/1000;
           printf("\n\n%.3f gram = %.3f Kilogram",a,result);
           break;
    case 2:
           printf("\n\n  Enter the Weight:");
           scanf("%f",&a);
           result=a*1000;
           printf("\n\n%.3f Kilogram = %.3f gram",a,result);
           break;
    case 3:
           printf("\n\n  Enter the Weight:");
           scanf("%f",&a);
           result=a/2.205;
           printf("\n\n%.3f Pound = %.3f Kilogram",a,result);
           break;
    case 4:
           printf("\n\n  Enter the Weight:");
           scanf("%f",&a);
           result=a*2.205;
           printf("\n\n%.3f Kilogram = %.3f Pound",a,result); 
           break;
    default:
           printf("\n\nInvalid Input\n\n");
           break;
   }
  }
  else if(cm==3)
   break;
  else
   printf("\n\nInvalid Input\n\n");
  printf("\n\n\n\n");
 }
 return 0;
}
