#include<stdio.h>
#include<conio.h>
#include<math.h>
int n,i,x,k ,dem,tong,a[100];
int nhapmang(int n);
int xuatmang(int n);
int timGTLN(int n);
int tinhtich(int n);
int tinhSNT(int a[100],int n);
int nhapx(int x);
int sapxepmang(int n);
int xoaGTK(int a[100],int n);
int chenso(int a[100],int n);
int main()
{  
	printf("nhap so n= ");
		scanf("%d",&n);
	nhapmang(n);
 xuatmang(n);
   timGTLN(n);
	 tinhtich(n);
	// tinhSNT(a,n);
/*	nhapx(n);
	printf("\n mang sau sap xep");
	 sapxepmang(n);
	 xoaGTK(a, n);*/
	  chenso(a,n);
}
	
	
	
int nhapmang(int n)
   {
	for(int i=0;i<n;i++)
	   {
		printf(" ptu a[%d]= ",i);
		scanf("%d",&a[i]);
		}
	}
int xuatmang(int n)
{   
     printf("mang sau khi nhap :");
	for(int i=0;i<n;i++)

	printf("\ta[%d]=%d",i,a[i]);
		}
		
int timGTLN(int n)
{    int max=a[i+1];
	for(int i=0;i<n;)
	  {  if(a[i]>max)
	   
	       
	       max=a[i];
	       i++;
	   }    
	 printf("\n gia tri lon nhat la %d",max);
	 }
	 
	 
	 
int tinhtich(int n)
{

 int  tich=1;
    for(int i=0;i<n;i++)
	       tich*=a[i];
	       printf("\n tich la %d",tich);
}

int prime(int n)
{  

 for(int i=1;i<sqrt(n);i++)
   if(n%i==0)
      return 0;
return 1;
}
int tinhSNT(int a[100],int n)
{ tong=0,dem=0;
	for(i=0;i<n;i++)
	    if(prime(a[i])==1)
	    {
	    	dem++;
	    	tong+=a[i];
	    }
	    printf("%d",dem);
	  
	}








int nhapx(int n)
{
	printf("\n nhap gia tri cua x= ");
	scanf("%d",&x);
	for(i=0;i<n;i++)
	  if(x==a[i])
	 { dem+=1;
	  	if(dem!=0)
	 printf("\n vi tri cac ptu co gia tri = x la vi tri ");
	 else
	  printf("\n ko co gia tri nao = x ");
	  printf("\t %d",i);
	   }
	   if(dem==0)
	    printf("\n ko co gia tri nao = x ");
	    
	   }
	   
	   
	   
int sapxepmang(int n)
{
 int tam,j;
	for(i=0;i<n-1;i++)
	
	 for(int j=i+1;j<n;j++)
	     { if(a[i]>a[j])
	      { tam=a[i];
	       a[i]=a[j];
	       a[j]=tam;
	       }
	    } 
	    for (i=0;i<n;i++)
	       printf("\n %d",a[i]);
}
//int chen_x(int x)
/*int tinhSNT(int a[100],int n)
{  tong=0;
int d=0;
	 int dem =0;
   for(int i=1;i<=sqrt(n);i++)
     {
      if(n%a[i]==0){
         ++dem;
         if(a[i]!=n/a[i]){
          ++dem;}}}
      if(dem==2){
      	d+=1;
	       tong+=a[i];}
	        printf("\n co %d so nguyen to",d);
	      printf("\n tong cac ptu ngto la:%d",tong);}*/
	/*  else{
	  
	  return 0;
	  }
	for(int i=1;i<=n;i++){
	
	   if(prime(i)==1){
	       dem+==1;
	       tong+=a[i];
	   }}
	       return 0;
}
}*/
int xoaGTK(int a[100],int n)
{ 
dem=0;
	printf("\n nhap gia tri k= ");
	scanf("%d",&k);
    for(i=0;i<n;i++)
    
    if(k==a[i])
     
    // {
      a[i]=a[i+1];
      --n;
      printf("mang sau khi xoa: ");
        for(i=0;i<n;i++)
          printf("\t %d",a[i]);
          if(k!=a[i])
          dem=dem+1;
          if(dem==n)
         printf("\n mang ko thay doi ");
      }
int chenso(int a[100],int n)
{    
    printf("\n nhap vi tri can chen k=");
    scanf("%d",&k);
	printf("\n nhap gia tri chen x");
	scanf("%d",&x);
	for(i=n-1;i>=k;i--)
	 a[i+1]=a[i];
	 a[k]=x;
	   ++n;
	   printf("mang sau khi chen ");
	   for(i=0;i<n;i++)
	    printf("\t %d",a[i]);
}


	
	
	
