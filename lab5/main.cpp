#include <iostream>
#include <iomanip>
#include <limits>

int sum_of_array (const int n, const int arr[])
{
    int s = 0;
    for (int i=0; i<n; i++)
    {
        s+=arr[i];
    }
    return s;
}

double average_of_array (const int n, const int arr[])
{
    double s = 0;
    for (int i=0; i<n; i++)
    {
        s+=arr[i];
    }
    return s/n;
}

int sum_of_neg (const int n, const int arr[])
{
    int s = 0;
    for (int i=0; i<n; i++)
    {
        if (arr[i] < 0)
        {
            s += arr[i];
        }
    }
    return s;
}

int sum_of_pos (const int n, const int arr[])
{
    int s = 0;
    for (int i=0; i<n; i++)
    {
        if (arr[i] > 0)
        {
            s += arr[i];
        }
    }
    return s;
}

int sum_of_even (const int n, const int arr[])
{
    int s = 0;
    for (int i=0; i<n; i++)
    {
        if (i%2==0)
        {
            s += arr[i];
        }
    }
    return s;
}

int sum_of_odd (const int n, const int arr[])
{
    int s = 0;
    for (int i=0; i<n; i++)
    {
        if (i%2==1)
        {
            s += arr[i];
        }
    }
    return s;
}

int min_elem (const int n, const int arr[])
{
    double min_elem = std::numeric_limits<double>::infinity();
    int min_elem_ind = 0;
    for (int i=0; i<n; i++)
    {
        if (arr[i] < min_elem)
        {
            min_elem = arr[i];
            min_elem_ind = i;
        }
    }
    return min_elem_ind;
}


int max_elem (const int n, const int arr[])
{
    double max_elem = std::numeric_limits<double>::infinity();
    max_elem = max_elem*(-1);
    int max_elem_ind = 0;
    for (int i=0; i<n; i++)
    {
        if (arr[i] > max_elem)
        {
            max_elem = arr[i];
            max_elem_ind = i;
        }
    }
    return max_elem_ind;
}



int min_max_product (const int n, const int arr[])
{
    double min_elem = std::numeric_limits<double>::infinity();
    double max_elem = min_elem*(-1);
    int max_elem_ind = 0;
    int min_elem_ind = 0;
    int p = 1;
    for (int i=0; i<n; i++)
    {
        if (arr[i] > max_elem)
        {
            max_elem = arr[i];
            max_elem_ind = i;
        }
        if (arr[i] < min_elem)
        {
            min_elem = arr[i];
            min_elem_ind = i;
        }
    }

    if (min_elem_ind==max_elem_ind)
    {
        p = 0;
    }
    else if (min_elem_ind < max_elem_ind)
    {
        for (int k=min_elem_ind+1;k<max_elem_ind;k++)
            p*=arr[k];
    }
    else
    {
        for (int k=max_elem_ind+1;k<min_elem_ind;k++)
            p*=arr[k];
    }

    return p;
}

int main() {
    const int n = 10; // узнать что такое константа
    int mas[n];
    for (int i=0; i<n; i++)
    {
        std::cout << "mas[" << i << "]=";
        std::cin >> mas[i];
    }

    std::cout << "Sum of array elements: " << sum_of_array(n, mas) << std::endl;
    std::cout << std::setprecision(2) << "Average of array: " << average_of_array(n, mas) << std::endl;
    std::cout << "Sum of negative elements: " << sum_of_neg(n, mas) << std::endl;
    std::cout << "Sum of positive elements: " << sum_of_pos(n, mas) << std::endl;
    std::cout << "Sum of elements with even indexes: " << sum_of_even(n, mas) << std::endl;
    std::cout << "Sum of elements with odd indexes: " << sum_of_odd(n, mas) << std::endl;
    std::cout << "Index of max element: " << max_elem(n, mas) << std::endl;
    std::cout << "Index of min element: " << min_elem(n, mas) << std::endl;
    std::cout << "Product of elements between max and min: " << min_max_product(n, mas) << std::endl;
    return 0;
}

