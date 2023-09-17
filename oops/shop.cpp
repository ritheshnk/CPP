#include<iostream>
using namespace std;

class Shop{
    private:
        int item_id[100];
        int item_price[100];
        int counter=0;
    
    public:
        //void initialize(void){counter=0;}
        void setPrice(void);
        void displayPrice(void);
};

void Shop ::setPrice(void){
    cout<<"enter the id of the item "<<counter+1<<endl;
    cin>>item_id[counter];
    cout<<"enter the item price "<<endl;
    cin>>item_price[counter];
    counter++;
}

void Shop ::displayPrice(void)
{
    for(int i=0; i<counter ;i++)
    {
        cout<<"the price of item ID number "<<item_id[i]<<" is  " <<item_price[i]<<endl;
    }
}

int main()
{
    Shop s;
    //s.initialize();
    s.setPrice();
    s.displayPrice();

}