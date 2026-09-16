#include <bits/stdc++.h>
using namespace std;
class Product{
    public:
    int ProductId;
    string name;
    int price;
    Product(string n,int id,int p){
        name=n;
        ProductId=id;
        price=p;
    }
};
Product ComparePrice(const Product p,const Product p2 ){
    if(p.price>p2.price)
    return p;
    else
    return p2;
}
int main(){
    Product p("Sarthak",123,10);
    Product p2("Tanishque",134,90);
    Product res=ComparePrice(p,p2);
    cout<<"Product Name"<<res.name<<endl;
    cout<<"Product Id"<<res.ProductId<<endl;
    cout<<"Product price"<<res.price<<endl;
    return 0;
}