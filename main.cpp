#include <iostream>
#include <vector>
#include <string>
#include <stdio.h>
using namespace std;

int main() {
    vector<int> nums;
    bool stop = false;
    int i = 0;
    int temp;
    int scantemp;
    char c;
    while (stop != true)
    {
        scantemp = scanf("%d", &temp);
        if (scantemp == 1 && (getchar() == '\n'))
        {
            cout << "The number has been succesfully entered" << endl;
            nums.push_back(temp);
            ++i;
        }

        else if (scantemp == 0)
        {
            while (getchar() != '\n');
            stop = true;
        }

    }



    stop = false;
    int target;
    cout << "Please enter the target" << endl;

    while (stop != true)
    {
        if (scanf("%d", &target) == 1 && (getchar() == '\n'))
        {
            cout << "The number has been succesfully entered" << endl;
            stop = true;

        }

        else
        {
            printf("An unexpected error occured. Please, enter the number again\n");
            while (getchar() != '\n');
        }

    }


    unsigned int vector_size = nums.size();


    for(int k =0; k< nums.size();k++){
        for(int j=0; j< nums.size(); j++){
            if (nums[k] + nums[j]==target){
                cout << nums[k] << "+"<< nums[j]<<"="<<target<< endl;
            }
        }
    }

    return 0;
}
