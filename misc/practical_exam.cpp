#include <iostream>
#include <vector>
#include <cctype>

using namespace std;

struct Shop
{
    int iid;
    string name;
    int numberOfProducts;

    struct Product
    {
        string productName;
        double price;
    };
};

int main()
{
    // number of shops
    int n;
    cin >> n;

    // vector to hold shops and products
    vector<Shop*> shops;
    vector<Shop::Product*> products;

    // data input
    for(int i = 0; i < n; i++)
    {
        Shop *shop = new Shop;
        cin >> shop->iid;
        cin >> shop->name;
        cin >> shop->numberOfProducts;
        shops.push_back(shop);

        for(int j = 0; j < shop->numberOfProducts; j++)
        {
            Shop::Product *product = new Shop::Product;
            cin >> product->productName;
            cin >> product->price;
            products.push_back(product);
        }
    }

    // convert to names to uppercase
    for(int i = 0; i < shops.size(); i++)
    {
        // convert shop name to uppercase
        for (char &c : shops[i]->name)
            c = toupper(c);

        // convert product names to uppercase
        for (int j = 0; j < shops[i]->numberOfProducts; j++)
            for (char &c : products[j]->productName)
                c = toupper(c);
    }
/*  */
    // sort products alphabetically
    for(int i = 0; i < shops.size(); i++)
    {
        for(int j = 0; j < shops[i]->numberOfProducts - 1; j++)
        {
            if(products[j]->productName > products[j + 1]->productName)
            {
                swap(products[j], products[j + 1]);
            }
            else if(products[j]->productName == products[j + 1]->productName)
            {
                if(products[j]->price > products[j + 1]->price)
                {
                    swap(products[j], products[j + 1]);
                }
            }
        }
    }
    
    // sort shops alphabetically
    for(int i = 0; i < shops.size(); i++)
    {
        for(int j = i + 1; j < shops.size(); j++)
        {
            if(shops[i]->name > shops[j]->name)
            {
                swap(shops[i], shops[j]);
            }
        }
    }

    // output
    for(int i = 0; i < shops.size(); i++)
    {
        cout << shops[i]->iid << " " << shops[i]->name << " " << endl;

        for(int j = 0; j < shops[i]->numberOfProducts; j++)
        {
            cout << products[j]->productName << "-" << products[j]->price << endl;
        }

        cout << '\n';
    }

    // deallocate memory
    for(int i = 0; i < shops.size(); i++)
        delete shops[i];
    for(int i = 0; i < products.size(); i++)
        delete products[i];
}