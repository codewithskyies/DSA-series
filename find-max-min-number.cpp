// #include <iostream>

// using namespace std;
// int main()
// {

//     int arr[6] = {2, 4, 6, 8, 9, 6};
//     int min = arr[0];
//     int max = arr[0];


//     for (int i = 0; i < 6; i++)

//     {
//          if (arr[i] > max){


//             max=arr[i];


//          }

//          else if (arr[i]>min){

//             min=arr[i];

//          }



            


//     }
          

//     cout << "min:"<<min<<endl;
//     cout <<"max:"<<max<<endl;










       


// return 0;


    
    
    
// }





#include <iostream>
using namespace std;

int main()
{
    int arr[6] = {2, 4, 6, 8, 9, 6};

    int min = arr[0];
    int max = arr[0];

    for (int i = 1; i < 6; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }

        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    cout << "min: " << min << endl;
    cout << "max: " << max << endl;

    return 0;
}
