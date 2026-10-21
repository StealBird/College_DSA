#include<iostream>
using namespace std;

int linearSearch(int a[], int n, int x){
    for (int i = 0; i < n; i++ )
    {
        if (a[i] == x)
        return i;

    }

    return -1;

}

int main(){

    int n, x;
    int a[20];

    cout<<"Enter the size of array: ";
    cin >> n;
    
    cout<<"Enter "<<n <<" integers: "<<endl;
    for (int i = 0; i<n; i++)
    {
        cin>>a[i];
    }

    cout<<"Enter the target element to search for: ";
    cin >> x;

    int location = linearSearch(a, n , x);


    if (location != -1)
    {
        cout<<"Element "<<x<<" has been found at array index: "<<location<<endl;
    }
    else
    {
        cout<<"Element "<<x<<" has not been found in array "<<endl;
    }


    return 0;

}
#include<iostream>
using namespace std;

int linearSearch(int a[], int n, int x){
    for (int i = 0; i < n; i++ )
    {
        if (a[i] == x)
        return i;

    }

    return -1;

}

int main(){

    int n, x;
    int a[20];

    cout<<"Enter the size of array: ";
    cin >> n;
    
    cout<<"Enter "<<n <<" integers: "<<endl;
    for (int i = 0; i<n; i++)
    {
        cin>>a[i];
    }

    cout<<"Enter the target element to search for: ";
    cin >> x;

    int location = linearSearch(a, n , x);


    if (location != -1)
    {
        cout<<"Element "<<x<<" has been found at array index: "<<location<<endl;
    }
    else
    {
        cout<<"Element "<<x<<" has not been found in array "<<endl;
    }


    return 0;

}