#include <iostream>
using namespace std ;
int main (){
int option  ;
while ( option !=5){
cout << "WELCOME\n";
cout << " 1. inr\n";
cout << " 2. euro\n";
cout << " 3. usd\n";
cout << " 4. dirham\n";
cout << " 5. pound\n";
cout << " 6. exit\n";
cout << " choose any one option: ";
cin >> option ;

if( option == 1){
    int amount;
    int convert;
    cout << "enter the amount: ";
    cin >> amount;
    
    cout << " 1. euro\n";
    cout << " 2. usd\n";
    cout << " 3. dirham\n";
    cout << " 4. pound\n";
    
    cout << "enter the option: ";
    cin >> convert;
    
    int result = 0;
    switch(convert)
    {
    case 1:
       cout << "1 inr = 0.010 euro\n";
       result = amount *  0.010;
       cout << "result: " << result << "\n";
       break;
    case 2:
       cout << "1 inr = 0.012 usd\n";
       result = amount *  0.012;
       cout << "result: " << result << "\n";
       break;
    case 3:
       cout << "1 inr =  0.043 dirham\n";
       result = amount * 0.043;
       cout << "result: " << result << "\n";
       break;
    case 4:
       cout << "1 inr =  0.0087 pound\n";
       result = amount * 0.0087;
       cout << "result: " << result << "\n";
       break;
    default :
       break;
    }
    }
    
    
    else if( option == 2){
    int amount;
    int convert;
    cout << "enter the amount: ";
    cin >> amount;
    
    cout << " 1. inr\n";
    cout << " 2. usd\n";
    cout << " 3. dirham\n";
    cout << " 4. pound\n";
    
    cout << "enter the option: ";
    cin >> convert;
    
    int result = 0;
    switch(convert)
    {
    case 1:
       cout << "1 euro = 96.63 inr\n";
       result = amount *  96.63;
       cout << "result: " << result << "\n";
       break;
    case 2:
       cout << "1 euro = 1.13 usd\n";
       result = amount *  1.13;
       cout << "result: " << result << "\n";
       break;
    case 3:
       cout << "1 euro =  4.15 dirham\n";
       result = amount * 4.15;
       cout << "result: " << result << "\n";
       break;
    case 4:
       cout << "1 euro =  0.84 pound\n";
       result = amount * 0.84;
       cout << "result: " << result << "\n";
       break;
    default :
       break;
    }
    }
    
    
    else if( option == 3){
    int amount;
    int convert;
    cout << "enter the amount: ";
    cin >> amount;
    
    cout << " 1. inr\n";
    cout << " 2. euro\n";
    cout << " 3. dirham\n";
    cout << " 4. pound\n";
    
    cout << "enter the option: ";
    cin >> convert;
    
    int result = 0;
    switch(convert)
    {
    case 1:
       cout << "1 usd = 85.56 inr\n";
       result = amount *  85.56;
       cout << "result: " << result << "\n";
       break;
    case 2:
       cout << "1 usd = 0.88 euro\n";
       result = amount *  0.88;
       cout << "result: " << result << "\n";
       break;
    case 3:
       cout << "1 usd =  3.67 dirham\n";
       result = amount * 3.67;
       cout << "result: " << result << "\n";
       break;
    case 4:
       cout << "1 usd =  0.74 pound\n";
       result = amount * 0.74;
       cout << "result: " << result << "\n";
       break;
    default :
       break;
    }
}
    
    
    else if( option == 4){
    int amount;
    int convert;
    cout << "enter the amount: ";
    cin >> amount;
    
    cout << " 1. inr\n";
    cout << " 2. usd\n";
    cout << " 3. euro\n";
    cout << " 4. pound\n";
    
    cout << "enter the option: ";
    cin >> convert;
    
    int result = 0;
    switch(convert)
    {
    case 1:
       cout << "1 dirham = 23.30 inr\n";
       result = amount *  23.30;
       cout << "result: " << result << "\n";
       break;
    case 2:
       cout << "1 dirham = 0.24 euro\n";
       result = amount *  0.24;
       cout << "result: " << result << "\n";
       break;
    case 3:
       cout << "1 dirham =  0.27 usd\n";
       result = amount * 0.27;
       cout << "result: " << result << "\n";
       break;
    case 4:
       cout << "1 dirham =  0.20 pound\n";
       result = amount * 0.20;
       cout << "result: " << result << "\n";
       break;
    default :
       break;
    }
}
    
    
    else if( option == 5){
    int amount;
    int convert;
    cout << "enter the amount: ";
    cin >> amount;
    
    cout << " 1. inr\n";
    cout << " 2. usd\n";
    cout << " 3. dirham\n";
    cout << " 4. euro\n";
    
    cout << "enter the option: ";
    cin >> convert;
    
    int result = 0;
    switch(convert)
    {
    case 1:
       cout << "1 pound = 115.19 inr\n";
       result = amount *  115.19;
       cout << "result: " << result << "\n";
       break;
    case 2:
       cout << "1 pound = 1.19 euro\n";
       result = amount *  1.19;
       cout << "result: " << result << "\n";
       break;
    case 3:
       cout << "1 pound =  1.35 usd\n";
       result = amount * 1.35;
       cout << "result: " << result << "\n";
       break;
    case 4:
       cout << "1 pound =  4.94 dirham\n";
       result = amount * 4.94;
       cout << "result: " << result << "\n";
       break;
    default :
       break;
    }
}


    else if( option == 6){
        cout << " THANK YOU ";
        cout << "\n";
    }
}    
}
