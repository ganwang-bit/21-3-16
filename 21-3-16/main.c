//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//    printf("Hello world!\n");
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    long long n,count;
//    int i;
//    scanf("%lld",&n);
//    long long arr[n][2];
//    arr[0][0]=1;
//    arr[0][1]=1;
//    if(n==0)
//    {
//        printf("0");
//    }
//    else
//    {
//        for(i=1;i<n;i++)
//        {
//            arr[i-1][0]%=1000000007;
//            arr[i-1][1]%=1000000007;
//            arr[i][0]=arr[i-1][0]+arr[i-1][1];
//            arr[i][1]=arr[i-1][0];
//
//        }
//    }
//    printf("%lld",(arr[n-1][0]+arr[n-1][1])%1000000007);
//    return 0;
//}
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//    int arr[1001],n,k,i,j,cifang=1;
//    scanf("%d%d",&k,&n);
//    arr[0]=1;
//    for(i=1;i<n;i=j+i+1)
//    {
//            arr[i]=pow(k,cifang);
//            for(j=0;j<pow(2,cifang)-1;j++)
//                arr[j+i+1]=arr[i]+arr[j];
//            cifang++;
//    }
//    printf("%d",arr[n-1]);
//    return 0;
//}
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//    double a,b,c,d;
//    scanf("%lf%lf%lf",&a,&b,&c);
//    if(a==0&&b==0&&c==0)
//    {
//        printf("Zero Equation");
//        return 0;
//    }
//    if(a==0&&b==0&&c!=0)
//    {
//        printf("Not An Equation");
//        return 0;
//    }
//    if(a==0&&b!=0&&c!=0)
//    {
//        printf("%.2lf",-c/b);
//        return 0;
//    }
//    d=b*b-4*a*c;
//    if(d>0)
//    {
//        printf("%.2lf\n",(-b+sqrt(d))/(2*a));
//        printf("%.2lf",(-b-sqrt(d))/(2*a));
//    }
//    else if(d==0)
//    {
//        printf("%.2lf",-b/(2*a));
//    }
//    else
//    {
//        d=-d;
//        if(b==0)
//        {
//            printf("%.2lf+%.2lfi\n",0.0,sqrt(d)/(2*a));
//            printf("%.2lf-%.2lfi",0.0,sqrt(d)/(2*a));
//        }
//        else
//        {
//            printf("%.2lf+%.2lfi\n",-b/(2*a),sqrt(d)/(2*a));
//            printf("%.2lf-%.2lfi",-b/(2*a),sqrt(d)/(2*a));
//        }
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    float n;
//    scanf("%f",&n);
//    if(n!=0)
//        printf("f(%.1f) = %.1f",n,1/n);
//    else
//        printf("f(0.0) = 0.0");
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int a=10;
//    switch(a)
//    {
//    case a==10:
//        break;
//    case 2:
//        break;
//    default:
//        break;
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    printf("%d",3<2<5);
//    return 0;
//
