#include <iostream>
#include <vector>
#include <cctype>

using namespace std;

struct Product
{
    string productName;
    double price;
};

struct Shop
{
    int iid;
    string name;
    int numberOfProducts;
    vector<Product> products;
};

// function to convert string to uppercase
void toUpperCase(string &str)
{
    for (char &c : str)
        c = toupper(c);
}

// function to sort products within a shop
void sortProducts(vector<Product> &products)
{
    for(int i = 0; i < products.size() - 1; i++)
    {
        for(int j = i + 1; j < products.size(); j++)
        {
            // swap products alphabetically
            // if they have the same name, sort by price
            if (products[i].productName > products[j].productName ||
               (products[i].productName == products[j].productName &&
               products[i].price < products[j].price))
            {
                swap(products[i], products[j]);
            }
        }
    }
}

// function to sort shops by name
void sortShops(vector<Shop> &shops)
{
    for(int i = 0; i < shops.size() - 1; i++)
    {
        for(int j = i + 1; j < shops.size(); j++)
        {
            if(shops[i].name > shops[j].name)
            {
                swap(shops[i], shops[j]);
            }
        }
    }
}

int main()
{
    int n;
    cin >> n;

    vector<Shop> shops;

    // data input
    for (int i = 0; i < n; i++)
    {
        // input the shop data
        Shop shop;
        cin >> shop.iid >> shop.name >> shop.numberOfProducts;
        shop.products.resize(shop.numberOfProducts);

        // input the products
        for(int j = 0; j < shop.numberOfProducts; j++)
            cin >> shop.products[j].productName >> shop.products[j].price;
        
        // convert shop and product names to uppercase
        toUpperCase(shop.name);
        for (Product &product : shop.products)
            toUpperCase(product.productName);

        // sort products manually within this shop
        sortProducts(shop.products);

        // add the shop to the list
        shops.push_back(shop);
    }

    // sort shops manually by name
    sortShops(shops);

    // output
    for(Shop &shop : shops)
    {
        cout << shop.iid << " " << shop.name << endl;
        for(Product &product : shop.products)
        {
            cout << product.productName << "-" << product.price << endl;
        }
        cout << '\n';
    }
}