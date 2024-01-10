#include<iostream>
using namespace std;


// all patterns
// to clear loop concept
// 1. Nested Loops
    // outer loop for no. of lines
    // inner loop for no.of cols(*) , and CONNECT THEM TO OUTER LOOP
// 2. Print anythin inside inner loop (*)
// 3. Observe sysmetry (optional)

void square(){
    int side;
    cout<<"Input side : ";
    cin>>side;
    for(int i = 0 ; i<side ; i++){
        for (int j = 0 ; j < side ; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}

void right_angle_triangle(){
    int rows;
    cout<<"Input rows : ";
    cin>>rows;
    for(int i = 1 ; i<=rows ; i++){
        for(int j = 0 ; j<i ; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void numbered_right_angle_traingle(){
    int rows;
    cout<<"Enter rows  : ";
    cin>>rows;
    for (int i = 1; i <= rows; i++)
    {
        int k=1;
        for (int j = 0; j < i; j++)
        {
            cout<<k;
            k++;
        }
        cout<<endl;
    }
}

void numbered_right_angle_traingle_1(){
    int rows;
    cout<<"Enter rows  : ";
    cin>>rows;
    for (int i = 1; i <= rows; i++)
    {
        
        for (int j = 0; j < i; j++)
        {
            cout<<i;
        }
        cout<<endl;
    }
}

void inverted_right_angle_triangle(){
    int rows;
    cout<<"Enter rows  : ";
    cin>>rows;
    for(int i = rows; i>0 ; i--){
        for (int j = 0; j < i; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}

void numbered_inverted_right_angled_triangle(){
    int rows;
    cout<<"Enter rows  : ";
    cin>>rows;

    for (int i = rows; i > 0; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<j;
        }
        cout<<endl;
    }   
}

void triangle(){
    int rows;
    cout<<"Enter rows : ";
    cin>>rows;

    for (int i = 1; i <= rows; i++)
    {
        for (int k = 0; k < rows-i; k++)
        {
            cout<<" ";
        }
        for (int j = 0; j < i; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}

void inverted_triangle(){
    int rows;
    cout<<"Enter rows : ";
    cin>>rows;
    
    for (int i = rows; i >= 1; i--)
    {
        for (int k = 0; k < rows-i ; k++)
        {
            cout<<" ";
        }
        for (int j = 0; j < i; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}

void diamond(){
    int rows;
    cout<<"Enter rows : ";
    cin>>rows;

    // upper triangle
    for (int i = 1; i <= rows; i++)
    {
        for (int k = 0; k < rows-i; k++)
        {
            cout<<" ";
        }
        for (int j = 0; j < i; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    // lower triangle  
    for (int i = rows; i >= 1; i--)
    {   
        for (int k = 0; k < rows-i+1; k++)  // +1 to print extra space
        {
            cout<<" ";
        }
        for (int j = 0; j < i-1; j++)    // -1 to not print 4**** again
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}

// IMP
void half_diamond(){
    int rows ;
    cout<<"Enter rows : ";
    cin>>rows;
    for (int i = 1; i <= 2*rows-1; i++)
    {
        if (i>rows)
        { 
            for (int k = 1; k <= 2*rows-i ; k++)
            {
                cout<<"* ";
            }
        } 
        else{
            for (int j = 0; j < i; j++)
            {
                cout<<"* "; 
            }
        }
        cout<<endl;
    }
}


// IMP
void binary_right_angle_triangle(){
    int rows,star ;
    cout<<"Enter rows : ";
    cin>>rows;

    for ( int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {   
            if ((i%2==0)^(j%2!=0))    // xor condition
            {
                cout<<1;
            }
            else{
                cout<<0;
            }
        }
        cout<<endl;
    }
}

// IMP
void crown(){
    int rows;
    cout<<"Enter Rows : ";
    cin>>rows;

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<j;
        } 
        for (int k = 1; k <= rows*2-i*2; k++)
        {
            cout<<" ";
        }
        for (int l = 0; l < i; l++)
        {
            cout<<(i-l);
        }
        cout<<endl;  
    }  
}

void alpha_triangle(){
    int rows;
    cout<<"Enter rows: ";
    cin>>rows;

    for (int i = 1; i <= rows; i++)
    {
        for (char j = 65; j < 65+i; j++)
        {
            cout<<char(j);
        }
        cout<<endl;
    }
}

void inverted_alpha_triangle(){
    int rows;
    cout<<"Enter rows: ";
    cin>>rows;

    for (int i = rows; i >= 1; i--)
    {
        for (char j = 65; j < 65+i; j++)
        {
            cout<<char(j);
        }
        cout<<endl;
    }
}

void alpha_tri(){
    int rows;
    cout<<"Enter rows: ";
    cin>>rows;

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 0; j < rows-i; j++)
        {
            cout<<" ";
        }
        for (int k = 65; k < 65+i; k++)
        {
            cout<<char(k)<<" ";
        }
        cout<<endl;
    }
}

void diamond_frame(){
    int rows;
    cout<<"Enter rows: ";
    cin>>rows;
    // upper part
    for (int i = rows; i >= 1; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout<<"*";
        }
        for (int j = 0; j < rows*2-i*2; j++)
        {
            cout<<" ";
        }
        for (int j = 0; j < i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    // lower part
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout<<"*";
        }
        for (int j = 0; j < rows*2-i*2; j++)
        {
            cout<<" ";
        }
        for (int j = 0; j < i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}


// just take diamond frame and invert upper and lower part
void butterfly(){
    int rows;
    cout<<"Enter rows: ";
    cin>>rows;
    // this is now upper part
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout<<"*";
        }
        for (int j = 0; j < rows*2-i*2; j++)
        {
            cout<<" ";
        }
        for (int j = 0; j < i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    // this is now lower part
    for (int i = rows; i >= 1; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout<<"*";
        }
        for (int j = 0; j < rows*2-i*2; j++)
        {
            cout<<" ";
        }
        for (int j = 0; j < i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

}

void square_border(){
    int side;
    cout<<"Enter side : ";
    cin>>side;

    for (int i = 1; i <= side; i++)
    {
        if (i==1 || i==side)
        {
            for (int j = 0; j < side; j++)
            {
                cout<<"*";
            }
        }
        else
        {
            for (int j = 0; j < 1; j++)
            {
                cout<<"*";
            }
            for (int j = 0; j < side-2; j++)
            {
                cout<<" ";
            }
            for (int j = 0; j < 1; j++)
            {
                cout<<"*";
            }
        }  
        cout<<endl;
    } 
}


// VERYYYY IMP
void numbered_square(){
    int rows;
    cout<<"Enter rows: ";
    cin>>rows;

    for (int i = 0; i < rows*2-1; i++)
    {
        for (int j = 0; j < 2*rows-1; j++)
        {
            int top = i;
            int left = j;
            int right = (2*rows-2)-j;
            int down = (2*rows-2)-i;
            cout<< (rows-min(min(top,down),min(left,right)));
        }
        cout<<endl;
    }
}

int main(){
    // 1
    // * * * *
    // * * * *
    // * * * *
    // * * * *
    // square();

    // 2
    // *
    // * *
    // * * *
    // * * * *
    // right_angle_triangle();

    // 3
    // 1
    // 1 2
    // 1 2 3 
    // 1 2 3 4
    // numbered_right_angle_traingle();

    // 4
    // 1
    // 2 2
    // 3 3 3 
    // 4 4 4 4
    // numbered_right_angle_traingle_1();

    // 5
    // * * * *
    // * * * 
    // * * 
    // * 
    // inverted_right_angle_triangle();

    // 6
    // 1 2 3 4 
    // 1 2 3 
    // 1 2  
    // 1 
    // numbered_inverted_right_angled_triangle(); 

    // 7
    //   *
    //  * *
    // * * *
    // triangle();

    // 8
    // * * *
    //  * *
    //   * 
    // inverted_triangle();

    // 9
    //   *
    //  * *
    // * * *
    //  * *
    //   *
    // diamond();

    // 10
    // *
    // * *
    // * * *
    // * *
    // *
    // half_diamond();

    // 11
    // 1
    // 0 1
    // 1 0 1
    // binary_right_angle_triangle();

    // 12
    // 1             1
    // 1 2         2 1 
    // 1 2 3     3 2 1
    // 1 2 3 4 4 3 2 1 
    // crown();

    // 13
    // A
    // A B
    // A B C
    // alpha_triangle();

    // 14
    // inverted_alpha_triangle();

    // 15
    // alpha_tri();

    // 16
    // ********
    // ***  ***
    // **    **
    // *      *
    // *      *
    // **    **
    // ***  ***
    // ********
    // diamond_frame();

    // 17
    // *      *
    // **    **
    // ***  ***
    // ********
    // ********
    // ***  ***
    // **    **
    // *      *
    // butterfly();

    // 18
    // * * * *
    // *     *
    // *     *
    // * * * *
    // square_border();

    // 19
    // 4 4 4 4 4 4 4
    // 4 3 3 3 3 3 4 
    // 4 3 2 2 2 3 4 
    // 4 3 2 1 2 3 4 
    // 4 3 2 2 2 3 4 
    // 4 3 3 3 3 3 4 
    // 4 4 4 4 4 4 4 
    numbered_square();
    return 0;
}