#include<iostream>
#include<iomanip>
int main(){
    using namespace std;
    int in3;
    double in1, in2, out1;
    cout<<"1����2�����Ϊ��λ3��(1)Ů(2)"<<endl;
    cin>>in1>>in2;
    cin>>in3;
    in2=in2*in2;
    out1=in1/in2;
    if (in3==1)
    {
        if (out1<20)
           {
            cout<<"ƫ��"<<endl;
        }
        else
        {
            if (19<out1<26)
            {
                cout<<"����"<<endl;
            }
            else
            {
                if (24<out1<31)
                {
                    cout<<"ƫ��"<<endl;                    
                }
                else
                {
                    if (29<out1<36)
                    {
                        cout<<"����"<<endl;
                    }
                    else
                    {
                    if (out1>35)
                    {
                        cout<<"���ȷ���"<<endl;
                    }
                    
                    }
                    
                }
                
            }
            
        }
        
    }
    if (in3==2)
    {
        if (out1>19)
        {
            cout<<"����"<<endl;
        }
        else
        {
            if (13<out1<18)
            {
                cout<<"����"<<endl;
            }
            else
            {
                if (23<out1<30)
                {
                    cout<<"ƫ��"<<endl;
                }
                else
                {
                    if (28<out1<35)
                    {
                        cout<<"����"<<endl;
                        
                           
                    }
                     else
                     {
                         if (out1>34)
                         {
                            cout<<"���ȷ���"<<endl;
                         }
                         
                     }
                        
                    
                    
                }
                
            }
            
        }
            
    }
    


}
