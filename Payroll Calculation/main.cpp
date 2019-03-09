
#include <iostream>

using namespace std;

int main()
{
    int employeeID;
    double grossPay=0;
    double stateTax=0;
    double federalTax=0;
    double fICA=0;
    double grossPayTotal=0;
    double stateTaxTotal=0;
    double federalTaxTotal=0;
    double ficaTotal=0;
    double netPay=0;

    for(;;){
        cout<<"Enter Employee ID. Enter 0 to end: ";
        cin>> employeeID;
        if(employeeID < 0){
            cout<<"Employee ID cannot be a negative number.";
            break;
        }
        if(employeeID == 0){
            break;
        }

        cout<<"Enter gross pay: ";
        cin>> grossPay;
        if(grossPay<0){
            cout<<"Gross pay cannot be a negative number.Try again: ";
            cin>>grossPay;
            grossPayTotal += grossPay;
        }else{
        grossPayTotal += grossPay;}

        cout<<"Enter state tax: ";
        cin>> stateTax;
        if(stateTax<0||stateTax>grossPay){
            cout<<"State Tax cannot be a negative number or bigger than the gross pay."<<endl;
            cout<<"Try again: ";
            cin>> stateTax;
            stateTaxTotal+=stateTax;
        }else{
            stateTaxTotal+=stateTax;
        }

        cout<<"Enter federal tax: ";
        cin>>federalTax;
        if(federalTax<0 || (federalTax+stateTax)>grossPay){
            cout<<"Federal tax cannot be a negative number or its sum with state tax be bigger than gross pay."<<endl;
            cout<<"Try again: ";
            cin>>federalTax;
            federalTaxTotal+=federalTax;
        }else{
            federalTaxTotal+=federalTax;
        }

        cout<<"Enter FICA withholdings: ";
        cin>>fICA;
        if(fICA<0 || (fICA+stateTax+federalTax)>grossPay){
            cout<<"FICA cannot be a negative number or its sum with state and federal taxes be bigger than the gross pay."<<endl;
            cout<<"Try again: ";
            cin>>fICA;
            ficaTotal+=fICA;
        }else{
            ficaTotal+=fICA;
        }
    }

    netPay = grossPayTotal - stateTaxTotal - federalTaxTotal - ficaTotal;

    cout<<endl;
    cout<<"----------------------------------------------------------"<<endl;
    cout<<"Net Pay: "<< netPay<<", Gross Pay Total: "<< grossPayTotal<<endl;
    cout<<"State Tax Total: "<<stateTaxTotal<<", Federal Tax Total: "<<federalTaxTotal<<endl;
    cout<<"FICA withholdings: "<<ficaTotal<<endl;
    cout<<"----------------------------------------------------------"<<endl;
    return 0;
}
