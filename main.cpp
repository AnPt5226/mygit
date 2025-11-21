#include <iostream>

using namespace std;

void Bubble(int *arr, int n)
{
    for(int i=0; i<n-1; i++)
    {
        bool flag=0;
        for(int j=0; j<n-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                flag=1;
            }
        }
        if(flag==0) break;
    }
}

int main()
{
    cout << "Please put in 8 numbers:" ;

    int nums[8];
    for(int i=0; i<8; i++)
    {
        cin>>nums[i];
    }

    Bubble(nums,8);

    cout<<"After sorting:";
    for(int i=0; i<8; i++)
    {
        cout<<" "<<nums[i];
    }
    cout<<endl;

    return 0;
}
