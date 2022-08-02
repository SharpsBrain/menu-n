#include <iostream>

using namespace std;

int main()
{
    cout <<" |--------------------|---------------------|----------------|" << endl;
    cout <<" | code               | Menu Item           | Price          |" << endl;
    cout <<" | 1                  | Chicken Bryiani     | 140rs          |" << endl;
    cout <<" | 2                  | Kabab Masala        | 120rs          |" << endl;
    cout <<" | 3                  | Chicken Manchaurian | 140rs          |" << endl;
    cout <<" | 4                  | Chicken leg piece   | 130rs          |" << endl;
    cout <<" | 5                  | Chapli kabab+naan   | 90rs           |" << endl;
    cout <<" | 6                  | Pizza               | 450rs          |" << endl;
    cout <<" | 7                  | Grill sandvich      | 140rs          |" << endl;
    cout <<" | 8                  | Shwarma             | 120rs          |" << endl;
    cout <<" | 9                  | Fries               | 50rs           |" << endl;
    cout <<" | 10                 | Tea                 | 40rs           |" << endl;
    cout <<" |--------------------|---------------------|-----------------" << endl;
//Declaration of variables:
int code,price;
float quantity ;
double total_amount,amount_due,net_total,tax,discount;
//now take the menu from the user:
do{
    cout<<"Enter the code for dish and 0 for exit :";
    cin>>code;
    //apply if condition:
    if(code==0){
        return 0;
    }
    if(code==1){
        cout<<"Chicken Bryani\n";
        price =140;

    }
    else if(code==2){
 cout<<"Kabab masala\n";
 price=120;
}
else if(code==3){
 cout<<"Chicken Manchurian\n";
 price=140;
}
else if(code==4){
 cout<<"Chicken leg piece\n";
 price=130;
}
else if(code==5){
 cout<<"Chicken kabab +Naan\n";
 price=90;
}
else if(code==6){
 cout<<"Pizza\n";
 price=450;
}
else if(code==7){
 cout<<"Grill sandvich\n";
 price=140;
}
else if(code==8){
 cout<<"Shawarma\n";
 price=120;
}
else if(code==9){
 cout<<"Fries\n";
 price=50;
}
 else if(code==10){
 cout<<"Tea\n";
 price=40;
 }
 cout<<"Quantity:"<<endl;
 cin>>quantity;
 if(quantity){
    if(quantity>0){
        cout<<"Quantity is :"<<quantity<<endl;

    }
    else {
        cout<<"Invalid Quantity"<<endl;

    }
    //formula to find the total amount
    total_amount=(price*quantity);
 //printing the total amount:
 cout<<"The total amount is:"<<total_amount<<endl;
 //formula for tax calculation:
 tax=(total_amount)*(0.05);
 //printing the tax:
 cout<<"Tax(5%)="<<tax<<endl;
 //formula for amount due:
 amount_due=total_amount+tax;
//printing the due amount:
cout<<"Amount due :"<<amount_due<<endl;
//Applying the condition for discount:
if(total_amount>1000){
discount=amount_due*(0.01);
//printing the discounted value:
cout<<"Discount :"<<discount<<endl;


}
else {
    cout<<"Discount : 0"<<endl;

}
//formula to find the net total :
net_total=amount_due+discount;
//printing the net total:
cout<<"Net total :"<<net_total<<endl;

 }
 code++;
}
while(code!=0);
    return 0;
}
//-------------------sharpsbrain produced this code--------------------------//
