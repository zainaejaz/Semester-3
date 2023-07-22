#include<iostream>
using namespace std;

class Item
{
private:
    int id;
    string name;
    int quantity;
    float cost;
public:

    void setId(int id)
    {
        if (id > 0)
        {
            this->id = id;
        }
        else
        {
            this->id = 0;
        }
        
    }

    void setName(string name)
    {
       this->name = name;
        
    }

    void setQuantity(int quantity)
    {
        if (quantity > 0)
        {
            this->quantity = quantity;
        }
        else
        {
            this->quantity = 0;
        }
        
    }

    void setCost(float cost)
    {
        if (cost > 0)
        {
            this->cost = cost;
        }
        else
        {
            this->cost = 0;
        }
        
    }

    //getters

    int getId()
    {
       return id;
        
    }

    string getName()
    {
       return name;
        
    }

    int getQuantity()
    {
       return quantity;
        
    }

    float getCost()
    {
       return cost;
        
    }

    //construvtors

    Item()
    {
       id = 0;
       name = "";
       quantity = 0;
       cost = 0;
    }

    Item(int id , string name , int quantity , float cost)
    {
        setId(id);
        setName(name);
        setQuantity(quantity);
        setCost(cost);
    }

    Item(int id , string name , int quantity)
    {
        setId(id);
        setName(name);
        setQuantity(quantity);
        this->cost = 0;
    }

    Item(int id , string name , float cost)
    {
        setId(id);
        setName(name);
        setCost(cost);
        this->quantity = 0;
    }

    Item(const Item &obj)
    {
       this->id = obj.id;
       this->name = obj.name;
       this->quantity = obj.quantity;
       this->cost = obj.cost;
    }

    //destructor 

    ~Item()
    {
        cout << "Destructor executed " <<endl;
    }
//member function

void setItem(int ids , string nam , int quantities , float costs)
{
        setId(ids);
        setName(nam);
        setQuantity(quantities);
        setCost(costs);
}

void getItem()
{
        cout <<"Enter item Id " <<endl;
        cin >>id;
        cout <<"Enter item name " <<endl;
        cin>>name;
        cout <<"Enter item quantity " <<endl;
        cin>>quantity;
        cout <<"Enter item cost " <<endl;
        cin>>cost;

        setId(id);
        setName(name);
        setQuantity(quantity);
        setCost(cost);
}

void putItem()
{
        cout <<"Item Id " << id <<endl;
        cout <<"Item name " << name << endl;
        cout <<"Item quantIty " << quantity <<endl;
        cout <<"Item cost " << cost <<endl;

}

float getTotalCost()
{
    if (quantity >= 1)
    {
        return (quantity * cost);
    }
 
}

bool isEqual(const Item &obj)
{
    if (this->id == obj.id && this->name == obj.name && this->quantity == obj.quantity && this->cost== obj.cost)
    {
        return true;
    }
    else
    return false;
    
}

void updateName(Item arr[] , const int size)
{
    for (int i = 0; i < size; i++)
    {
    if (this->id == arr[i].id)
    {
        arr[i].name = name;
    }
    }

}

Item getMinimumCostItem(Item arr[] , const int size)
{
    Item min = arr[0]; 

    for (int i = 1; i < size; i++)
    {
      if (arr[i].cost < min.cost)
      {
         min = arr[i];
      }

    }
    return min;

}

float getAveragePrice(Item arr[] , const int size)
{
    int sum = 0 , avg;
    for (int i = 0; i < size; i++)
    {
       sum = sum + arr[i].cost;
    }

    avg = sum / size;
    this->cost = avg;

    return this->cost;
}

};


int main()
{

    Item item1(10 , "rida" , 40 , 3.4) , item2;

    item1.setItem(15 , "zaina" , 30 , 2.4);

    item2.getItem();

    item2.putItem();

    float totalCost = item2.getTotalCost();

    cout << "Total cost is " << totalCost <<endl;

if (item1.isEqual(item2))
{
    cout << "States are same " <<endl;
}
else
{
    cout <<"Different" << endl;
}


    Item arr[3] = {Item(10 , "rida" , 40 , 3.4) , Item(40 , "mishi" , 80 , 1.4) , Item(50 , "samina" , 90 , 5.4)};
    
    item1.updateName(arr , 3);

    Item ans = item1.getMinimumCostItem(arr , 3);

    ans.putItem();

    // for (int i = 0; i < 3; i++)
    // {
    //     arr[i].putItem();
    // }


   return 0;
}